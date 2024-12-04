#include <iostream>
using namespace std;
int main(){
	double balance = 1000;
	int amount ,choice;
	
	do{
	cout<<"---ATM MENU"<<endl;
	cout<<"1.Check Balance"<<endl;
	cout<<"2.Withdraw Money"<<endl;
	cout<<"3.Deposit Money"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"5.Enter Your Choice";
	cin>>choice;
	}
	
	switch(choice){
		case 1:
			cout<<"Your balance is: $"<< endl <<;
			break;
			
		case 2:
			cout<<"Withdraw money is 1 - amount"<<balance<<;
			break;
			if{
				amount = balance 
				cout<<"Withdraw Successfully.your balance is: $<<balance";
				
				else{
					cout<<"Insufficient Balance";
				}	
				break;
		case 3:
			if{
				cout<<"Deposit your money == amount";
			}
			else{
				cout<<"deposit Successfully."
			}
			break;
		case 4:
			cout<<"Exit the program"<<endl;			
			}
		default:
			cout<<"Please Try Again";
						
	}while(choice !=4)
	return 0;
}
