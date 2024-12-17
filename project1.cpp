#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int days,amount,amount1;
char driver;
string name;
int a = 0;
string pass = "nigga";
string new_pass;
int op1;
char x;
int choice;

void horil (string x)
{
	cout<<"-\t\t\t"<<x<<"\t\t\t-"<<endl;
}
void vertil ()
{
	cout<<"================================================================================="<<endl;
	
	void password()
{
	int i = 0;
	while (i != 1)
	{
		cout<<"\t\t\t\tPLEASE ENTER THE PASSWORD: ";
        cin>>new_pass;
        if (new_pass == pass)
		{
			i = 1;
		 } 
		 else
		 {
		 	cout<<"Incorrect password"<<endl;
		 	i = 0;
		 }
	}

}
}
void customer ()
{
	cout<<"hello";
}
void cinfo()
{
	system ("cls");
	int bore;
	cout<<"1. Appa Shamim ------ Toyota Corolla Grande ------ Paid Rs.12,000 ------ Number: 03217895672"<<endl;
	cout<<"2. Babar Azam ------ Toyota Corolla Altis ------ Paid Rs.10,000 ------ Number: 00121789567"<<endl;
	cout<<"3. Shiekh bin Salman ------ Toyota Land Cruiser ------ Paid Rs.25,000 ------ Number: 03337895672"<<endl;
	cout<<"4. Suii ------ Honda Civic ------ Paid Rs.11,000 ------ Number: 03217895234"<<endl;
	cout<<"5. Baji Shabana ------ Honda Civic Turbo ------ Paid Rs.14,000 ------ Number: 0332454672"<<endl;
	cout<<"6. Prem ------ Audi A7 ------ Paid Rs.50,000 ------ Number: 0345321111"<<endl;
	cout<<"7. Avada Noor Kedavra ------ Audi A6 ------ Paid Rs.45,000 ------ Number: 01231231230"<<endl;
	if(driver=='y'){
		cout<<"\t\tNEW USER LIST\t\t"<<endl;
		cout<<"1. "<<name<<"--------"<<"Car no:"<<choice<<"In available cars"<<"-------"<<amount1<<"------"<<"Number : Pending"<<endl;}
		else{
				cout<<"1. "<<name<<"--------"<<"Car no:"<<choice<<"In available cars"<<"-------"<<amount<<"------"<<"Number : Pending"<<endl;
		}
	
		cout<<"\n\nPress 1 to go back \nPress 2 to exit"<<endl;
			cin>>bore;
			if (bore == 2)
			{
				a = 1;
			}
			else if (bore == 1)
			{
				a = 0;
			}
}

void admin1 ()
{
	system("cls");
	while (a != 1){
	system("cls");
	vertil();
	horil("Hello \t\t\t");
	horil("1. AVAILABLE CARS\t\t");
	horil("2. CARS IN USE\t\t\t");
	horil("3. CHECK CUSTOMER LIST\t\t");
	horil("4. EXIT\t\t\t\t");
	vertil();
	int op2;
	cin>>op2;
	switch (op2)
	{
		case 1:
			acars();
			break;
		case 2:
		    ucars();
			break;
		case 3:
		    finfo();
			break;
		case 4:
			a = 1;
		    break;	
			
	}
}
}

void further1()
{
	int a;
	vertil();
//	horil("Welcome to Dabang Car Rental Service");
//	horil("Choose from the following:\t");
	horil("1. ADMIN\t\t\t");
	horil("2. EXIT\t\t\t");
	vertil();
	cin>>a;
	if(a==1){
			password();
			admin1 ();
	}
	else{
		system("cls");
		cout<<"Thank you for choosing Dabang Car Rental Service ";
	}
}


int main ()
{
	system("color f");
	vertil();
	horil("Welcome to Dabang Car Rental Service");
	horil("Choose from the following:\t");
	horil("1. ADMIN\t\t\t");
	horil("2. CUSTOMER\t\t\t");
	vertil();
	cin>>op1;
	switch (op1)
	{
		case 1:
			password(); //need to add data
			break;
		case 2:
			do
    {
    interface();
    cout<<"\nDo you want to rent a car (y/n) ? : ";
    cin>>x;
    }
    while (x!='y' && x!='Y');
    CarsSelection();
    cout<<"Which Car Do You Want ? : ";
    cin>>choice;
			break;
	}
	return 0;
}
