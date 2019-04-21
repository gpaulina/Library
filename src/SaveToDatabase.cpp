//
// Created by pobi on 17.01.19.
//

#include "SaveToDatabase.h"
void SaveToDatabase::save(CustomerManager& manager) {
    map<boost::uuids::uuid,CustomerPtr> toSave = manager.getAllCustomers();
    ofstream customerDatabaseWrite;
    customerDatabaseWrite.open ("/home/pobi/Pulpit/Project/DatabaseNames.txt");
    for(auto& it : toSave)
    {
        customerDatabaseWrite<<it.second->getFirstName()<<"\n";
        customerDatabaseWrite<<it.second->getLastName()<<"\n";
        if(it.second->getCustomerType()->getMaxRentDuration()==15)
        {
            customerDatabaseWrite<<'S'<<"\n";
        }
        else
        {
            customerDatabaseWrite<<'R'<<"\n";
        }
        customerDatabaseWrite<<it.first<<"\n";


    }
    customerDatabaseWrite.close();


}

void SaveToDatabase::load(CustomerManager& manager) {


    ifstream customerDatabaseRead;
    string tempFirstName;
    string tempLastName;
    string tempTypeString;
    string tempUUIDStr;
    CustomerPtr tempCustomer;
    char tempType;
    boost::uuids::uuid tempUUID;
    map<boost::uuids::uuid,CustomerPtr> readCustomers;
    boost::uuids::string_generator gen;

    customerDatabaseRead.open ("/home/pobi/Pulpit/Project/DatabaseNames.txt");
    while(getline(customerDatabaseRead,tempFirstName))
    {
        getline(customerDatabaseRead,tempLastName);
        getline(customerDatabaseRead,tempTypeString);
        tempType = tempTypeString[0];
        getline(customerDatabaseRead,tempUUIDStr);

//        cout<<tempFirstName<<"\n";
//        cout<<tempLastName<<"\n";
//        cout<<tempType<<endl;
//        cout<<tempUUIDStr<<endl;
        tempUUID = gen(tempUUIDStr);

        tempCustomer = make_shared<Customer>(tempFirstName,tempLastName,tempType);
        tempCustomer->setCustimerID(tempUUID);
        readCustomers[tempUUID] = tempCustomer;
        manager.addCustomer(tempCustomer);
    }


}