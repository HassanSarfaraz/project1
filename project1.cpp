#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <fstream>
using namespace std;

// GLOBAL VARIABLES
int days,amount,amount1;
char driver;
string name;
int a = 0;
string pass = "h";
string new_pass;
int op1;
int choice;

// FUCTIONS USED
void customers();
void horil();
void vertil ();
void information();
void CarsSelection();
void Charges();
void Calculate();
void password();
void acars();
void further1();


void horil (string x)
{
	cout<<"-\t\t\t"<<x<<"\t\t\t-"<<endl;
}

void vertil ()
{
	cout<<"================================================================================="<<endl;
}

void information() {
    system("cls");
    string infoLines[] = {
        "G RENTALS HAS BEEN PROVIDING\t ",
        "BEST RENTAL SERVICES SINCE 2019 ",
        "G RENTS VARIETY OF CARS SITTING IN",
        "GOOD CONDITION AND GIVES CUSTOMERS",
        "BEST SERVICES ACROSS MULTIPLE LOCATIONS",
        "TIMINGS: 9AM||7PM MONDAY TO SATURDAY",
        "FOR FURTHER INFORMATION \t ",
        "CONTACT: 03299155815 || 03009117593||0316989853"
    };
    int numLines = sizeof(infoLines) / sizeof(infoLines[0]);
    vertil();
    for (int i = 0; i < numLines; i++) {
        horil(infoLines[i]);
    }
    vertil();
}

void CarsSelection()
{
    system("cls");
    cout<<" \t\t\t ********* SELECT THE CAR *********"<<endl<<endl;
    string cars[5]={"Toyota","Honda","Tesla","Hyundai","Audi"};
    for (int i=0;i<5;i++)
{
    cout<<"\t\t\t\t\t  "<<i+1<<". "<<cars[i]<<endl;
}
    cout<<endl;
    int op3,bore;
    cin>>op3; 
    switch(op3)
	{
		case 1:
			cout<<"\t\t\tThe available Toyota car is: \nPremio \nMILEAGE: 3000km\nPRICE: PKR 15,000 "<<endl;
			
			break;
		case 2:
			cout<<"\t\t\tThe available Honda car is: \nCity \nMILEAGE: 30,000 km\nPRICE: PKR 6,000"<<endl;
			
			break;
		case 3:
			cout<<"\t\t\tThe available Tesla car is: \nCyberTruck \nMILEAGE: 100km\nPRICE: PKR 40,000"<<endl;
			
			break;
		case 4:
			cout<<"\t\t\tThe available Hyundai car is: \nTuscon \nMILEAGE: 1,000 km\nPRICE: PKR 15,000"<<endl;
			
			break;
		case 5:
			cout<<"\t\t\tThe available Audi car is: \nE-tron \nMILEAGE: 900 km\nPRICE: PKR 35,000"<<endl;

			break;
    }
}

void Charges(int x)
{
    cout<<" Do You Want Driver (y/n) ? : ";
	driver=getche();
    cout<<endl<<"Your name"<<endl;
    cin>>name;
    cout<<endl<<" For How Many Days ? : ";
    cin>>days;
    amount=days*x;
     if (driver=='y' || driver=='Y')
             {
                 amount1=(1000*days)+amount;
                 cout<<" Total Amount = "<<amount1<<" PKR"<<endl<<endl<<endl<<endl<<endl;
                 cout<<" \t\t\t\t ********** Thanks To Visit Guftaar Rent A Car Services **********";
                 cout<<endl<<endl<<endl<<endl<<endl;
             }
     else
                    {
                     cout<<" Total Amount = "<<amount<<" PKR"<<endl<<endl<<endl<<endl<<endl;
                     cout<<" \t\t\t\t ********** Thanks To Visit Guftaar Rent A Car Services **********";
                     cout<<endl<<endl<<endl<<endl<<endl;
                    }
}

