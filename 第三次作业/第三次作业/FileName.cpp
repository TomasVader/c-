#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	//��������
	//��0��ͣ
	//������
	//����δ�
//1 ��������
	int i = 1;
	int nums[100] ;
	for (int j = 0; j < 100; j++) {
		nums[j] = 0;
	}

//2 ������������
	cout << "���������鳤��,���ܳ���100" << endl;
	cin >> i;

	for (int j = 0; j < i; j++) {
		cout << "�������" << j + 1 << "������Ԫ��" << endl;
		cin >> nums[j];
		if (nums[j] == 0) {
			cout << "�����г����㣬ֹͣ����" << endl;
			nums[j] = 0;
			break;
		}
	}
	//�����ô��룺
	//for (int j = 0; j < i; j++) {
	//	cout << nums[j] << endl;
	//}

	
//3 ������н���
	int Max = nums[0];
	int* p=NULL;
	//�����
	for (int j = 0; j < i; j++) {
		if (nums[j] > Max) {
			Max = nums[j];
			p = & nums[j];
		}
	}
	cout << "�����Ϊ" << Max << endl;
	*p = 0;
	//�����ô���
	/*cout<<*p<<endl;
	for (int j = 0; j < i; j++) {
		cout << nums[j] << endl;
	}*/
	//�Ҵδ�
	int Sec= nums[0];
	for (int j = 0; j < i; j++) {
		if (nums[j] > Sec) {
			Sec = nums[j];
		}
	}
	cout << "�ڶ�����Ϊ" << Sec << endl;
}






