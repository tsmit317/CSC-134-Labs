////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Lab4A1.cpp
// Name: Taylor Smith
// Date: 02/27/14
//
// Description: Program uses pointer to store memory address for another variable, therefore the value
//              for the variable. This program uses pointer dPtr to pass the value of decimal1 to dPtr
//              and then from dPtr to decimal2. Additionally, the program displays the memory addresses
//              for decimal1 and dPtr. 
//
///////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

int main()
{
    double decimal1 = 12.34;
    double decimal2;
    
    // DECLARE the variable dPtr to be a pointer to an
    // object of type double
   
    double *dPtr;
    
    // ASSIGN the address of variable decimal1 to pointer
    // variable dPtr
    
    dPtr = &decimal1;
    
    // PRINT the value of the object pointed to by dPtr
    
    cout << "Value of object pointed to by dPtr is " << *dPtr << endl;
    
    // ASSIGN the value of the object pointed to by dPtr
    // to decimal2
    
    decimal2 = *dPtr;
    
    // PRINT the value of decimal2
    
    cout << "Value of decimal2 is " << *dPtr << endl;
    
    // PRINT the address of decimal1
    
    cout << "Address of decimal1 is " << &decimal1 << endl;
    
    // Print the address stored in dPtr
    
    cout << "Address stored in dPtr is " << dPtr << endl;
    
    cin.get();
    return 0; 
    
} // end main
