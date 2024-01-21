#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	//创建数组
	//遇0则停
	//输出最大
	//输出次大
//1 定义数组
	int i = 1;
	int nums[100] ;
	for (int j = 0; j < 100; j++) {
		nums[j] = 0;
	}

//2 下面输入数组
	cout << "请输入数组长度,不能超过100" << endl;
	cin >> i;

	for (int j = 0; j < i; j++) {
		cout << "请输入第" << j + 1 << "个数组元素" << endl;
		cin >> nums[j];
		if (nums[j] == 0) {
			cout << "输入中出现零，停止输入" << endl;
			nums[j] = 0;
			break;
		}
	}
	//测试用代码：
	//for (int j = 0; j < i; j++) {
	//	cout << nums[j] << endl;
	//}

	
//3 下面进行结算
	int Max = nums[0];
	int* p=NULL;
	//找最大
	for (int j = 0; j < i; j++) {
		if (nums[j] > Max) {
			Max = nums[j];
			p = & nums[j];
		}
	}
	cout << "最大数为" << Max << endl;
	*p = 0;
	//调试用代码
	/*cout<<*p<<endl;
	for (int j = 0; j < i; j++) {
		cout << nums[j] << endl;
	}*/
	//找次大
	int Sec= nums[0];
	for (int j = 0; j < i; j++) {
		if (nums[j] > Sec) {
			Sec = nums[j];
		}
	}
	cout << "第二大数为" << Sec << endl;
}






