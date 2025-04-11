#include "Class.h"
#include <iostream>



Student::Student(std::string par_name, int32_t par_id, int32_t par_bank_account_number) : name{par_name}
{
    /*
        Initialization can be done
        1. directly in the declaration
        2. in the initializer list of the constructor definition
        3. in the constructor itself
    */
    bank_account_number = par_bank_account_number;
    id_number = par_id;
}
void Student::print() const
{
    // print code goes here!
    std::cout << "Name: " << name << "\nID: " << id_number << "\nNumber of exams: " << num_of_exams << std::endl 
              << "Bank account number: " << bank_account_number << std::endl;
}
auto main() -> int // see also "trailing return type"
{
    Student student1{"Vici", 123456, 1005266};
    student1.print();
    student1.update_bank_account_number(2005266);
    printf("\nUpdated bank account number\n");
    student1.print();
    return 0;
}