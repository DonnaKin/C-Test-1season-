#include <iostream>
using namespace std;
int main(){
	int inHour=0, outHour=0,inMi=0,outMi=0,hour, minute,hourTime = 0, minuteTime=  0;
	int hourParkingMoney = 0 , MinuteParkingmoney = 0;

	while (1){
		cout << "���� �ð��� �Է��ϼ���<24�ð����� ǥ��> : ";
		cin >> inHour;
		cin >> inMi;
		cout << "���� �ð��� �Է��ϼ���<24�ð����� ǥ��> : ";
		cin >> outHour;
		cin >> outMi;
		if (inHour < outHour) break;
		if (inHour > outHour){
			cout << "�����ð� ����!!! �ٽ��Է��� �ּ���" << endl;
			continue;
		}
	}
		hourTime = outHour - inHour;
		minuteTime = outMi - inMi;
		cout << "�����ð� : " << hourTime << "�ð� " << minuteTime << "��"<<endl;
		if (hourTime == 0) hourParkingMoney = 0;
		else if (hourTime > 0){
			hourParkingMoney = 1000 + ((hourTime-1 / 1) * 500);
		}
		MinuteParkingmoney = (minuteTime / 20) * 500;
		cout << "������� : " << hourParkingMoney + MinuteParkingmoney<<endl;
	return 0;
}