#include <stdio.h>
#include "employee.h"
#include "heap.h"
#include <string.h>

#define MAX_EMPLOYEES 5

int main(int argc, char *argv[])
{
	Employee empArr[MAX_EMPLOYEES];
	char inputName[25];
	int inputSalary;

	for (int i = 0; i < MAX_EMPLOYEES; i++)
	{
		printf("Name: ");
		scanf("%s", inputName);
		printf("Salary: ");
		scanf("%d", &inputSalary);

		strcpy(empArr[i].name, inputName);
		empArr[i].salary = inputSalary;
	}
	
	heapSort(empArr, MAX_EMPLOYEES);

	printList(empArr, MAX_EMPLOYEES);
	
	return 0;
}
