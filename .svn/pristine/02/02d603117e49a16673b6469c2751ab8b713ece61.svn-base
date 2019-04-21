//
// Created by pobi on 15.01.19.
//

#include <boost/test/unit_test.hpp>
#include "../include/BookManager.h"
#include "../include/CustomerManager.h"
#include "../include/RentManager.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Book.h"
#include "Customer.h"
#include "Educational.h"
#include "Horror.h"
#include "Language.h"
#include "Math.h"
#include "Regular.h"
#include "Rent.h"
#include "Student.h"
#include "BookManager.h"
#include "CustomerManager.h"
#include "RentManager.h"
#include "BookRepo.h"

using namespace std;
BOOST_AUTO_TEST_SUITE(BasicModelTestSuite)



    BOOST_AUTO_TEST_CASE(CheckException) {
        BookManager bookManager;
        CustomerManager customerManager;
        RentManager rentManager;

        HorrorPtr h1 (new Horror("Pet Sematary","horror",16));
        HorrorPtr h2 (new Horror("Shining","horror",16));
        HorrorPtr h3 (new Horror("IT","horror",16));

        CustomerPtr c2 (new Customer("Poca","Hontas",'r'));
        CustomerPtr c4 (new Customer("Chan","Mio",'s'));
        string exceptionMessage;
        rentManager.rentBook(h1,c4);
        try{
                rentManager.rentBook(h1,c2);
        }catch(RentException RE){
                exceptionMessage=RE.Data;
            }
        BOOST_CHECK_EQUAL( exceptionMessage, "A customer tried to rent a book that is already rented bo someone else!" );

    }
    BOOST_AUTO_TEST_CASE(AddRemoveCustomerTest) {
            CustomerManager customerManager;
            CustomerPtr c1 (new Customer("Poca","Hontas",'r'));
            customerManager.addCustomer(c1);
            BOOST_CHECK_EQUAL( customerManager.getCustomer(c1->getID())->getID(), c1->getID() );
            customerManager.removeCustomer(c1->getID());
            BOOST_CHECK_EQUAL( customerManager.getCustomer(c1->getID())->getFirstName(), "CustomerNotExisting" );
    }
    BOOST_AUTO_TEST_CASE(AddRemoveBookTest) {
            BookManager bookManager;
            HorrorPtr h1 = make_shared<Horror>("Pet Sematary","horror",16);
            bookManager.addBook(h1);
            BOOST_CHECK_EQUAL( bookManager.getBook("Pet Sematary")->getTitle(), "Pet Sematary" );
            bookManager.removeBook(h1->getTitle());
            BOOST_CHECK_EQUAL( bookManager.getBook("Pet Sematary")->getTitle(), "BookNotExisting" );
    }
    BOOST_AUTO_TEST_CASE(AddRemoveRentTest) {
            RentManager rentManager;
            CustomerPtr c1 =make_shared<Customer>("Poca","Hontas",'r');
            HorrorPtr h1 = make_shared<Horror>("Pet Sematary","horror",16);
            boost::uuids::uuid ID1 = rentManager.rentBook(h1,c1);
            map<boost::uuids::uuid,RentPtr> rents = rentManager.getRentForCustomer(c1->getID());
            BOOST_CHECK_EQUAL( rents.begin()->first, ID1 );
            rents.begin()->second->setBeginDate(LTime(PTime(boost::posix_time::second_clock::local_time()) - boost::posix_time::hours(466), TZone()));
            BOOST_CHECK_EQUAL(  rents.begin()->second->rentDuration(), 20 );
            BOOST_CHECK_EQUAL( rentManager.returnBook(rents.begin()->first), 150 );
            rents = rentManager.getRentForCustomer(c1->getID());
            BOOST_CHECK_EQUAL( rents.size(), 0 );
    }

BOOST_AUTO_TEST_SUITE_END()
