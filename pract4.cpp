#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class database
{
private:
	int rollno;
	string name;
	int number;
	float percentage;

	
public:
	void set()
	{
		fstream f;
		f.open("database.txt",ios::out|ios::app);
		cout<<"\n enter the rollno";
		cin>>rollno;
		cout<<"\n enter the name";
		cin>>name;
		cout<<"\n enter the number";
		cin>>number;
		cout<<"\nenter the percentage";
		cin>>percentage;
		
		f<<rollno<<" "<<name<<" "<<number<<" "<<percentage<<" "<<endl;
		f.close();
	}
	void get()
	{
		fstream f;
		f.open("database.txt",ios::in);
		if(!f)
		{
			cout<<"error in file handling";
			return;
		}
		cout<<"enter roll no to retrive";
		cin>>rollno;
		bool found=false;
		int roll;
		while(f >> roll)
		{
			f>>name>>number>>percentage;
			if(roll==rollno)
			{
				found=true;
				break;
			}
		}
		if(found)
		{
			cout<<"rollno:"<<roll<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"number:"<<number<<endl;
			cout<<"percentage :"<<percentage<<endl;
			
		}
		else
		{
			cout<<"data not found";
		}
		
	  f.close();	
	}
};
int main()
{
	database db;
	int ch;
	do
	{
		cout<<"\n 1.add record";
		cout<<"\n 2.retrive data";
		cout<<"\n 3.exit";
		cout<<"enter your choice";
		cin>>ch;
		switch (ch)
		{
			case 1:
				db.set();
				break;
			case 2:
			    db.get();
			    break;
			case 3:
				cout<<"exit";
				break;
			default:
				cout<<"invalid choice";
				
		}
	}while(ch!=3);
		
  return 0;
}
