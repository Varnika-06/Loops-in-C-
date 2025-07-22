//Name: Varnika Maurya
//PRN: 24070123160
//Exp-6
//Program 4
#include <iostream>
using namespace std;
int main(){
    string P="hZ78#";
    string S;
    int E=0;
    cout<<"Enter the password\n";
    cin>>S;
    if(S.size()==P.size()){
    for(int i=0;i<P.size();i++)
    {
        if(S[i]!=P[i])
        E++;
    }
        if(E==0)
        cout<<"Right Password";
        else
        cout<<"Wrong Password";
    }
    else
    {
        cout<<"Wrong Password";
    }
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ L5.cpp -o L5
PS C:\Users\DELL\Desktop\C++> .\L5.exe        
Enter the password
hZ78#
Right Password
*/
