#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f1;
    f1.open("sample.txt"); // Corrected spelling here
    if (!f1.is_open()) {
        cout << "File not found";
        return 1;
    }

    string data = "Zala ka abhays";
    // Write all characters of the string to the file
    for (size_t i = 0; i < data.size(); ++i) {
        f1.put(data[i]);
    }

    f1.close();

    ifstream f("sample.txt"); // Corrected spelling here
    char p;
    while (f.get(p)) {
        cout << p;
    }

    f.close();
    return 0;
}

