//Name: Varnika Maurya
//PRN: 24070123160
//Exp-6
//Program 8
#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P8.cpp -o P8
PS C:\Users\DELL\Desktop\C++> .\P8.exe        
Enter the number of rows: 5
    *
   **
  ***
 ****
*****
  */
