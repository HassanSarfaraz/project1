#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <fstream>
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
        "CONTACT: 03356543288 || 03340800013"
    };

    int numLines = sizeof(infoLines) / sizeof(infoLines[0]);

    vertil();
    for (int i = 0; i < numLines; i++) {
        horil(infoLines[i]);
    }
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

void Charges()
{
  
    
    cout<<" Do You Want Driver (y/n) ? : ";
    driver=getche();
    cout<<endl<<"Your name"<<endl;
    cin>>name;
    cout<<endl<<" For How Many Days ? : ";
    cin>>days;
    amount=days*500;
     if (driver=='y' || driver=='Y')
             {
                 amount1=(1000*days)+amount;
                 cout<<" Total Amount = "<<amount1<<" PKR"<<endl<<endl<<endl<<endl<<endl;
                 cout<<" \t\t\t\t ********** Thanks To Visit Dabang Rent A Car Services **********";
                 cout<<endl<<endl<<endl<<endl<<endl;
             }
     else
                    {
                     cout<<" Total Amount = "<<amount<<" PKR"<<endl<<endl<<endl<<endl<<endl;
                     cout<<" \t\t\t\t ********** Thanks To Visit Dabang Rent A Car Services **********";
                     cout<<endl<<endl<<endl<<endl<<endl;
                    }
}
void Calculate(int choice)
{
    system("cls");
    if ( choice==1)
           {
            cout<<"\t\t\t\t ********* You Selected AUDI ********* "<<endl;
            Charges();
           }
    else if ( choice==2)
           {
            cout<<"\t\t\t\t ********* You Selected DODGE ********* "<<endl;
            Charges();
           }
    else if ( choice==3)
           {
            cout<<"\t\t\t\t ********* You Selected MAZDA ********* "<<endl;
            Charges();
           }
    else if ( choice==4)
           {
            cout<<"\t\t\t\t ********* You Selected BMW ********* "<<endl;
            Charges();
           }       
    else if ( choice==5)
           {
            cout<<"\t\t\t\t ********* You Selected MUSTANG ********* "<<endl;
            Charges();
           }      
    else if ( choice==6)
           {
            cout<<"\t\t\t\t ********* You Selected VOLVO ********* "<<endl;
            Charges();
           }
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
void acars()
{
	int op3, bore;
	cout<<"\t\t\t1. Toyota \n\t\t\t2. Honda \n\t\t\t3. Tesla \n\t\t\t4. Hyundai \n\t\t\t5. Audi \n\t\t\t6. Back"<<endl;
	cin>>op3;
	system ("cls");
	switch(op3)
	{
		case 1:
			cout<<"\t\t\tThe available Toyota cars are: \nPremio \nMILEAGE: 3000km\nPRICE: PKR 15,000 \n\nYaris \nMILEAGE: 10,000km\nPRICE: PKR 6,000 \n\nRevo \nMILEAGE: 5000km\nPRICE: PKR 12,000"<<endl;
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
			cout<<"\t\t\tThe available Honda cars are: \nCity \nMILEAGE: 30,000 km\nPRICE: PKR 6,000"<<endl;
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
			cout<<"\t\t\tThe available Tesla cars are: \nCyberTruck \nMILEAGE: 100km\nPRICE: PKR 40,000 \n\nModel S \nMILEAGE: 70 km\nPRICE: PKR 50,000"<<endl;
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
			cout<<"\t\t\tThe available Hyundai cars are: \nTuscon \nMILEAGE: 1,000 km\nPRICE: PKR 15,000"<<endl;
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
			cout<<"\t\t\tThe available Audi cars are: \nE-tron \nMILEAGE: 900 km\nPRICE: PKR 35,000 \n\nAudi A4 \nMILEAGE: 4,000 km\nPRICE: PKR 20,000 "<<endl;
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
		case 6:
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
		    cinfo();
			break;
		case 4:
			a = 1;
		    break;	
			
	}
}
}
void customer ()
{
	cout<<"hello";
}
void finfo()
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
}}

void further1()
{
	int a;
	vertil();
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
			password();
			admin ();
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
    Calculate(choice);
			break;
	}
	further1();
}
