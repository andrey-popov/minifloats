#include "minifloats.hpp"
#include <iostream>


using namespace std;


int main()
{
    double value;
    cout << "Enter a floating-point number: ";
    cin >> value;
    
    minifloat::Repr_t representation = minifloat::encodeGeneric<true, 10, 14>(value);
    cout << "16-bit representation of the entered number " <<
     "(shown as a two-byte unsigned integer): " << representation << endl;
    
    cout << "Result of the backward conversion: " <<
     minifloat::decodeGeneric<true, 10, 14>(representation) << endl;
    
    return EXIT_SUCCESS;
}
