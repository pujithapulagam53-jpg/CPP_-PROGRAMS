#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> myMap;

    // Insert key-value pairs
    myMap["apple"] = 100;
    myMap["banana"] = 150;
    myMap["cherry"] = 200;

    // Display all elements
    cout << "Map contents:" << endl;

    map<string, int>::iterator it;

    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // Access a value
    cout << endl;
    cout << "Value of banana: " << myMap["banana"] << endl;

    // Erase a key
    myMap.erase("apple");

    // Display after deletion
    cout << endl;
    cout << "After removing apple:" << endl;

    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // Display map size
    cout << endl;
    cout << "Map size: " << myMap.size() << endl;

    return 0;
}
