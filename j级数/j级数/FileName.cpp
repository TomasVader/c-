#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	int n;
	cout << "请输入n（n<10000）" ;
	cin >> n;
	int i = 0;
	float a = -1.0;
	float s = 0.0;
	float k =1.0 ;
	float t = 1.0;
	while (i < n) {
		int j = 0;
		while (j<=i)
		{
		k  *= 3.0;
		a *=- 1.0;
		t = a/ (3*k - 1);
		j++;
		}
		
		s += t;
		
		i++;
		//cout << "k=" << k << "s=" << s << endl;
	}
	cout << "结果是" << s;
	

}