/*#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*" ;
    }
        cout << endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows<<cols;
    if(rows%2==0 && cols %2==0){
        cout<<" ";
    }
    else{
        cout<<"*";
    }
    return 0;
}