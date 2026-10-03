#include <iostream> 
using namespace std; 
// Template function to find maximum of two values 
template <typename T> 
T findMax(T a, T b) { 
    return (a > b) ? a : b; 
} 
int main() { 
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;           // int 
    cout << "Max of 5.5 and 2.3: " << findMax(5.5, 2.3) << endl;       // double 
    cout << "Max of 'A' and 'Z': " << findMax('A', 'Z') << endl;       // char 
    return 0; 
} 
