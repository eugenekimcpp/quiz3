#include <string.h> 
#include "employee.h"


//return type is a ptr and defined in the employee.h
PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize; // set the end point for loop

    for(; ptr < endPtr; ptr++)
    {
        if(ptr->number == targetNumber)
        {
            // NOTE PtrToEmployee is already a pointer
            return (PtrToEmployee) ptr; // return location of the number of callee
        }
    }

    return NULL;
}

// Essentially the same functionality as above but comparing strings to check if equals
PtrToEmployee SearchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr<endPtr;ptr++)
    {
        if(strcmp(ptr->name,targetName) == 0)
        {
            return (PtrToEmployee) ptr;
        }
    }

    return NULL;
}

//search by Phone Number
PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *targetPhone)
{
    const PtrToConstEmployee endPtr = ptr + tableSize; // set the end point for loop

    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->phone == targetPhone) == 0) // phone number is string here
        {
            // NOTE PtrToEmployee is already a pointer
            return (PtrToEmployee) ptr; // return location of the number of callee
        }
    }

    return NULL;
}


//search by salary
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, long targetSalary)
{
    const PtrToConstEmployee endPtr = ptr + tableSize; // set the end point for loop

    for(; ptr < endPtr; ptr++)
    {
        if(ptr->salary == targetSalary)
        {
            // NOTE PtrToEmployee is already a pointer
            return (PtrToEmployee) ptr; // return location of the number of callee
        }
    }

    return NULL;
}