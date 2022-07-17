#include <iostream>
using namespace std;
#include<string>
#define Day 7

/*
c++学习中
*/
int guess() {
	int num = rand() % 100 + 1;
	int k = 0;
	cin >> k;
	while (k != num) {
		if (k < num) {
			cout << "数字太小"<<endl;
		}
		else {
			cout << "数字太大"<<endl;
		}
		cin >> k;
	}
	cout << "bingo";

	system("pause");
	return 0;
}
