//Name: Varnika Maurya
//PRN: 24070123160
//Exp-6
//Program 6
#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            cout << " "; // Print spaces
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "*"; // Print stars
        }
        cout << endl; // Move to the next line
    }
    
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P6.cpp -o P6
PS C:\Users\DELL\Desktop\C++> .\P6.exe        
Enter the number of rows: 5
    *
   ***
  *****
 *******
*********
  */
