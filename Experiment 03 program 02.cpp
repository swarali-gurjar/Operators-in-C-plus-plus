#include<iostream>
using namespace std;
int main ()
{
    int s1, s2, s3, s4, s5, total;
    float avg;
    cout<<"Enter subject 1 marks:";
    cin>>s1;
    cout<<"Enter subject 2 marks:";
    cin>>s2;
    cout<<"Enter subject 3 marks:";
    cin>>s3;
    cout<<"Enter subject 4 marks:";
    cin>>s4;
    cout<<"Enter subject 5 marks:";
    cin>>s5;
    avg=(s1+s2+s3+s4+s5)/5;
    cout<<"Percentage: "<<avg<<"%"<<endl;
    if(avg>=90){
        cout<<"Grade: O";
    }
    else if(avg>=85&&avg<90){
        cout<<"Grade: A+";
    }
    else if(avg>=75&&avg<85){
        cout<<"Grade: A";
    }
    else if(avg>=65&&avg<75){
        cout<<"Grade: B+";
    }
    else if(avg>=55&&avg<65){
        cout<<"Grade: B";
    }
    else if(avg>=40&&avg<55){
        cout<<"Grade: C";
    }
    else{
        cout<<"Fail";
    }

    return 0;

}
