//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 13

#include <iostream>
using namespace std;

class ComplexAddition {
public:
    int real;
    int imag;

    ComplexAddition(int re, int im) {
    real = re;
    imag = im;
    cout << real << " + " << imag << "i" << endl;
}


    void add(int A, int B) {
        cout << A << " + " << B << "i" << endl;
    }
};
    
int main() {
    ComplexAddition A1(3, 2);  
    ComplexAddition A2(8, 5);

    int fl = A1.real+ A2.real;   
    int fli = A1.imag + A2.imag;  
    
    A1.add(fl, fli);  
      return 0;
} 

//Output:
//3 + 2i
//8 + 5i
//11 + 7i
