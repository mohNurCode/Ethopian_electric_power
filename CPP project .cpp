#include <cstdlib> 
#include <iostream> 
#include <ctime> 
#include <iomanip> 
#include<string>
#include <windows.h> 

using std::cout;
using std::cin;
using std::string;
using std::endl;
 

      struct region
        {
	       string reg;
	       string distr;
	
        };
        

      struct adress
       {
	     string city;
	     int wereda;
	    struct region r;
       };


     struct electric_pwore
       {
	      string user;
	      string name;
	      string pass;
	      double pho;
	      string id;
	      struct adress ad;
		
       };
       
  typedef struct electric_pwore power;

void password(electric_pwore a[],int length);
void service(electric_pwore a[], int length);
void greenTree(int width, HANDLE &handle) 

{ 

std::srand(unsigned(std::time(0))); 

 

int half = width/2 ; 

for(int i=0; i<half; i++) 

{  

//cout.fill('* '); 


cout<<std::setw(half+i); 

size_t color_result(0); 

for(int j=1; j<2*i; ++j) 

{ 

char particle=(std::rand()%2?'x':'*'); 

if('*'==particle) color_result=4; 

if('x'==particle) 

{ 

particle=(std::rand()%2?'o':'.'); 

color_result='.'==particle?12:15; 

} 

if(i==1&&j==1) color_result=7, particle='^',color_result=14;//star) 

if(i==2&&j==1 ) color_result=7, particle='<',color_result=14;//star) 

if(i==2&&j==3 ) color_result=7, particle='>',color_result=14;//star) 

if(i==2&&j==2 ) color_result=7, particle='O',color_result=12;//звезда) 

if(i==3&&j==2 ) color_result=7, particle='/',color_result=14;//star) 

if(i==3&&j==3 ) color_result=7, particle='^',color_result=14;//star) 

if(i==3&&j==4 ) color_result=7, particle='\\',color_result=14;//star) 

SetConsoleTextAttribute(handle, color_result); 

cout<<particle; 

} 

cout<<std::endl; 

} 

} 


  int english(  )
  {
  	HANDLE output; 

COORD cursor; 
	struct electric_pwore p[100];
	int length=5;
	char op;
	
         	
			  p[0]= {"mame","mamed","1234a",04471,"ET.125d",{"A.A",1,{"kolfe","south"}}};
			    p[1]={"abdu","abdulhafiz","456b",04472,"ET.121c",{"A.A",2,{"nfasslk","north"}}};
				p[2]={"ak","abdulkerim","789c",04473,"ET.123e",{"A.A",3,{"yeka","west"}}};
				p[3]={"kal","kalab","1011d",04474,"ET.124f",{"A.A",4,{"bole","este"}}};
				p[4]={"hikma","hikma","1213c",04475,"ET.126g",{"A.A",5,{"ldeta","nothest"}}};
output = GetStdHandle(STD_OUTPUT_HANDLE); 

cursor.X = 0; 

cursor.Y = 0; 

system("cls");
  	SetConsoleTextAttribute(output, 8);
  	
  cout<<"\n\n\n";
  cout<<"\t\t\t\t\t"<<"                         *****                           \n";
  cout<<"\t\t\t\t\t"<<"                    ++++++++++++++++                    \n";
  cout<<"\t\t\t\t\t"<<"           --------------------------------            \n";
  cout<<"\t\t\t\t\t"<<"+*****************************************************+\n";
  cout<<"\t\t\t\t\t"<<"|   WELCOME TO ETHIOPIAN ELECTRIC POWER COOPERATION   |\n";
  cout<<"\t\t\t\t\t"<<"+*****************************************************+\n\n";
  	password(p,5);
  	

  }
 void amharic()
 {
 	char op;
 	system("cls");
 	cout<<"\n\n";
 	      cout<<"\t\t\t"<<"+-------+\n";
 	      cout<<"\t\t\t"<<"|warning|: SORRY DEV'S CPP IS NOT SUPPORT AMHARIC LANGUAGE\n ";
 	      cout<<"\t\t\t"<<"+-------+\n\n";
 	      cout<<"\t\t\t"<<"+=========================================================================+\n";
          cout<<"\t\t\t"<<"| 1.To go to engilsh languge and to continue the program  |   2.To exit   |\n ";
          cout<<"\t\t\t"<<"+=========================================================================+\n";
       cin>>op;

                           switch(op)
                                 {
   	                                case '1':
   		                                english();
   		                                      break;
   	                                case '2':
	                                            break;	
                                 }
 }
  
