#include <iostream>
using namespace std;
#include<string>
#define Day 7

/*
c++ѧϰ��
*/
int guess() {
	int num = rand() % 100 + 1;
	int k = 0;
	cin >> k;
	while (k != num) {
		if (k < num) {
			cout << "����̫С"<<endl;
		}
		else {
			cout << "����̫��"<<endl;
		}
		cin >> k;
	}
	cout << "bingo";

	system("pause");
	return 0;
}
