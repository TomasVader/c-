#include<iostream>
#include<iomanip>
#include"Employee.h"
using namespace std;

int mycompare(const void* p1, const void* p2);

void output(Employee* ptrarry, int cnt);//��������
EmployeeName names[6] ={ "jone","david","marit","jasen","peter","yoke" };//����

int main() {
	cout << sizeof(Employee) << endl;
	
	//����ṹ����
	int cnt;
	cout << "������������" << endl;
	cin >> cnt;
	
	//���䶯̬�ڴ�
	Employee* ptrArry = new Employee[cnt];                                             //��������ptrArry,�׵�ַ��ptrArry
	
	//��ʼ��Ա���б�
	for (int i = 0; i < cnt; i++) {
		ptrArry[i].code = i + 1;                                                      //���
		ptrArry[i].salary = 2000
			+ ((int)((double)rand() / (RAND_MAX + 1) * 10000 * 100) / (double)100);   //����
		strncpy_s(ptrArry[i].name, names[i % 6].name, 20);                            //strncpy��������name��������
		
	}
	
	//����ͳ�������������������
	int Num=countNums(cnt);
	cout << "����Ϊ��" << Num << endl;                                               

	//����ͳ��ƽ��ֵ���������
	double advan= advSalary(ptrArry, cnt);
	cout << "ƽ������Ϊ��" << advan << endl;
	
	//������
	cout << "����ǰ" << endl;
	output(ptrArry, cnt);
	
	//����������
	qsort((void*)ptrArry, (size_t)cnt, sizeof(Employee), mycompare);//�����������������׵�ַ��Ԫ������Ԫ�ش�С���ж�����
	
	//���
	cout << "�����" << endl;
	output(ptrArry, cnt);
	
	//�ͷŶ��ڴ�
	delete[]ptrArry;

	return 0;
}