int sub_main()
       {
       	
          	char op;
	
             	cout<<"\n\n\n\t\t\t\t\t            Choice your language\n";
            	cout<<"\n\t\t\t                   1. ENGLISH                 2.AMHARIC\n";
	
	cin>>op;
	
	switch(op)
	{
		case '1':
			english();
			break;
		case '2':
		     
			 amharic();
			 break;
		default:cout<<"\t\t\t"<<"your input character is invalid try agian\n";
		
			 	
	}
      	
      }//end of sub_main function
      
  
void password(electric_pwore a[],int length)
      {
    char op;  	
    string id;
    struct electric_pwore p[100];
	int len=5;
      	
      	p[0]= {"mame","mamed","1234a",04471,"ET.125d",{"A.A",1,{"kolfe","south"}}};
			    p[1]={"abdu","abdulhafiz","456b",04472,"ET.121c",{"A.A",2,{"nfasslk","north"}}};
				p[2]={"ak","abdulkerim","789c",04473,"ET.123e",{"A.A",3,{"yeka","west"}}};
				p[3]={"kal","kalab","1011d",04474,"ET.124f",{"A.A",4,{"bole","este"}}};
				p[4]={"hikma","hikma","1213c",04475,"ET.126g",{"A.A",5,{"ldeta","nothest"}}};
      	string username;
      	string passwordd;
      	
      
    cout<<"\t\t\t\t\t\t"<<"+-----------------------------------+\n";  	
	cout<<"\t\t\t\t\t\t"<<"|    Enter Username and Password    |\n";
	cout<<"\t\t\t\t\t\t"<<"+-----------------------------------+\n";
	cout<<"\n\t\t\t\t\tUSERNAME:";
	cin>>username;
	cout<<"\n\t\t\t\t\tPASSWORD:";
	cin>>passwordd;
	
	for(int x=0;x<length;x++)
	{
		{
		
	if(username==a[x].user && passwordd==a[x].pass )
	    {
	       service(p,5);	
				    	
     	}
	else{
		cout<<"\n\t\t\t"<<"****invalid USERNAME or PASSWORD***\n";
	
		goto k;
	}
	break;
  }
  k:{
  	cout<<"\n";
  	    cout<<"\t\t\t"<<" +============+                                               +=====================+\n";
		cout<<"\t\t\t"<<" | 1.try agian|                                               |2.forgottn passwored |\n";
		cout<<"\t\t\t"<<" +============+                                               +=====================+\n";
		cout<<"\t\t\t"<<"                                +========+\n";
		cout<<"\t\t\t"<<"                                | 3.EXIT |\n";
		cout<<"\t\t\t"<<"                                +========+\n";
		cin>>op;
		switch(op)
		{
			case '2':
				system("cls");
				cout<<"\n\n\n\n\n\n";
	    cout<<"\t\t\t"<<"                                       +=====================+\n";
		cout<<"\t\t\t"<<"                                       | forgottn passwored  |\n";
		cout<<"\t\t\t"<<"                                       +=====================+\n";
              		
				cout<<"\t\t\t"<<"Enter usrename:";
				cin>>username;
				cout<<"\n\t\t\t"<<"Enter your metre ID:";
				cin>>id;
			for(int x=0;x<length;x++)
			{
				if(username==a[x].user &&id==a[x].id)
				{
					cout<<"\n";
					cout<<"\t\t\t"<<"                  +-----+\n";
					cout<<"\t\t\t"<<"your password is->|"<<a[x].pass<<"|<--PLEASE CHANGE YOUR PASSWORD"<<endl;
					cout<<"\t\t\t"<<"                  +-----+\n";
					system("pause");
					service(p,5);
				}
				
				else{
					cout<<"\t\t\t"<<"invalid \n";
				
				}
				break;
			}
			break;
			
			case '1':
				system("cls");
				cout<<"\n\n\n\n\n\n\n";
		cout<<"\t\t\t"<<"                                             +============+\n";
		cout<<"\t\t\t"<<"                                             |  Try agian |\n";
		cout<<"\t\t\t"<<"                                             +============+\n";
				cout<<"\n\t\t\t\t\tUSERNAME:";
             	cin>>username;
             	cout<<"\n\t\t\t\t\tPASSWORD:";
            	cin>>passwordd;
	
	     for(int x=0;x<length;x++)
         	{
	               	{
		
                 	if(username==a[x].user && passwordd==a[x].pass )
	                    {
	                       service(p,5);	
				    	
                     	}
	               else
				       {
		            cout<<"\t\t\t"<<"invalid\n";
	                  }
	                  break;
                  }
   break;
      	   }
	break;
	
	     	case '3':
					break;
		}
 }
 break;
	
	}

}

