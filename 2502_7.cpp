#include <iostream>
using namespace std;
int main(){
	int num[5];
	int cnum[5];
	int MidNum;
	cout << "5���� ������ �Է��ϼ���. : ";
	cin >> num;
	cout << "�Էµ���Ÿ : ";
	for (int j = 0; j < 5; j++){
		cout << num[j] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++){
		for (int k = i+1; k < 5; k++){
			if (num[k] > num[i]){
				cnum[i] = num[i];
			}
		}
		cout << cnum[i];
	}
	cout << endl;
	MidNum = cnum[2];
	cout << "�߰��� : " << MidNum << endl;
	return 0;
}