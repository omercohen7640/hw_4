//
// Created by omerc on 28/12/2019.
//

#include "Employee.h"
Employee::Employee() : salary_(0)
{
    strcpy(name_,"");
    for (int i=0;i<7;i++)
    {
        strcpy(hours_[i],"");
    }

}

Employee::Employee(char **hours, char *name, int salary) : salary_(salary)
{
    strcpy(name_,name);
    hours_ = hours;
}

Employee::~Employee()
{
    for (int i = 0; i < 7; ++i) {
        delete *(hours_ + i);
    }
    delete hours_;
}

char* Employee::getName() const
{
    return name_;
}


