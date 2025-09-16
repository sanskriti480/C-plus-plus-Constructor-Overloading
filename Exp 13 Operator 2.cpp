//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 13

#include <iostream>
using namespace std;
#include<string>

class Name{
public:
string name1; 
string name2;

Name(string n1, string n2){
    name1=n1;   
    name2=n2;   
}

void add(){
   cout<<name1+name2;  
}      
};
int main() 
{
    Name N1("Sanskriti","Khairnar");
    N1.add();

}

/*Output

SanskritiKhairnar
*/
