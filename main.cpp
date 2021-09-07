#include <iostream>
using namespace std;
int main() {
	float kwotabrutto;
	cout<<"Prosze podac kwote btutto "<<endl;
	cin>>kwotabrutto;
	cout<<"kwota podatku wynosi \t"<< kwotabrutto*0.19<<endl;
	cout<<"kwota netto wynosi \t"<< kwotabrutto - kwotabrutto*0.19<<endl;
	cout<<"Happy New Year"<<endl;
	return 0;
}
