//Sanya Jaitly,22070123100
// Operators in c++
#include<iostream>
using namespace std;

int main()
{
    int d1,d2,d3,d4,d5;
    d1 = 0%10;
    d2 = 0%100;
    d3 = 1%1000;
    d4 = 3%10000;
    d5 = 2%100000;

    cout << " The last five digits of prn is : "<< endl;
    cout<< d1<< endl;
    cout<< d2<< endl;
    cout<< d3<< endl;
    cout<< d4<< endl;
    cout<< d5<< endl;

    return 0;

}


/*
Output: 
 The last five digits of prn is : 
0
0
1
3
2
*/