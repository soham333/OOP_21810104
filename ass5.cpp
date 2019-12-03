#include<iostream>
#include<string>
using namespace std;

class test
{
	private:
	string city,city1;
	int veh_type;
	
	public:
	void city_name()
	{
		cout<<"ENTER THE NAME OF CITY"<<'\n';
		cin>>city;
	
		try
		{
			
			if ( (city=="PUNE") || (city=="Pune") || (city=="pune") || (city=="BANGLORE") || (city=="Banglore") || (city=="banglore") || (city=="MUMBAI") || ( city=="Mumbai" )|| (city== "mumbai" ) || (city== "CHENNAI" ) || (city== "Chennai" ) || (city== "chennai" ) )
		
			{
				
			}
			else
			{
				throw 1;
			}
		
			
			
		}
		catch(int x)
		{
			switch(x)
			{
				case 1:cout<<"ENTERED CITY IS INVALID, PLEASE ENTER THE VALID CITY"<<'\n';
				city_name();
				   
			}
		}
	}

	
	void veh()
	{
		cout<<"ENTER THE VEHICLE TYPE"<<'\n';
		cin>>veh_type;
		
		try
		{
			if(veh_type!=4)
			{
				throw 2;	
			}	
		}
		catch(int x)
		{
			switch(x)
			{
			case 2:cout<<"ENTERED TYPE OF VEHICLE IS INVALID, PLEASE ENTER THE TYPE AGAIN"<<'\n';
					 veh();
			}
		}
		
	}
	
	void display()
	{
		cout<<"ENTERED CITY IS "<<city<<" AND TYPE OF VEHICLE IS "<<veh_type;
	}
	

};


int main()
{
	test e;
	e.city_name();
	e.veh();
	e.display();
}
