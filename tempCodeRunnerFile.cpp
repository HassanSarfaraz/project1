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
}
	
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
