#include <string.h> 
#include <stdlib.h> 
#include "employee.h"




int main(void){
    //defined in employeeTable.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
    PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *targetPhone);
    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, long targetSalary);
    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; // Declaration
    
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if(matchPtr != NULL)
    {
        printf("Employee ID 1045 is in record");
    }
    else
    {
        printf("Employee ID is NOT found in the record\n");
    }

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
    {
        printf("Employee Tony Bobcat is in record");
    }
    else
    {
        printf("Employee Tony Bobcat is NOT found in the record\n");
    }

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if(matchPtr != NULL)
    {
        printf("Employee phone number with 909-555-1235 is in the record\n");
    }
    else
    {
        printf("Employee phone number with 909-555-1235 is not in the record\n");
    }

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 4.50);
    if(matchPtr != NULL)
    {
        printf("Employee with salary $4.50 is in the record");
    }
    else
    {
        printf("Employee with salaray $4.50 is not in the record\n");
    }

    return 0;

}