#include "functions.h"
#include <iostream>


auto main() -> int // see also "trailing return type"
{
    Student student1{"Vici", 123456, 1005266};
    student1.print();
    student1.update_bank_account_number(2005266);
    printf("\nUpdated bank account number\n");
    student1.print();
    return 0;
}