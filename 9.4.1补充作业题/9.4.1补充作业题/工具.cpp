#include<iostream>
#include"Employee.h"
#include<iomanip>
using namespace std;
//�������
void output(Employee* ptrArry, int cnt) {
	cout << "���ţ�\t������\t����" << endl;
	for (int i = 0; i < cnt; i++) {
		cout << ptrArry[i].code
			<< ",\t" << ptrArry[i].name
			<< ",\t" << ptrArry[i].salary << endl;
		
	}
}
//�ж�����
int mycompare(const void* p1, const void* p2) {
	int rt = 0;
	//ָ��ָ����������Ԫ��
	Employee* a = (Employee*)p1;
	Employee* b = (Employee*)p2;
	//�ж�
	if (a->salary < b->salary) rt = -1;
	else if (a->salary == b->salary) rt = 0;
	else rt = 1;
	return rt;

}
//ͳ����������
int countNums(int cnt) {
	if (cnt <= 6) {
		return cnt ;
	}
	else {
		return 6 ;
	}
}
//ͳ��ƽ�����뺯��
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

