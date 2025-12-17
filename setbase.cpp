/*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<< " decimal value of 12 is " << dec << 12 << endl;
    cout<< "octal value of 12 is " << oct << 12 << endl;
    cout<< " hexa value of 12 is " << hex << 12 << endl;
    return 0;
}   

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int a,b;
        a=1;
        b=2;
        cout<< " a value " << setw(5) << a << endl;
        cout<< " b value " << setw(5) << b << endl;
        return 0;
    }  

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        cout<< i << " " << endl;
    } 
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        cout<<i<< " " << endl;
        i++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    do{
        cout<<i<<" "<<endl;
        i++;
    }
    while(i<5);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            cout<<col<< " " ;
        }
        cout<< endl;
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10 20 30 40};
    for(int num:arr){
        cout<<num<< " ";
    }
    return 0;
}