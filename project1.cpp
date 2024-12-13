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

int interface();

int CarsSelection();


void vertil ()
{
	cout<<"================================================================================="<<endl;
}

void information()
{
	system("cls");
	vertil();
	horil("G RENTALS HAS BEEN PROVIDING\t ");
	horil("BEST RENTAL SERVICES SINCE 2019 ");
	horil("G RENTS VARIETY OF CARS SITTING IN");
	horil("GOOD CONDITION AND GIVES CUSTOMERS");
	horil("BEST SEVICES ACROSS MULTIPLE LOCATIONS");
	horil("TIMINGS: 9AM||7PM MONDAY TO SATURDAY");
	horil("FOR FURTHUR INFORMATION \t ");
	horil("CONTACT :03356543288||03340800013");
	vertil();
}

void Audi()
{
    system("cls");
    cout<<" \n\n\n\n\t\t\t\t****************** AUDI SPECS ****************** "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      MODEL : 2015"<<endl;
    cout<<"\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : 10 L/Km "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      COLOUR : Black "<<endl;


}
void Dodge()
{
    system("cls");
    cout<<" \n\n\n\t\t\t\t****************** DODGE SPECS ****************** "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      MODEL : 2015"<<endl;
    cout<<"\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : 13 L/Km "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      COLOUR : Red "<<endl;
}
void Mazda()
{
    system("cls");
    cout<<" \n\n\n\t\t\t\t****************** MAZDA SPECS ****************** "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      MODEL : 2020"<<endl;
    cout<<"\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : 07 L/Km "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      COLOUR : Black "<<endl;
}
void BMW()
{
    system("cls");
    cout<<" \n\n\n\t\t\t\t****************** BMW SPECS ****************** "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      MODEL : 2019"<<endl;
    cout<<"\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : 15 L/Km "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      COLOUR : White "<<endl;

}
void Mustang()
{
    system("cls");
    cout<<" \n\n\n\t\t\t\t****************** MUSTANG SPECS ****************** "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      MODEL : 2012"<<endl;
    cout<<"\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : 12 L/Km "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      COLOUR : Grey "<<endl;

}
void Volvo()
{
    system("cls");
    cout<<" \n\n\n\t\t\t\t****************** VOLVO SPECS ****************** "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      MODEL : 2022"<<endl;
    cout<<"\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : 14 L/Km "<<endl;
    cout<<"\n\n\n\t\t\t\t\t      COLOUR : Yellow "<<endl;
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