void home()
{
HANDLE output; 

COORD cursor; 

output = GetStdHandle(STD_OUTPUT_HANDLE); 

cursor.X = 0; 

cursor.Y = 0; 
  system("cls");
	SetConsoleTextAttribute(output, 9);
	cout<<"\t\t\t\t\t\t\t"<<"+======================+\n";
	cout<<"\t\t\t\t\t\t\t"<<"|------->ABOUT<--------|\n";
	cout<<"\t\t\t\t\t\t\t"<<"+======================+\n";
		SetConsoleTextAttribute(output, 6);
	cout<<"\n\n";
	cout<<"\t\t\t"<<"-->Native name:-  Etiopia Electric power\n\n";
	cout<<"\t\t\t"<<"-->Type :- State-owened enterprise\n\n";
	cout<<"\t\t\t"<<"-->industry :-  Electric generation\n\n";
	cout<<"\t\t\t"<<"-->Founded :- 1956 ;66 years ago \n\n";
	cout<<"\t\t\t"<<"-->Headquarters :-  Addis Abeba,Ethiopia\n\n";
	cout<<"\t\t\t"<<"-->Area served :-  Etiopia ,Djibouti,kenya\n\n";
	cout<<"\t\t\t"<<"-->Key people:- Abreham belay CEO\n\n";
		SetConsoleTextAttribute(output, 4);
	cout<<"\t\t\t"<<"***website :-  www.eep.gov.et\n\n";
		SetConsoleTextAttribute(output, 2);
	cout<<"\t\t\t\t\t"<<"                                               +=============================================+\n";
	cout<<"\t\t\t\t\t"<<"                                               |  Developed by :-MEHAMMEDNUR HASHIM AND .....|\n";
	cout<<"\t\t\t\t\t"<<"                                               +=============================================+\n";
}

