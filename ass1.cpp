#include <iostream>

using namespace std;
class data;  
class student
{
    string name;
    string branch;
    char* div;
    int date;
    int month;
    int year;

    string bg;
    static int count;  //Static members
	public:
    	int roll_no;
    	student()       //Constructor
    	{
        	name="";
        	roll_no = 0;
        	branch = "";
        	div = new char;
       		date;
       		month;
       		year;
       		 bg = new char[4];
    	}
    	
    static int getcount()
    {
        return count;
    }
    
    void getData(data*);
    void dispData(data*);

};

class data
{
    string caddress;
    long long int *teleno;
    long long int *dlno;
    friend class student;    //Friend Class of data
	public:
	    data()
	    {	
	        caddress = "";
        	teleno = new long long int;   //Dynamic Memory Allocation
        	dlno = new long long int;
    	}	
    
    	void getdata()
    	{
        	cout<<"Enter Contact Address"<<endl;
        	cin.get();
        	getline(cin,caddress);
        	while(1)
        	{
        	cout<<"Enter the Telephone Number"<<endl;
        	cin>>*teleno;
        	if(*teleno<1000000000||*teleno>9999999999)
        	{
        	  cout<<"Please Enter a valid telephone Number"<<endl;
        	}
        	else
        	break;
        	}
        	cout<<"Enter the Driving License number:"<<endl;
       		cin>>*dlno;
    	}
    	void dispStudData()
    	{
	        cout<<"Contact Address : "<<caddress<<endl;
	        cout<<"Telephone Number : "<<*teleno<<endl;
	        cout<<"Driving License Number : "<<*dlno<<endl;	
	    }

};

inline void student:: getData(data* st)   //Inline Function
{
	int x,b,u,a;
    cout<<"Enter Student Name: ";
    cin.get();
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>roll_no;
    cout<<"Enter Branch: ";
    cin.get();
    getline(cin,branch);
    cout<<"Enter the div: ";
    cin>>div;
    x:cout<<"\nEnter the month for Date of Birth: ";
    cin>>month;
   	if(month<1||month>12)
  	 {
       cout<<"Invalid Month"<<endl;
       goto x;
     }
    else
    	b:cout<<"Enter the Date for Date of Birth: ";
    	cin>>date;
    	if(month==2&&date>29)
    	{
    	    cout<<"Invalid Date"<<endl;
    	    goto b;
    	}
    	else if((month==4||6||9||11)&&date>30)
    	{
    	    cout<<"Invalid Date"<<endl;
    	    goto b;
    	}
    	else if((month==1||3||5||7||8||10||12)&&date>31)
    	{
    	    cout<<"Invalid Date"<<endl;
    	    goto b;
    	}
    	else
		    u:cout<<"\nEnter the year for Date of Birth: ";
    		cin>>year;
    		if(year>2019)
    		{
          		cout<<"Invalid year"<<endl;
          		goto u;
    		}
   		a:
    cout<<"choose blood group from below\n";
    cout<<"1-A+\n";
    cout<<"2-B+\n";
    cout<<"3-AB+\n";
    cout<<"4-O+\n";
    cout<<"5-A-\n";
    cout<<"6-B-\n";
    cout<<"7-AB-\n";
    cout<<"8-O-\n";
    int choice;
    cin>>choice;
	cout<<endl;
    switch(choice)
    {
        case 1:
       		bg="A+";
       		break;
        case 2:
        	bg="B+";
        	break;
        case 3:
        	bg="AB+";
        	break;
        case 4:
        	bg="O+";
        	break;
        case 5:
        	bg="A-";
        	break;
        case 6:
        	bg="B-";
        	break;
        case 7:
        	bg="AB-";
        	break;
        case 8:
        	bg="O-";
        	break;
        default:
        	cout<<"enter the correct choice again\n";
        	goto a;
   	}
    count++;
}


 inline void student::dispData(data* st1)  //Inline Function
{

    cout<<"Student Name: "<<this->name<<endl;     //this pointer
    cout<<"Roll Number: "<<this->roll_no<<endl;
    cout<<"Branch: "<<this->branch<<endl;
    cout<<"div: "<<this->div<<endl;
    cout<<"Date of Birth: "<<date<<"/"<<month<<"/"<<year<<endl;
    cout<<"Blood Group: "<<this->bg<<endl;
    st1->dispStudData();
	cout<<"\n\n";
}
int student::count;


int main()
{
    student* stud1[100];
    data* stud2[100];
    int n=0,x,i,roll;
    int flag=0;
	do
    {
    	 cout<<" 1.Add Record \n 2.Display Records \n 3.Delete Records \n 4.Modify \n 5.Exit "<<endl<<endl;
    	 cin>>x;
    	 cin.get();
    	 switch(x)
    	 {
    	  case 1:
    		    stud1[n]=new student;  //Dynamic Memory Allocation
    		    stud2[n]=new data;  //Dynamic Memory Allocation
    		    stud1[n]->getData(stud2[n]);
    		    stud2[n]->getdata();
    		    n++;
    		    cout<<"Record Added Successfully"<<endl<<endl;
    			break;
	      case 2:
    	   		if(n==0)
          		{
              		cout<<"DATABASE IS EMPTY"<<endl;
          		}
          		else
          		{
		        	for(i=0;i<n;i++)
		          	{
		            	stud1[i]->dispData(stud2[i]);
		          	}
          		}
	      		break;
	      case 3:
    	        if(n<1)
    	        {
    	          cout<<"DATABASE IS EMPTY"<<endl;
        	    }
        	    else
        	    {
	        	    cout<<"Enter the Roll number of Student to be Deleted"<<endl;
    		        cin>>roll;
    		        for(i=0;i<n;i++)
    		        {
    		            if(stud1[i]->roll_no == roll)
    		            {
    		                while(i<n-1)
    		                {
    			                 stud1[i] = stud1[i+1];
    			                 stud2[i] = stud2[i+1];
    			                 i++;
    		                }
    		                n--;
		                }
        		        else
        		        {
                		    cout<<"RECORD  DOES NOT EXIST"<<endl<<endl;
                		}
            		}	
            		cout<<"Record Deleted Successfully"<<endl<<endl;
            	}
            	break;
            case 4:
            		cout<<"Enter the Roll number of Student to be modified"<<endl;
    		        cin>>roll;
    		        for(i=0;i<n;i++)
    		        {
    		            if(stud1[i]->roll_no == roll)
    		            {
    		            stud1[i]->getData(stud2[i]);
    		  		    stud2[i]->getdata();
    		  		    flag=1;
    		            }
    		          }
    		          if(flag==0)
    		            	cout<<"Record Not available"<<endl;
    		           break;
    		 case 5:
    		 		break;     
    		         
     	}
    }while(x!=5);
    return 0;
}
