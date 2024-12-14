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
	
void CarsSelection()
{
    system("cls");
    cout<<" \t\t\t ********* SELECT THE CAR *********"<<endl<<endl;
    string cars[6]={"AUDI","DODGE","MAZDA","BMW","MUSTANG","VOLVO"};
    for (int i=0;i<=5;i++)
{
    cout<<"\t\t\t\t\t  "<<i+1<<". "<<cars[i]<<endl;
}
    cout<<endl;

}

void interface()
{    
    system("cls");
    cout<<"\t\t\t WELCOME TO DABANG RENT A CAR SERVICES "<<endl<<endl;
    vertil();
    horil("Do you want to rent a car (y)? : ");
    vertil();
	cout<<"\n\n\t\t\t\t    CARS DETAIL "<<endl<<endl;
    cout<<"\t\t ***************************************************"<<endl;
    cout<<"\t\t *    \t\t     1.Audi  \t\t\t   * "<<endl;
    cout<<"\t\t * \t\t\t\t\t\t   *"<<endl;
    cout<<"\t\t *    \t\t     2.Dodge          \t\t   *"<<endl;
    cout<<"\t\t * \t\t\t\t\t\t   *"<<endl;
    cout<<"\t\t *    \t\t     3.Mazda         \t\t   * "<<endl;
    cout<<"\t\t * \t\t\t\t\t\t   *"<<endl;
    cout<<"\t\t *   \t\t     4.BMW              \t   * "<<endl;
    cout<<"\t\t * \t\t\t\t\t\t   *"<<endl;
    cout<<"\t\t *   \t\t     5.Mustang          \t   * "<<endl;
    cout<<"\t\t * \t\t\t\t\t\t   *"<<endl;
    cout<<"\t\t *   \t\t     6.Volvo            \t   *"<<endl;
    cout<<"\t\t * \t\t\t\t\t\t   *"<<endl;
    cout<<"\t\t ***************************************************"<<endl;
    cout<<"\t\t\tFor further info about us press: 7\t"<<endl;
    cout<<" Enter Your Choice ============>> ";
    char choice;
    cin>>choice;
    
    switch(choice)
    {
case '1' :
            Audi();
            break ;
case '2' :
                
            Dodge();
            break ;
case '3' :

            Mazda();
            break ;
case '4' :

            BMW();
            break ;
case '5' :

            Mustang();
            break ;
case '6' :

            Volvo();
            break ;
case '7' :
	        information();
	        break;
case 'y':
	       
            while (choice!='y' && choice!='Y');
            CarsSelection();
            cout<<"Which Car Do You Want ? : ";
            cin>>choice;
            Calculate(choice);
			break;
    }
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