int pay(electric_pwore a[], int length)
{
	struct electric_pwore p[100];
	int len=5;

   char op;
	string name,name1,id;
	
     int x, watts,months,hours = 24;

     float bill1 = 0.0;

     float bill2 = 0.0;
     p[0]= {"mame","mamed","1234a",04471,"ET.125d",{"A.A",1,{"kolfe","south"}}};
			    p[1]={"abdu","abdulhafiz","456b",04472,"ET.121c",{"A.A",2,{"nfasslk","north"}}};
				p[2]={"ak","abdulkerim","789c",04473,"ET.123e",{"A.A",3,{"yeka","west"}}};
				p[3]={"kal","kalab","1011d",04474,"ET.124f",{"A.A",4,{"bole","este"}}};
				p[4]={"hikma","hikma","1213c",04475,"ET.126g",{"A.A",5,{"ldeta","nothest"}}};
   system("cls"); 
	cout<<"\t\t\t\t\t\t\t"<<"+----------------------------------------------+\n";
	cout<<"\t\t\t\t\t\t\t"<<"|------->TO PAY A MONTHLY ELECTRIC FEE<------- |\n";
	cout<<"\t\t\t\t\t\t\t"<<"+----------------------------------------------+\n";
	cout<<"\n\n";
	
	cout<<"\t\t\t"<<"1.TO PAY MYSELF\n";
	cout<<"\t\t\t"<<"2.TO PAY ANOTEHR CUSTOMER\n";
	
	cin>>op;
	switch(op)
	{
		case '1':
			cout<<"\t\t\t\t\t\t\t"<<"+----------------------------------------------+\n";
			cout<<"\t\t\t\t\t\t\t"<<"|--------------->TO PAY MYSELF<----------------|\n";
		    cout<<"\t\t\t\t\t\t\t"<<"+----------------------------------------------+\n";
		   
			
		cout<<"\n\t\t"<<"->ENTER NAME:-";
	    cin>>name;
	    cout<<"\n\t\t"<<"->ENTER METRE ID:-";
	    cin>>id;
	    
	    for(int x=0;x<length;x++)
	    {
	      
			
	    	if(name==a[x].name &&id==a[x].id)
	    	{
	    		
	    		 cout<<"\t\t"<<"\n->ENTER WATT AND MONTH\n";
		 cin>>watts>>months;
		 float units = watts*hours*(30*months)/(1000.0);

        cout << "Total units consumed :" << units <<"\n";

        cout << " " << "\n";
        cout<<"\t\t\t"<<"+-----------------------------------------------+\n";
        cout<<"\t\t\t"<<"| Slab      |     Rate  |    Units  |   Charges |\n";
        cout<<"\t\t\t"<<" ----------- ----------- ----------- ----------- \n";

        cout << " " << "\n";
              if (units<=150.0)

                               {

                                    bill1 = 5.50*units;

                                    bill2 = bill2 + bill1;
       
                                    cout<<"\t\t\t"<<"|0-150      |  5.50     |"<<units<<"|"<<bill1<<"|"<< endl;

                                    cout << " " << endl;

                               }

            else if (units>150.0 && units<=300.0)

                        {

                              bill1 = (5.50*150);

                              bill2 = bill2 + bill1;
      
                             cout<<"\t\t\t"<<"| 0-150     |  5.50     |   150     |"<<bill1<<"|" << endl;

                             bill1 = (6.0*(units-150.0));
      
                             cout<<"\t\t\t"<<"| 150-300   | 6.0       |"<<units-150<<"|"<<bill1<<"|"<< endl;

                            bill2 = bill2 + bill1;

cout << " " << endl;

                        }

         else if(units>300.0 && units<=500.0)

                     {

                             bill1 = (5.50*150);

                             bill2 = bill2 + bill1; 

                             cout<<"\t\t\t"<<"| 0-150     | 5.50      |  150      |"<<bill1<<"|"<< endl;

                             bill1 = (6.0*150);

                             bill2 = bill2 + bill1;
     
                             cout<<"\t\t\t"<<"|150-300    |  6.0      | 150       |"<<bill1<<"|"<< endl;

                             bill1 = (6.50*(units-300.0));

                             bill2 = bill2 + bill1;
      
                              cout<<"\t\t\t"<<"|300-500    |  6.50     |"<<units-300<<"|"<<bill1<<"|"<< endl;

                             cout << " " << endl;

                     }

else if(units>500.0)

{

bill1 = (5.50*150);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|0-150      |  5.50     |   150 "<<"|"<<bill1<<"|"<< endl;

bill1 = (6.0*150);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|150-300    |  6.0      |  150      |"<<bill1<<"|"<< endl;

bill1 = (6.50*200);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|300-500    |  6.50     | 200       |"<<bill1<<"|"<< endl;

bill1 = (7.0*(units-500.0));

bill2 = bill2 + bill1;
    
      cout<<"\t\t\t"<<"|>500       |  7.0      |"<< units-500<<"|"<<bill1<<"|"<< endl;

cout << " " << endl;

}

                                      float fixed_charge = 110.0;

                                      float regulatory_surcharge = 246.0;

                                      float tax = 332.0;
    time_t newuptime=time(0);
	
	char*date=ctime(&newuptime);
	
                                  cout<<"\t\t"<<"-->custumer Name:"<<name;
                                  cout << " " << endl;

                                  cout<<"\t\t"<<"-->Final Bill Generated" << endl;

                                cout << " " << endl;

                                 cout<<"\t\t"<<"-->Fixed Charges " << fixed_charge << endl;

                                  cout<<"\t\t"<<"-->Units Charges " << bill2 << endl;

                                  cout<<"\t\t"<<"-->Regulatory Surcharges " << regulatory_surcharge << endl;

                                  cout<<"\t\t"<<"-->Tax " << tax << endl;

                                bill2 = fixed_charge + bill2 + regulatory_surcharge + tax;

                                 cout<<"\t\t"<<"-->Total Bill-" << bill2 << endl;
                                 cout<<"\t\t"<<"-->DATE-"<<date;
			}
		
		  
		 }
	
	
		  cout<<"your enter name is not the same to database plesse try agian\n";

break;
		
		
	    case '2':
	    	cout<<"\t\t\t\t\t\t\t"<<"+--------------------------------------------------------+\n";
			cout<<"\t\t\t\t\t\t\t"<<"|--------------->TO PAY ANOTHER CUSTUMER<----------------|\n";
		    cout<<"\t\t\t\t\t\t\t"<<"+--------------------------------------------------------+\n";
		cout<<"\n\t\t"<<"->ENTER NAME:-";
	    cin>>name;
	    cout<<"\n\t\t"<<"->ENTER METRE ID:-";
	    cin>>id;
	    cout<<"\n\t\t"<<"->ENTER PAID CUSTOMER NAME:";
	    cin>>name1;
	    
	    for(int x=0;x<length;x++)
	    {
	      
			
	    	if(name==a[x].name &&id==a[x].id)
	    	{
	    		
	    		cout<<"\t\t"<<"\n->ENTER WATT AND MONTH\n";
		 cin>>watts>>months;
		 float units = watts*hours*(30*months)/(1000.0);

        cout << "Total units consumed :" << units <<"\n";

        cout << " " << "\n";
        cout<<"\t\t\t"<<"+-----------------------------------------------+\n";
        cout<<"\t\t\t"<<"| Slab      |     Rate  |    Units  |   Charges |\n";
        cout<<"\t\t\t"<<" ----------- ----------- ----------- ----------- \n";

        cout << " " << "\n";
        if (units<=150.0)

{

bill1 = 5.50*units;

bill2 = bill2 + bill1;
       
       cout<<"\t\t\t"<<"|0-150      |  5.50     |"<<units<<"|"<<bill1<<"|"<< endl;

cout << " " << endl;

}

else if (units>150.0 && units<=300.0)

{

bill1 = (5.50*150);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"| 0-150     |  5.50     |   150     |"<<bill1<<"|" << endl;

bill1 = (6.0*(units-150.0));
      
      cout<<"\t\t\t"<<"| 150-300   | 6.0       |"<<units-150<<"|"<<bill1<<"|"<< endl;

bill2 = bill2 + bill1;

cout << " " << endl;

}

else if(units>300.0 && units<=500.0)

{

bill1 = (5.50*150);

bill2 = bill2 + bill1; 

       cout<<"\t\t\t"<<"| 0-150     | 5.50      |  150      |"<<bill1<<"|"<< endl;

bill1 = (6.0*150);

bill2 = bill2 + bill1;
     
      cout<<"\t\t\t"<<"|150-300    |  6.0      | 150       |"<<bill1<<"|"<< endl;

bill1 = (6.50*(units-300.0));

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|300-500    |  6.50     |"<<units-300<<"|"<<bill1<<"|"<< endl;

cout << " " << endl;

}

else if(units>500.0)

{

bill1 = (5.50*150);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|0-150      |  5.50     |   150 "<<"|"<<bill1<<"|"<< endl;

bill1 = (6.0*150);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|150-300    |  6.0      |  150      |"<<bill1<<"|"<< endl;

bill1 = (6.50*200);

bill2 = bill2 + bill1;
      
      cout<<"\t\t\t"<<"|300-500    |  6.50     | 200       |"<<bill1<<"|"<< endl;

bill1 = (7.0*(units-500.0));

bill2 = bill2 + bill1;
    
      cout<<"\t\t\t"<<"|>500       |  7.0      |"<< units-500<<"|"<<bill1<<"|"<< endl;

cout << " " << endl;

}

float fixed_charge = 110.0;

float regulatory_surcharge = 246.0;

float tax = 332.0;
    time_t newuptime=time(0);
	
	char*date=ctime(&newuptime);
	
cout<<"\t\t"<<"-->custumer name:-"<<name;
cout<<"\t\t"<<"-->paid customer name:-"<<name1;
cout << " " << endl;

cout<<"\t\t"<<"-->Final Bill Generated" << endl;

cout << " " << endl;

cout<<"\t\t"<<"-->Fixed Charges " << fixed_charge << endl;

cout<<"\t\t"<<"-->Units Charges " << bill2 << endl;

cout<<"\t\t"<<"-->Regulatory Surcharges " << regulatory_surcharge << endl;

cout<<"\t\t"<<"-->Tax " << tax << endl;

bill2 = fixed_charge + bill2 + regulatory_surcharge + tax;

cout<<"\t\t"<<"-->Total Bill-" << bill2 << endl;
cout<<"\t\t"<<"-->DATE-"<<date;
		
			}
			
			 cout<<"your enter name is not the same to database plesse try agian\n";

			
		 }
		 
		 break;
		 default:cout<<"\t\tyour ennter charachter is invalid\n";
		 
		
		 
	}
	cout<<"\t\t\t"<<"do have countinue the program if yes press y otherwise perss any key\n";
	cin>>op;
	if(op=='y' || op=='Y')
	{
		service(p,5);
	}
	else{
		cout<<"\n\t\t\t"<<"***----THANKYOU FOR USING THIS PROGRAM ETHIOPIAN ELECTRIC POWER COOPARATION---*****\n";
	}
   }


