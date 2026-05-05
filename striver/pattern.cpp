#include<bits/stdc++.h>
using namespace std;

void p1(int n){

    /*
    
        if n=5
        *****
        *****
        *****
        *****
        *****

    */
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p2(int n){
    /*
        if n=5 then
        *
        **
        ***
        ****
        *****
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p3(int n){
    /*
        if n=5 then
        1
        12
        123
        1234
        12345
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void p4(int n){
    /*
        if n=5 then
        1
        22
        333
        4444
        55555
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void p5(int n){
    /*
        if n=5 then
        *****
        ****
        ***
        **
        *
    */

    for(int i=1;i<=n;i++){
        for(int j=n-i+1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p6(int n){
    /*
        if n=5 then 
        12345
        1234
        123
        12
        1
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void p7(int n){
    /*
        ----*----
        ---***---
        --*****--
        -*******-
        *********
    */
   for(int i=1;i<=n;i++){
        
        //spaces
        for(int space=1;space<=n-i;space++){
            cout<<"-";
        }
        //stars
        for(int star=1;star<=2*i-1;star++){
            cout<<"*";
        }
        cout<<endl;
   }
}

void p8(int n){
    /*
        *********
        -*******-
        --*****--
        ---***---
        ----*----
    */
   for(int i=1;i<=n;i++){
        //space
        for(int space=0;space<=i-1;space++){
            cout<<"-";
        }
        //star
        for(int star=1;star<=2*(n-i)+1;star++){
            cout<<"*";
        }
        cout<<endl;
   }
   
}

void p8(int n){
    /*
        if n=5 then 
        ----*----
        ---***---
        --*****--
        -*******-
        *********
        *********
        -*******-
        --*****--
        ---***---
        ----*----
    */
   
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    p8(n);

}