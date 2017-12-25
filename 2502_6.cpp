#include <iostream>
#include<time.h>
using namespace std;
int main(){
	int randNum[30];
	int check[] = { 0, };
	int num;
	cout << "마지막 수 : ";
	cin >> num;
	srand((unsigned)time(0));
	cout << "원본데이타 : ";
	for (int i = 0; i < 30; i++){
		randNum[i] = (rand() % num+1);
		cout << randNum[i] <<" ";
	}
	cout << endl;
	for (int j = 1; j <= num; j++){
		cout << j << " : " << check[j] << "개" << endl;
	}
	return 0;
}