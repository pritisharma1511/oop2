#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class PersonalRecord
{
public:
	string name;
	int dob;
	
	PersonalRecord(string n,int d )
	{
		name=n;
		dob=d;
	}
};
bool Compare(PersonalRecord p1,PersonalRecord p2)
{
	return p1.name < p2.name;
}
int main()
{
	vector<PersonalRecord>record;
	PersonalRecord p1("om",12);
	PersonalRecord p2("yash",31);
	PersonalRecord p3("chirag",22);
	record.push_back(p1);
	record.push_back(p2);
	record.push_back(p3);
	
	string name;
	int ch;
	do
	{
		cout<<"\n menu \n 1. sort the list\n 2.search by name \n\n 3.display the list\n 4.exit";
		cin>>ch;
		if (ch==1)
		{
			sort(record.begin(),record.end(),Compare);
			break;
		}
		else if(ch==2)
		{
			cout<<"enter the name";
			cin>>name;
			for (auto r :record)
			{
				if(r.name==name)
				{
					cout<<"data is found";
					break;
				}
			}
		}
		else if(ch==3)
		{
			for ( auto r : record)
			{
				cout<<r.name;
				break;
			}
		}
		else
		{
			break;
		}
	}while(ch!=3);
	
}
