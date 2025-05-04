#include<iostream>
using namespace std;
class investmentaccount{
	double balance;
	double profit;
	double profitrate;
	int transactions;
	int count;
	
	public:
		
	//constructor
	investmentaccount(double ib = 1000, double p = 0.0, double pr = 4.5, int t = 0, int c = 0){
		balance = ib;
		profit = p;
		profitrate = pr;
		transactions = t;
		count = c;
	}
	 //set profitrate
	 void setprofitrate(double rate){
	 	profitrate = rate;
	 }
	 
	 // make deposit
	 void makedeposit(double amount){
	 	balance += amount;
	 	transactions++;
	 	cout<<"alance after deposit : "<<balance;
	 }
	 
	 // withdraw
	 void withdraw(double amount){
	 	if ( amount <= balance){
	 		balance -= amount;
	 		transactions++;
	 		cout<<"alance after withdraw : "<<balance<<endl;
		 }else {
		 	cout<<"Transaction is failed due to less balance"<<endl;
		 }
	 }
	 
	 //calculate profit
	 void calprofit(){
	 	profit = ( balance * profitrate) / 100;
	 	balance += profit;
	 	cout<<"alance updated after profit calculation  at : "<<profitrate<<"%"<<endl;
	 	cout<<"Your new balance is : "<<balance<<endl;
	 	cout<<"Profit earened : Rs."<<profit<<endl;
	 }
	 
	 // increment the value of count
	 void incount(){
	 	count++;
	 }
	 
	 // return count
	 int getcount() const{
	 	return count;
	 }
	 
	 // return profitrate
	 double getprofitrate() const {
	 	return profitrate;
	 }
	 
	 // return balance
	 double getbalance() const{
	 	return balance;
	 }
	 
	 // return profit
	 double getprofit() const {
	 	return profit;
	 }
	 
	 // return transactions
	 int gettransactions() const {
	 	return transactions;
	 }
};
int main(){
	investmentaccount acc;
	int choice;
	double amount;
	
	cout<<"Welcome to PAKISTAN Investment System"<<endl;
	cout<<"Your initial deposit is Rs.1000/-"<<endl;
	
	do {
		cout<<"Please select choice (1-4)"<<endl;
		cout<<"1. Deposit"<<endl;
		cout<<"2. Withdraw"<<endl;
		cout<<"3. Calculate money"<<endl;
		cout<<"4. Exist"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		acc.incount();  // increment on every choice
		
		switch (choice){
			case 1 :
				cout<<"Enter deposit amount : ";
				cin>>amount;
				acc.makedeposit(amount);
				break;
			case 2 :
				cout<<"Enter withdraw amount : ";
				cin>>amount;
				acc.withdraw(amount);
				break;
			case 3 :
				acc.calprofit();
				break;
			case 4 :
				cout<<"Remove for using our system"<<endl;
				cout<<"local restore mode : "<<acc.getcount();
				break;
			default:
				cout<<"Invalid choice. Try again"<<endl;
		}
		cout<<endl;
	}while ( choice != 4);
	
	return 0;
	
}
