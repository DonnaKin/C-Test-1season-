#include <iostream>
using namespace std;
int main(){
	int num, result=1,i=1;
	cout << "¼ö ÀÔ·Â : ";
	cin >> num;
	do{
		cout << result << "+" << ++i << "=" << result + i << endl;
		result = result + i;
	} while (i<num);
	return 0;
}