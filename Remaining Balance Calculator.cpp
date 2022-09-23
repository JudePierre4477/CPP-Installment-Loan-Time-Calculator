#include <iostream>

using namespace std;

double initialPrice;
double interestRate;
double monthlyPayment;
double principal;
double interest;
int months;


int main(){

	cout << "		Remaining balance" << endl;
	cout << "\v" << endl;
	
	cout << " Please enter the initial price of the item: $";
	cin >> initialPrice;
	cout << endl;

	cout << " Please enter the interest rate: ";
	cin >> interestRate;

	interestRate = interestRate / 100;
	cout << endl;

	cout << " Please enter the monthly Payment you arranged for: $";
	cin >> monthlyPayment;
	cout << endl;
	
	cout << "\v" << endl;
	
	cout << "	Months";
	cout << "		Interest";
	cout <<	"			Principal" << endl;
	cout << endl;
	
	interest = initialPrice * interestRate;

	principal = (interest + initialPrice) - monthlyPayment;

	months = 1;
	

	while (	principal != monthlyPayment && principal > 0 ){

		cout << "	" << months;

		cout << "		" << interest;

		cout << "				" << principal <<endl;
		
		months++;
		
		interest = principal * interestRate;	
		
		principal = (interest + principal) - monthlyPayment;
		
				
			
			
	}

	cout << " Number of Payments = " << months  << ". " << "Last months interest = " << interest << ". " << "Last Payment = " << principal + interest + monthlyPayment << endl;
     

       return 0;


}



