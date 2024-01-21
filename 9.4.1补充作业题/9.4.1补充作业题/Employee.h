#pragma once
//声明结构体
struct Employee
{
	long code;
	char name[20];
	float salary;
	char address[50];
	char phone[11];
};


struct EmployeeName
{
	char name[20];
};



//声明函数
int mycompare(const void* p1, const void* p2);
void output(Employee* ptrarry, int cnt);
int countNums(int cnt);
double advSalary(Employee* ptrArry, int cnt);




