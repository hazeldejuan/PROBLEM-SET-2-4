# include <iostream>

using namespace std;

int main(){
	float D1 = 1500;
	float D2 = 2300;
	float D3 = 1800;
	float TS = D1 + D2 + D3;
	float AveS = TS/3;
	
	cout << "Sales analysis(hUy)\n";
	cout <<"----------------------\n";
	cout << "Day 1 Sale: P" << D1 << endl;
	cout << "Day 2 Sale: P" << D2 << endl;
	cout << "Day 3 Sale: P" << D3 << endl;
	cout << "---------------------\n";
	cout << "Total Sales: P" << TS << endl;
	cout << "Average Sales/Day: P"<< AveS << endl;
	
	return 0;
}