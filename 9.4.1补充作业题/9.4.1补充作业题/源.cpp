#include<iostream>
#include<iomanip>
#include"Employee.h"
using namespace std;

int mycompare(const void* p1, const void* p2);

void output(Employee* ptrarry, int cnt);//声明函数
EmployeeName names[6] ={ "jone","david","marit","jasen","peter","yoke" };//人名

int main() {
	cout << sizeof(Employee) << endl;
	
	//定义结构数组
	int cnt;
	cout << "请输入行数：" << endl;
	cin >> cnt;
	
	//分配动态内存
	Employee* ptrArry = new Employee[cnt];                                             //数组名是ptrArry,首地址是ptrArry
	
	//初始化员工列表
	for (int i = 0; i < cnt; i++) {
		ptrArry[i].code = i + 1;                                                      //编号
		ptrArry[i].salary = 2000
			+ ((int)((double)rand() / (RAND_MAX + 1) * 10000 * 100) / (double)100);   //收入
		strncpy_s(ptrArry[i].name, names[i % 6].name, 20);                            //strncpy函数拷贝name到数组中
		
	}
	
	//调用统计人数函数并输出人数
	int Num=countNums(cnt);
	cout << "人数为：" << Num << endl;                                               

	//调用统计平均值函数并输出
	double advan= advSalary(ptrArry, cnt);
	cout << "平均收入为：" << advan << endl;
	
	//输出表格
	cout << "排序前" << endl;
	output(ptrArry, cnt);
	
	//按工资排序
	qsort((void*)ptrArry, (size_t)cnt, sizeof(Employee), mycompare);//排序函数，传入数组首地址、元素数、元素大小、判定函数
	
	//输出
	cout << "排序后" << endl;
	output(ptrArry, cnt);
	
	//释放堆内存
	delete[]ptrArry;

	return 0;
}