void Calculate(int choice)
{
    system("cls");
    if ( choice==1)
           {
            cout<<"\t\t\t\t ********* You Selected Toyota ********* "<<endl;
            int t =15000;
            Charges(t);
           }
    else if ( choice==2)
           {
            cout<<"\t\t\t\t ********* You Selected Honda ********* "<<endl;
            int t=30000;
            Charges(t);
           }
    else if ( choice==3)
           {
            cout<<"\t\t\t\t ********* You Selected Tesla ********* "<<endl;
            int t=40000;
            Charges(t);
           }
    else if ( choice==4)
           {
            cout<<"\t\t\t\t ********* You Selected Hyundai ********* "<<endl;
            int t=15000;
            Charges(t);
           }       
    else if ( choice==5)
           {
            cout<<"\t\t\t\t ********* You Selected Audi ********* "<<endl;
            int t =35000;
            Charges(t);
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
void acars()
{
	int op3, bore;
	cout<<"\t\t\t1. Toyota \n\t\t\t2. Honda \n\t\t\t3. Tesla \n\t\t\t4. Hyundai \n\t\t\t5. Audi \n\t\t\t6. Back"<<endl;
	cin>>op3;
	system ("cls");
	switch(op3)
	{
		case 1:
			cout<<"\t\t\tThe available Toyota car is: \nPremio \nMILEAGE: 3000km\nPRICE: PKR 15,000 "<<endl;
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
			break;
		case 2:
			cout<<"\t\t\tThe available Honda car is: \nCity \nMILEAGE: 30,000 km\nPRICE: PKR 6,000"<<endl;
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
			break;
		case 3:
			cout<<"\t\t\tThe available Tesla car is: \nCyberTruck \nMILEAGE: 100km\nPRICE: PKR 40,000"<<endl;
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
			break;
		case 4:
			cout<<"\t\t\tThe available Hyundai car is: \nTuscon \nMILEAGE: 1,000 km\nPRICE: PKR 15,000"<<endl;
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
			break;
		case 5:
			cout<<"\t\t\tThe available Audi car is: \nE-tron \nMILEAGE: 900 km\nPRICE: PKR 35,000"<<endl;
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
			break;
		case 6:
			break;
	}
}

void ucars ()
{
	int op4, bore;
	cout<<"\t\t\t1. Toyota \n\t\t\t2. Honda \n\t\t\t3. Tesla \n\t\t\t4. Hyundai \n\t\t\t5. Audi \n\t\t\t6. Back"<<endl;
	cin>>op4;
	system ("cls");
	switch(op4)
	{
		case 1:
			cout<<"\t\t\tThe current Toyota cars in use are: \nCorolla (Grande) \nTO: MS. Appa Shamim\n\nCorolla (Altis) \nTO: MR. Babar Azam\n\nLand Cruiser \nTO: Shiekh Bin Salman"<<endl;
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
			break;
		case 2:
			cout<<"\t\t\tThe current Honda cars in use are: \nCivic \nTO: MR. Suii\n\nCivic Turbo \nTO: MS. Baji Shabana"<<endl;
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
			break;
		case 3:
			cout<<"\t\t\tThe current Tesla cars in use are: \nNO CARS CURRENTLY RENTED"<<endl;
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
			break;
		case 4:
			cout<<"\t\t\tThe current Hyundai cars in use are: \nNO CARS CURRENTLY RENTED"<<endl;
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
			break;
		case 5:
			cout<<"\t\t\tThe current Audi cars in use are: \nAudi A7\nTO: MR. Prem\n\nAudi A6\nTO: MR. Avada Noor Kedavra"<<endl;
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
			break;
    }
}

void cinfo() {
    system("cls"); 
    ifstream file("customers.txt"); 

    if (!file.is_open()) { 
        cout << "Error: Could not open the file 'customers.txt'." << endl;
        cout << "Make sure the file exists in the same directory as the program." << endl;
        cout << "Press any key to continue...";
        cin.ignore();
        cin.get();
        return;
    }
    string line;
    cout << "Customer Information:\n\n";
    while (getline(file, line)) { 
        cout << line << endl;
    }

    file.close(); 

    int bore;
    cout << "\n\nPress 1 to go back \nPress 2 to exit" << endl;
    cin >> bore;

    if (bore == 2) {
        a = 1; 
    } else if (bore == 1) {
        a = 0; 
    }
}

void admin ()
{
	system("cls");
	while (a != 1){
	system("cls");
	vertil();
	horil("1. AVAILABLE CARS\t\t");
	horil("2. CARS IN USE\t\t\t");
	horil("3. CHECK CUSTOMER LIST\t\t");
    horil("4. BACK\t\t\t\t");
	horil("5. EXIT\t\t\t\t");
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
		    cinfo();
			break;
        case 4:
            further1();
		    break;	

		case 5:
			a = 1;
		    break;	
			
	    }
    }
}

void further1()
{
	int a;
	vertil();
	horil("1. ADMIN\t\t\t");
    horil("2. CUSTOMER\t\t\t");
	horil("3. EXIT\t\t\t\t");
    
	vertil();
	cin>>a;
	if(a==1){
			password();
			admin ();
	}
    else if(a==2){

    }
	else{
		system("cls");
		cout<<"Thank you for choosing Guftar Car Rental Service ";
	}
}

void customers(){
    int choi;
		cout<<"\nDo you want to rent a car(press 1) ? : ";
    	cin>>choi;
		if(choi==1)
		{
			CarsSelection();
		}
		else{
            cout<<"Thank you for choosing Guftar Car Rental Service ";
	
			exit(0);
        }

        cout<<"Which Car Do You Want ? : ";
    cin>>choice;
    Calculate(choice);
    further1();    
}

int main ()
{
	system("color f");
	vertil();
	horil("Welcome to Guftaar Car Rental Service");
	horil("Choose from the following:\t");
	horil("1. ADMIN\t\t\t");
	horil("2. CUSTOMER\t\t\t");
    horil("3. INFORMATION\t\t\t");
	vertil();
	cin>>op1;
	if(op1==1)
	{
		password();
		admin();
		return 0;
	}
	else if(op1==2)
	{
        customers();
        
	}
    else if(op1==3)
	{
		information();
        further1();
        exit(0);
	}
	}