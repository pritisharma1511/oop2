#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>  // For std::numeric_limits
using namespace std;

class PersonalRecord
{
public:
    string name;
    int dob;

    PersonalRecord(string n, int d)
    {
        name = n;
        dob = d;
    }
};

bool Compare(const PersonalRecord& p1, const PersonalRecord& p2)  // Pass by reference for efficiency
{
    return p1.name < p2.name;  // Compare by name
}

int main()
{
    vector<PersonalRecord> record;  // Vector to hold records
    PersonalRecord p1("om", 12);
    PersonalRecord p2("yash", 14);
    PersonalRecord p3("amit", 14);
    record.push_back(p1);
    record.push_back(p2);
    record.push_back(p3);

    string name;
    int ch;
    do
    {
        // Show the menu and take input
        cout << "\nMenu\n1. Sort the list\n2. Search by name\n3. Display all\nPress any other key to exit: ";
        
        if (!(cin >> ch))  // Check for invalid input (non-numeric)
        {
            cin.clear();  // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
            cout << "Invalid input, exiting program.\n";
            break;
        }

        // Handle different menu options
        if (ch == 1)
        {
            sort(record.begin(), record.end(), Compare);  // Sort records by name
            cout << "List sorted by name.\n";
        }
        else if (ch == 2)
        {
            cout << "Enter the name to search: ";
            cin >> ws;  // To consume any leading whitespace
            getline(cin, name);  // Allow input with spaces

            bool found = false;
            for (auto& r : record)  // Iterate by reference to avoid unnecessary copies
            {
                if (r.name == name)
                {
                    cout << "Record found: Name = " << r.name << ", DOB = " << r.dob << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Record not found.\n";
            }
        }
        else if (ch == 3)
        {
            // Display all records
            for (auto& r : record)
            {
                cout << "Name: " << r.name << ", DOB: " << r.dob << endl;
            }
        }
        else
        {
            cout << "Invalid choice, exiting program.\n";
            break;
        }

    } while (true);  // Continuously display menu until the user chooses to exit

    return 0;
}

