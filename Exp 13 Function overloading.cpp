//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 13

#include <iostream>
using namespace std;
#include <string>



void calc(int a,int b){
    int sum=a+b;
    cout<< sum<<endl;
}

void calc(int a,int b,int c)
{
    int diffrence=a-b-c;
    cout<< diffrence;
}

int main()
{
    
     calc(10,20);
     calc(20,10,5);
    
}

/*
Output
30
5
*/
