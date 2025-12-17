#include<iostream>
using namespace std;
int main(){
    string str="ATGCAATTGGCC";
    for(int i=0;i<str.length();i++){
        if(str[i]=='A'){
        cout<<"AA";
    }
    else if(str[i]=='T'){
    cout<<"TTT";
}
    else if(str[i]=='C'){
    cout<<"C";
}
    else if(str[i]=='G'){
    cout<<"GGG";
}
    else{
        cout<<"not defined";
    }
}}