void service(electric_pwore a[], int length)
{
	struct electric_pwore p[100];
	int len=5;
	string oldpass,newpass,olduser,newuser;
	char op;
	            p[0]= {"mame","mamed","1234a",04471,"ET.125d",{"A.A",1,{"kolfe","south"}}};
			    p[1]={"abdu","abdulhafiz","456b",04472,"ET.121c",{"A.A",2,{"nfasslk","north"}}};
				p[2]={"ak","abdulkerim","789c",04473,"ET.123e",{"A.A",3,{"yeka","west"}}};
				p[3]={"kal","kalab","1011d",04474,"ET.124f",{"A.A",4,{"bole","este"}}};
				p[4]={"hikma","hikma","1213c",04475,"ET.126g",{"A.A",5,{"ldeta","nothest"}}};
				system("cls");
			k:{	
		
	cout<<"\t\t\t\t\t\t"<<"+=========================+\n";
	cout<<"\t\t\t\t\t\t"<<"|      COPMANY SERVICE    | \n";
	cout<<"\t\t\t\t\t\t"<<"+=========================+\n";
	cout<<"\t\t"<<"+---------+  +---------------------------------+   +-------------------------+  +----------------------+\n";
	cout<<"\t\t"<<"| 1.ABOUT |  | 2.TO PAY A MONTHLY ELECTRIC FEE |   | 3.TO EDIT LOGIN PASSWORD|  | 4.TO CHANGE USERNAME |\n";
	cout<<"\t\t"<<"+---------+  +---------------------------------+   +-------------------------+  +----------------------+\n";
	cout<<"\t\t\t\t"<<"                                                               +==============+\n";
	cout<<"\t\t\t\t"<<"                                                               |  TO EXIT '6' |  \n";
	cout<<"\t\t\t\t"<<"                                                               +==============+\n";
	cin>>op;
	
	switch(op)
	{
		case '1':
			home();
			break;
		case '2':
			pay(p,5);
			break;
			
		case '3':
    cout<<"\t\t\t\t"<<"  +-------------------------+ \n";
	cout<<"\t\t\t\t"<< " |   TO EDIT LOGIN PASSWORD|\n";
	cout<<"\t\t\t\t"<<"  +-------------------------+ \n";
	cout<<"\t\t\t"<<"-->Enter your old passwored\n";
	cin>>oldpass;
	for(int x=0;x<length;x++)
	{
	
	if(oldpass==a[x].pass)
	{
	cout<<"\t\t\t"<<"-->Enter new password\n";
	cin>>newpass;
	cout<<"\t\t\t"<<"Changeing your passwored is Successfully your new password is\n";
	cout<<"\t\t\t\t"<<"-->"<<newpass<<endl;
	}
	else{
		cout<<"\t\t\t"<<"invalid oldpassword\n";
	}
}
			break;
			
		case '4': 
	cout<<"\t\t\t\t"<<"  +----------------------+\n";
	cout<<"\t\t\t\t"<<"  |   TO CHANGE USERNAME |\n";
	cout<<"\t\t\t\t"<<"  +----------------------+\n";
	cout<<"\t\t\t"<<"-->Enter your old username\n";
	cin>>olduser;
	for(int x=0;x<length;x++)
	{
	
	if(olduser==a[x].user)
	{
	cout<<"\t\t\t"<<"-->Enter new username\n";
	cin>>newuser;
	cout<<"\t\t\t"<<"Changeing your username is Successfully your new username is\n";
	cout<<"\t\t\t\t"<<"-->"<<newuser<<endl;
	
	}
	else{
		cout<<"\t\t\t"<<"invlaid old username\n";
	}
	break;
    }
		break; 
		case '6':
		break; 	
	
	
	default:goto k;
	
      } 
   }
}

