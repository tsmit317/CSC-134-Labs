///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Filename: Lab02_partB.cpp
//  Date: 01/30/14
//  Programmer: Taylor Smith
//
//  Decription:
//          Program calculates monthly bill for internet provider's customer's by asking user for the
//          plan, data usage, and access time. Additionally, the program then uses these inputs to determine
//          if any other plans offered would save them money; displaying the plan, charge, and savings.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "InternetCharge.h" // include class InternetCharge


using namespace std;

// function main begins program execution
int main()
{
    // create object myCharge
    InternetCharge myCharge1;
    
    
    // declare local variables
    int pln = 0;
    int mnt = 0;
    double dta = 0.0;
    
    // begin myCharge
    
    myCharge1.setPlan(pln); // setPlan: asks user for plan #
    myCharge1.setMinutes(mnt); // setMinute: asks user for access time (minutes)
    myCharge1.setData(dta); // setData: asks user for data usage (GB)
    
    myCharge1.calcPlanCharge(pln); // calculates monthly charge
    
    myCharge1.displayMonCharge(); // displays user input information as well as monthly charge
    
    myCharge1.displayBetterPlans(); // calculates, compares, and displays plans that would save money
    
    
    cin.get();
    return 0;
}// end main

