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
#include "SaveToDatabase.h"

using namespace std;
int main() {
    BookManager bookManager;
    CustomerManager customerManager;
    RentManager rentManager;
    SaveToDatabase database;
    HorrorPtr h1 (new Horror("Pet Sematary","horror",16));
    HorrorPtr h2 (new Horror("Shining","horror",16));
    HorrorPtr h3 (new Horror("IT","horror",16));
    LanguagePtr l1 (new Language("Japanese","language",1,1000));
    LanguagePtr l2 (new Language("English","language",5,3000));
    LanguagePtr l3 (new Language("Polish","language",2,2500));
    MathPtr m1 (new Math("Geometry","Lineat",2,2500));
    MathPtr m2 (new Math("Math 1","Derivitives",1,1000));
    MathPtr m3 (new Math("Math 2","Analisys",3,2500));

    CustomerPtr c1 (new Customer("Matiej","Antosiak",'r'));
    CustomerPtr c2 (new Customer("Poca","Hontas",'r'));
    CustomerPtr c3 (new Customer("Vincent","Malloy",'s'));
    CustomerPtr c4 (new Customer("Chan","Mio",'s'));

    bookManager.addBook(h1);
    bookManager.addBook(h2);
    bookManager.addBook(h3);
    bookManager.addBook(l1);
    bookManager.addBook(l2);
    bookManager.addBook(l3);
    bookManager.addBook(m1);
    bookManager.addBook(m2);
    bookManager.addBook(m3);
    customerManager.addCustomer(c1);
    customerManager.addCustomer(c2);
    customerManager.addCustomer(c3);
    customerManager.addCustomer(c4);

    rentManager.rentBook(l1,c1);
    rentManager.rentBook(h1,c1);
    rentManager.rentBook(l3,c2);
    rentManager.rentBook(m3,c2);
    rentManager.rentBook(h2,c4);
    rentManager.rentBook(h3,c4);
    database.save(customerManager);
    cout<<m1->fullBookInfo()<<endl;




















    return 0;
}