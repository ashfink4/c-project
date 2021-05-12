#include <iostream> 
using namespace std;


void calculator(); 
void kmTom();
void sqkmTosqm();
void hrTos();
void EURtoUSD();

int main(){
	string name;
	int option; 
	
	
	cout<<"Hi, Welcome to universal convertor \n";
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"\nHello "<<name<<"\n"; 
	cout<<"choose your option : \n";
	
	cout<< "1: calculator \n"; 
	cout<< "2: KM to M convertor\n";
	cout<< "3: Area converter \n";
	cout<< "4: Time converter\n";
	cout<< "5: Currency converter\n";
	
	cin>>option;
	
	switch(option){
		case 1:
			calculator();
			break;
		case 2:
			kmTom();
			break;
		case 3:
			sqkmTosqm();
			break;
		case 4:
			hrTos();
			break;
		case 5:
			EURtoUSD();
			break;
		default:
			cout<<"Wrong option";
			break;
	}
}

void calculator(){ 
	int select;
	int num1, num2, answer;
	
	cout<<"choose your option \n";
	cout<< "1: Addition \n";
	cout<< "2: subtraction\n";
	cout<< "3: Multiplication \n";
	cout<< "4: Division \n";
	cin>>select;
	switch(select){
		case 1:
		cout<<" Addition\n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 + num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		case 2:
		cout<<" Subtraction\n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 - num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		case 3:
		cout<<" Multiplication\n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 * num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		case 4:
		cout<<" Division \n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 / num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		default:
			break;
	}
}

void kmTom(){ 
	float km;
	float meter;
	cout<<"\n Enter value in Kilometre: ";
	cin>>km;
	meter = km * 100;
	cout<<km<<" KM is equal to "<<meter<< " Meter \n\n";
}
void sqkmTosqm(){ 
	float sqkm;
	float sqm;
	cout<<"\n Enter value in Square Km: ";
	cin>>sqkm;
	sqm = sqkm * 1000000;
	cout<<sqkm<<" Square Km is equal to "<<sqm<< " Square meter \n\n";
}
void hrTos(){ 
	float hr;
	float s;
	cout<<"\n Enter value in Hour: ";
	cin>>hr;
	s = hr * 3600;
	cout<<hr<<" Hour is equal to "<<s<< " Seconds \n\n";
}
void EURtoUSD(){ 
	float EUR;
	float USD;
	cout<<"\n Enter value in EUR: ";
	cin>>EUR;
	USD = EUR * 1.2118744304;
	cout<<EUR<<" Euro is equal to "<<USD<< " United State Dollars \n\n";
}
