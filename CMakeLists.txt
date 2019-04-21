cmake_minimum_required(VERSION 3.13)




set(CMAKE_CXX_STANDARD 14)



project(LuxuriousLibrary)
enable_language(CXX)

#Source Files


set(SOURCE_FILES
         main.cpp src/Book.cpp include/Book.h src/Horror.cpp include/Horror.h src/Educational.cpp include/Educational.h src/Math.cpp include/Math.h src/Language.cpp include/Language.h src/Rent.cpp include/Rent.h src/Customer.cpp include/Customer.h src/CustomerType.cpp include/CustomerType.h src/Student.cpp include/Student.h src/Regular.cpp include/Regular.h src/CustomerManager.cpp include/CustomerManager.h src/CustomerRepo.cpp include/CustomerRepo.h src/BookManager.cpp include/BookManager.h src/BookRepo.cpp include/BookRepo.h src/RentManager.cpp include/RentManager.h src/RentRepo.cpp include/RentRepo.h src/RentException.cpp include/RentException.h src/SaveToDatabase.cpp include/SaveToDatabase.h)

add_executable(LuxuriousLibrary ${SOURCE_FILES} main.cpp src/Book.cpp include/Book.h src/Horror.cpp include/Horror.h src/Educational.cpp include/Educational.h src/Math.cpp include/Math.h src/Language.cpp include/Language.h src/Rent.cpp include/Rent.h src/Customer.cpp include/Customer.h src/CustomerType.cpp include/CustomerType.h src/Student.cpp include/Student.h src/Regular.cpp include/Regular.h src/CustomerManager.cpp include/CustomerManager.h src/CustomerRepo.cpp include/CustomerRepo.h src/BookManager.cpp include/BookManager.h src/BookRepo.cpp include/BookRepo.h src/RentManager.cpp include/RentManager.h src/RentRepo.cpp include/RentRepo.h src/RentException.cpp include/RentException.h src/SaveToDatabase.cpp include/SaveToDatabase.h)

target_include_directories(LuxuriousLibrary PUBLIC include)

#TESTs
find_package(Boost 1.65 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

#Test source files here
set(SOURCE_TEST_FILES
        test/TestOne.cpp
        src/Book.cpp include/Book.h src/Horror.cpp include/Horror.h src/Educational.cpp include/Educational.h src/Math.cpp include/Math.h src/Language.cpp include/Language.h src/Rent.cpp include/Rent.h src/Customer.cpp include/Customer.h src/CustomerType.cpp include/CustomerType.h src/Student.cpp include/Student.h src/Regular.cpp include/Regular.h src/CustomerManager.cpp include/CustomerManager.h src/CustomerRepo.cpp include/CustomerRepo.h src/BookManager.cpp include/BookManager.h src/BookRepo.cpp include/BookRepo.h src/RentManager.cpp include/RentManager.h src/RentRepo.cpp include/RentRepo.h src/RentException.cpp include/RentException.h test/TestOne.cpp test/master.cpp src/SaveToDatabase.cpp include/SaveToDatabase.h)

add_executable(TestProject ${SOURCE_TEST_FILES} src/Book.cpp include/Book.h src/Horror.cpp include/Horror.h src/Educational.cpp include/Educational.h src/Math.cpp include/Math.h src/Language.cpp include/Language.h src/Rent.cpp include/Rent.h src/Customer.cpp include/Customer.h src/CustomerType.cpp include/CustomerType.h src/Student.cpp include/Student.h src/Regular.cpp include/Regular.h src/CustomerManager.cpp include/CustomerManager.h src/CustomerRepo.cpp include/CustomerRepo.h src/BookManager.cpp include/BookManager.h src/BookRepo.cpp include/BookRepo.h src/RentManager.cpp include/RentManager.h src/RentRepo.cpp include/RentRepo.h src/RentException.cpp include/RentException.h test/TestOne.cpp test/master.cpp src/SaveToDatabase.cpp include/SaveToDatabase.h)

target_include_directories(TestProject PUBLIC include)

target_link_libraries(TestProject
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

enable_testing()

add_test(NAME Test COMMAND TestOne
        --report_level=detailed
        --log_level=all
        --color_output=yes)
