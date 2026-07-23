#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        // Initialize the character based on the current row
        char ch = 'A' + i; 
        
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch--; // Decrement the character to print in reverse
        }
        cout << endl;
    }
    return 0;
}