int main() 

{ 


char op;
HANDLE output; 

COORD cursor; 

static CONSOLE_FONT_INFOEX fontex;

fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);

HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

GetCurrentConsoleFontEx(hOut, 0, &fontex);


output = GetStdHandle(STD_OUTPUT_HANDLE); 

cursor.X = 0; 

cursor.Y = 0; 

fontex.FontWeight = 100000;

fontex.dwFontSize.X = 500000;

fontex.dwFontSize.Y = 20; 

std::srand(unsigned(std::time(0))); 

 

int width=24, repeats=5, pause=1000;  

   SetCurrentConsoleFontEx(hOut, NULL, &fontex);//bold font 

for(int i=0; i<repeats; ++i) 

{ 

Sleep(pause); 

greenTree(width, output); 

if(i!=repeats-1){ 

SetConsoleCursorPosition(output,cursor); 

 

} 

} 


SetConsoleTextAttribute(output, 7); 
cout<<"\n\t\t\t\t+==================================================================+\n";
cout<<"\t\t\t\t|========->ETHIOPIAN ELECTRIC POWER COOPAERATION <-================|\n"; 
cout<<"\t\t\t\t+==================================================================+\n";
SetConsoleTextAttribute(output, 5);
	
 sub_main();
SetConsoleTextAttribute(output, 8);
std::cin.get();  
return 0; 

}  

