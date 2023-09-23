// Sanya Jaitly,22070123100
#include<iostream> 
using namespace std;

int main()
{
    int M1,M2,M3,M4,M5,avg,totalMarks;

    cout<<"Enter the marks of first subject: "<<endl;
    cin>> M1;

    cout<<"Enter the marks of second subject: "<<endl;
    cin>> M2;

    cout<<"Enter the marks of thrid subject: "<<endl;
    cin>> M3;

    cout<<"Enter the marks of fourth subject: "<<endl;
    cin>> M4;

    cout<<"Enter the marks of fifth subject: "<<endl;
    cin>> M5;

    totalMarks = M1 + M2 + M3 + M4 + M5;  // to obtain total marks of all the subject
    avg = totalMarks/5;                   // Average marks of the student 
    
    if((avg>90)&&(avg<=100))
    cout<< "Grade 0 "<< endl;
    else if((avg>80)&&(avg<=90))
    cout<< "Grade A+ "<< endl;
    else if((avg>70)&&(avg<=80))
    cout<< "Grade A "<< endl;
    else if((avg>60)&&(avg<=70))
    cout<< "Grade B+ "<< endl;
    else if((avg>50)&&(avg<=60))
    cout<< "Grade B "<< endl;
    else if((avg>40)&&(avg<=50))
    cout<< "Grade C "<< endl;
    else
    cout<<"FAIL";

    return 0;

}
/*Output:
Enter the marks of first subject: 
68
Enter the marks of second subject: 
75
Enter the marks of thrid subject: 
98
Enter the marks of fourth subject: 
92
Enter the marks of fifth subject: 
65
Grade A 
*/