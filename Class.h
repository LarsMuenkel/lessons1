#ifndef skdjfsjkfjsf
#define skdjfsjkfjsf


#include <iostream>

class Student
{
   public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    std::string name;
   private:
    int bank_account_number;
    // define a constructor
   public:
    Student(std::string par_name, int32_t par_id, int par_bank_account_number);
    void print() const;
    void update_bank_account_number(int new_bank_account_number)
    {
        bank_account_number = new_bank_account_number;
    }

};

#endif