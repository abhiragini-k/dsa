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

void p9(int n){
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
   for(int i=1;i<=n;i++){
        for(int space=0;space<=n-i;space++){
            cout<<"-";
        }
        for(int star=1;star<=2*i-1;star++){
            cout<<"*";
        }
        cout<<endl;
   }
   for(int i=1;i<=n;i++){
        for(int space=0;space<=i-1;space++){
            cout<<"-";
        }
        for(int star=1;star<=2*(n-i)+1;star++){
            cout<<"*";
        }
        cout<<endl;
   }
}

void p10(int n){
    /*
        if n=5 then
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p11(int n){
    /*
        1
        01
        101
        0101
        10101
    */
    int start=0;
    for(int i=1;i<=n;i++){
        if(i%2==0) start=0;
        else start=1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void p12(int n){
    /*
        1------1
        12----21
        123--321
        12344321
    */
   for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //spaces
        for(int spaces=1;spaces<=2*n-2*i;spaces++){
            cout<<"-";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
   }
}

void p13(int n){
    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    */

    int count=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

void p14(int n){
    /*
        A
        AB
        ABC
        ABCD
        ABCDE
    */
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void p15(int n){
    /*
        ABCDE
        ABCD
        ABC
        AB
        A
    */
    for(int i=1;i<=n;i++){
        char start='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<start;
            start=start+1;
        }
        cout<<endl;
    }
}

void p16(int n){
    /*
        A
        BB
        CCC
        DDDD
        EEEEE
    */
    char start='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start;
        }
        start=start+1;
        cout<<endl;
    }
}

void p17(int n){
    /*
        ---A
        --ABA
        -ABCBA
        ABCDCBA
    */
    for(int i=1;i<=n;i++){
        char start='A';
        //spaces
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<"-";
        }
        //letters
        int breakpoint = (2*i-1)/2;
        for(int j=1;j<=2*i-1;j++){
                cout<<start;
                if(j<=breakpoint) start=start+1;
                else start=start-1;
        }
        cout<<endl;

    }
}

void p18(int n){
    /*
        E
        DE
        CDE
        BCDE
        ABCDE
    */
    char start='A'+n;
    for(int i=1;i<=n;i++){
        start = start-i;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=start+1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    p18(n);

}