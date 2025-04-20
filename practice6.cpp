 #include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string,int>stateData=
	{
		{"maharastra",661526348},
		{"gujarat",245364792},
		{"rajasthan",4644775432},
		{"karnataka",498574095},
	    {"punjab",4666977751},
	
	};
	string data;
	cout<<"enter data: ";
	cin>>data;
	for (auto i = stateData.begin(); i != stateData.end(); ++i)
    {
        if (i->first == data)
        {
            cout << "State:" << i->first << " " << "population" << i->second << endl;
        }
    }

    return 0;
}
}

