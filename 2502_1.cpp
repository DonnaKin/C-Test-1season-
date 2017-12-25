#include <iostream>
using namespace std;
int main(){
	int inHour=0, outHour=0,inMi=0,outMi=0,hour, minute,hourTime = 0, minuteTime=  0;
	int hourParkingMoney = 0 , MinuteParkingmoney = 0;

	while (1){
		cout << "입차 시간을 입력하세요<24시간으로 표현> : ";
		cin >> inHour;
		cin >> inMi;
		cout << "출차 시간을 입력하세요<24시간으로 표현> : ";
		cin >> outHour;
		cin >> outMi;
		if (inHour < outHour) break;
		if (inHour > outHour){
			cout << "출차시간 오류!!! 다시입력해 주세요" << endl;
			continue;
		}
	}
		hourTime = outHour - inHour;
		minuteTime = outMi - inMi;
		cout << "주차시간 : " << hourTime << "시간 " << minuteTime << "분"<<endl;
		if (hourTime == 0) hourParkingMoney = 0;
		else if (hourTime > 0){
			hourParkingMoney = 1000 + ((hourTime-1 / 1) * 500);
		}
		MinuteParkingmoney = (minuteTime / 20) * 500;
		cout << "주차요금 : " << hourParkingMoney + MinuteParkingmoney<<endl;
	return 0;
}