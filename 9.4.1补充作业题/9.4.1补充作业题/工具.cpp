#include<iostream>
#include"Employee.h"
#include<iomanip>
using namespace std;
//输出函数
void output(Employee* ptrArry, int cnt) {
	cout << "工号，\t姓名，\t工资" << endl;
	for (int i = 0; i < cnt; i++) {
		cout << ptrArry[i].code
			<< ",\t" << ptrArry[i].name
			<< ",\t" << ptrArry[i].salary << endl;
		
	}
}
//判定函数
int mycompare(const void* p1, const void* p2) {
	int rt = 0;
	//指针指向两个数组元素
	Employee* a = (Employee*)p1;
	Employee* b = (Employee*)p2;
	//判定
	if (a->salary < b->salary) rt = -1;
	else if (a->salary == b->salary) rt = 0;
	else rt = 1;
	return rt;

}
//统计人数函数
int countNums(int cnt) {
	if (cnt <= 6) {
		return cnt ;
	}
	else {
		return 6 ;
	}
}
//统计平均收入函数
double advSalary(Employee* ptrArry, int cnt) {
	int nums;
	double altog=0;
	if (cnt <= 6) {
		nums= cnt;
	}
	else {
		nums= 6;
	}
	for (int i = 0; i < nums; i++) {
		altog += ptrArry[i].salary;
	}
	return altog/nums;
}

