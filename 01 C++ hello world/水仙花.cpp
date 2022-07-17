#include<iostream>
using namespace std;

int shuixian() {
	for (int i = 100; i < 1000; ++i) {
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100;
		if (a*a*a + b * b*b + c * c*c == i)
			cout << i << ":this is a shuixian num" << endl;
	}
	system("pause");
	return 0;
}