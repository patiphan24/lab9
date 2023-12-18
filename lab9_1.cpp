#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double bank,rr,pay;
    int i = 1;
	cout << "Enter initial loan: ";
	cin >> bank;
	cout << "Enter interest rate per year (%): ";
	cin >> rr;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(bank>0){
	    
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << bank;
	double inter = bank*rr/100;
	cout << setw(13) << left << inter;
	double total = bank+inter;
	cout << setw(13) << left << total;
	if(pay > total){
	  pay = total;  
	}
	cout << setw(13) << left << pay;
	bank = total-pay;
	cout << setw(13) << left << bank;
	cout << "\n";
	i++;
	}
	return 0;
}