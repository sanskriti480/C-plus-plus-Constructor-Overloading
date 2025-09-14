//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 13

#include <iostream>
using namespace std;

class Add {
private:
    double sum;
public:
   
    Add(int a, int b,int c) {
        sum = a + b+c;
        cout << "Sum (double) = " << sum << endl;
    }


    Add(int a, int b) {
        sum = a + b;
        cout << "Sum (int) = " << sum << endl;
    }
};
    
int main() {
    Add A1(5900000, 60000000,10);  
    Add A2(5, 10);                 
    return 0;
}

//Output
//Sum (double) = 6.59e+07
//Sum (int) = 15
