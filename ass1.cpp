#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class emp
{
   unsigned int mo,da,ye;
    string na,add;
    string idd;
    long long phno;
    string bg,bgk;
    double sal;
public:
    emp()
    {

    }
    void accept();
    void display();
};
void emp::accept()
{
string bg1[9]={"A+","A-","B+","B-","AB+","AB-","O+","O-","\0"};
    int k=0,g=1;
    cout<<"Input Id:\n";
    cin.ignore();
    getline(cin,idd);
    cout<<"Input Name :\n";
    getline(cin,na);
    cout<<"Input Address :\n";
    getline(cin,add);
    cout<<"Enter Dob :\n";
    cout<<"Day :\n";
    cin>>da;
    cout<<"Month :\n";
    cin>>mo;
    cout<<"Year :\n";
    cin>>ye;
    cout<<"\n";
    if(da>31)
        cout<<"Invalid Day Entered\n";
        if(da<1)
            cout<<"Invalid Day Entered\n";
        if(mo<1)
        cout<<"Invalid Month Entered\n";
        if(mo>12)
            cout<<"Invalid Month Entered\n";
        if(ye<1)
            cout<<"Invalid Year Entered\n";
    cout<<"Enter Salary :\n";
    cin>>sal;
    cout<<"Enter BloodGroup :\n";
    cin.ignore();
    getline(cin,bg);
    for(k=0;bg1[k]!="\0";k++)
    {
        if(bg==bg1[k])
        {
        g=0;
        if(g==0)
        {
            bgk=bg1[k];
        }
        }
    }

}
void emp::display()
{
    cout<<"\nId is :"<<idd<<endl;
    cout<<"Name is :"<<na<<endl;
    cout<<"Address is :"<<add<<endl;
    cout<<"Date of Birth is :"<<da<<"/"<<mo<<"/"<<ye<<endl;
    cout<<"Salary is :"<<sal<<endl;
     cout<<"Blood Group is:"<<bgk<<"\n";
     cout<<"ENTER VALID BLOOD GROUP \n";
   
}
int main()
{
    int n;
    cout<<"Input Number of Employees : \n";
    cin>>n;
    emp obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].accept();
    }
    for(int j=0;j<n;j++)
    {
        obj[j].display();
    }
    return 0;
}
