#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>



Employee* emp_new(char* name, char* lastName, int age, int type, int id)
{
    Employee* newEmployee = malloc(sizeof(Employee));
    emp_setName(newEmployee,name);
    emp_setLastName(newEmployee,lastName);
    emp_setAge(newEmployee,age);
    emp_setType(newEmployee,type);
    emp_setId(newEmployee,id);

    return newEmployee;
}


int emp_delete(Employee* this)
{
    free(this);
    return 0;
}



int emp_setName(Employee* this,char* name)
{
    strcpy(this->name,name);
    return 0;
}


char* emp_getName(Employee* this)
{
    return this->name;
}


int emp_setLastName(Employee* this,char* lastName)
{
    strcpy(this->lastName,lastName);
    return 0;
}


char* emp_getLastName(Employee* this)
{
    return this->lastName;
}


int emp_setId(Employee* this,int id)
{
    this->id = id;
    return 0;
}

int emp_getId(Employee* this)
{
    return this->id;
}


int emp_setAge(Employee* this,int age)
{
    this->age = age;
    return 0;
}

int emp_getAge(Employee* this)
{
    return this->age;
}


int emp_setType(Employee* this,int type)
{
    this->type = type;
    return 0;
}


int emp_getType(Employee* this)
{
    return this->type;
}



int employee_filterEmployee(void* item)
{
    int retorno = 0;
    Employee* auxEmployee = (Employee*) item;
    if(emp_getAge(auxEmployee) > 30)
    {
        if(emp_getType(auxEmployee) == EMPLOYEE_TYPE_PROGRAMMER)
        {
            retorno = 1;
        }
    }
    return retorno;
}


void employee_print(Employee* this)
{
    printf("\nID: %d - Name: %s - Last Name: %s - Age: %d - Type: %d\n", emp_getId(this),
           emp_getName(this),emp_getLastName(this),emp_getAge(this),
           emp_getType(this));

}






