///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Filename:InternetCharge.cpp
//  Date: 01/30/14
//  Programmer: Taylor Smith
//
//  Description:
//          Defines member-functions for class InternetCharge
//
/////////////////////////////////////////////////////////////////////////////////////////


#include "InternetCharge.h" // Include class
#include <iostream>
#include <iomanip>  // For setprecision

using namespace std;

InternetCharge::InternetCharge() // Default constructor. initializes data-members for class InternetCharge
{
    int plan = 0;
    int minutes = 0;
    double data = 0.0;
    double charge = 0.0;
}

// 3 parameter constructor. initializes first 3 data members
InternetCharge::InternetCharge(int pln, int mnt, double dta)
{
    plan = pln;
    minutes = mnt;
    data = dta;
    charge = 0.0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: setPlan(int pln)
//
// Description: Asks for and collects plan type from user.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void InternetCharge::setPlan(int pln)
{
    cout << "Enter the customer plan [1, 2, 3, or 4]: ";
    cin >> pln;
    
    plan = pln;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getPlan()
//
// Returns: int plan.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int InternetCharge::getPlan()
{
    return plan;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: setMinutes(int mnt)
//
// Description: Asks for and collects access time, in minutes, from user.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void InternetCharge::setMinutes(int mnt)
{
    cout << "Enter the customer access time in minutes: ";
    cin >> mnt;
    
    minutes = mnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getMinutes()
//
// Returns: int minutes.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int InternetCharge::getMinutes()
{
    return minutes;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: setData(double dta)
//
// Description: Asks for and collects data usage, in GB, from the user.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void InternetCharge::setData(double dta)
{
    cout << "Enter the customer data usage in GBs: ";
    cin >> dta;
    
    data = dta;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getData()
//
// Returns: double data.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double InternetCharge::getData()
{
    return data;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function: calcPlanCharge(int pln)
//
//  Description: Using plan, data, and minutes, calcPlanCharge(int pln) uses switch statement to determine
//              the which plan, then uses if statements to calculate cost and overages.
//
//  Returns: double charge, or monthly cost.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double InternetCharge::calcPlanCharge(int pln)
{
    switch (plan)
    {
        case 1:
            if ((minutes > 6000) && (data > 5))
            {
                charge = (20 + ((static_cast<double>(minutes) / 60) - 100) + ((data - 5) * 10));
            }
            else if (minutes > 6000)
            {
                charge = (20 + ((static_cast<double>(minutes) / 60) - 100));
            }
            else if (data > 5)
            {
                charge = (20 + ((data - 5) * 10));
            }
            else
            {
                charge = 20;
            }
            
            break;
            
        case 2:
            if (data > 5)
            {
                charge = (50 + ((data - 5) * 10));
            }
            else
            {
                charge = 50;
            }
            
            break;
            
        case 3:
            if (minutes > 9000)
            {
                charge = (80 + ((static_cast<double>(minutes) / 60) - 150));
            }
            else
            {
                charge = 80;
            }
            
            break;
            
        case 4:
            charge = 120;
            break;
            
        default:
            break;
    }
    
    return charge;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: getCharge
//
//  Returns: double charge, or monthly cost
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double InternetCharge::getCharge()
{
    return charge;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: displayMonCharge()
//
//  Description: Displays plan type, access time, data usage, and monthly charge.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void InternetCharge::displayMonCharge()
{
    cout << "\n" << "Customer's Plan: " << plan << endl;
    cout << "Customer's Access Time (Minutes): " << minutes << endl;
    cout << "Customer's Data Usage (GB): " << data << endl;
    cout << "Charge for the month: $" << fixed << setprecision(2) << charge << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: displayBetterPlans()
//
//  Description: Using information entered by user: plan type, data usage, and access time. As well as
//               member function calcPlanCharge(int pln), calculates the cost of using the other three
//               lans, then compares them. Shows only plans that would save the customer money,
//               displaying the plan, charge, and savings.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void InternetCharge::displayBetterPlans()
{
    // local variables
    int counter = 0;
    double charge1 = 0.0;
    double charge2 = 0.0;
    double charge3 = 0.0;
    double charge4 = 0.0;
    double s1 = 0.0;
    double s2 = 0.0;
    double s3 = 0.0;
    double s4 = 0.0;
    
    
    cout << "\n" << "Plans that would save the customer money: " << endl;
    
    // there are only three other plan options. set while statement to 3.
    while(counter <= 3)
    {
        if (plan == 1)
        {
            // changes plan to 2, then using member function calcPlanCharge, calculates the cost of that plan with the same user info.
            
            plan = 2;
            charge2 = calcPlanCharge(plan);
            
        }

        else if (plan == 2)
        {
            plan = 3;
            charge3 = calcPlanCharge(plan);
            
        }
        else if (plan == 3)
        {
            plan = 4;
            charge4 = calcPlanCharge(plan);
            
        }
        else if (plan == 4)
        {
            plan = 1;
            charge1 = calcPlanCharge(plan);
           
        }
        counter = counter + 1;
    }
    
    // calculates difference in plans. will only be used if generates savings
    s1 = charge - charge1;
    s2 = charge - charge2;
    s3 = charge - charge3;
    s4 = charge - charge4;
    
    // if statements used to compare plans.
    if ((charge1 < charge) || (charge2 < charge) || (charge3 < charge) || (charge4 < charge))
    {
        if (charge1 < charge)
        {
            cout << "Plan 1: " << " Charge: $" << charge1 << fixed << setprecision(2)
            << "  Savings: $" << s1 << fixed << setprecision(2) << endl;
            
            if (charge2 < charge)
            {
                cout << "Plan 2:  Charge: $" << charge2 << fixed << setprecision(2)
                << "  Savings: $" << s2 << fixed << setprecision(2) << endl;
                
                if (charge3 < charge)
                {
                    cout << "Plan 3:  Charge: $" << charge3 << fixed << setprecision(2)
                    << "  Savings: $" << s3 << fixed << setprecision(2) << endl;
                    
                    if (charge4 < charge)
                    {
                        cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                        << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
                    }
                }
                else if (charge4 < charge)
                {
                    cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                    << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
                }
            }
            else if (charge3 < charge)
            {
                cout << "Plan 3:  Charge: $" << charge3 << fixed << setprecision(2)
                << "  Savings: $" << s3 << fixed << setprecision(2) << endl;
                
                if (charge4 < charge)
                {
                    cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                    << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
                }
            }
            else if (charge4 < charge )
            {
                cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
            }
        }
        else if (charge2 < charge)
        {
            cout << "Plan 2:  Charge: $" << charge2 << fixed << setprecision(2)
            << "  Savings: $" << s2 << fixed << setprecision(2) << endl;
            
            if (charge3 < charge)
            {
                cout << "Plan 3:  Charge: $" << charge3 << fixed << setprecision(2)
                << "  Savings: $" << s3 << fixed << setprecision(2) << endl;
                
                if (charge4 < charge)
                {
                    cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                    << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
                }
            }
            else if (charge4 < charge)
            {
                cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
            }
        }
        else if (charge3 < charge)
        {
            cout << "Plan 3:  Charge: $" << charge3 << fixed << setprecision(2)
            << "  Savings: $" << s3 << fixed << setprecision(2) << endl;
            
            if (charge4 < charge)
            {
                cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
                << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
            }
        }
        else if (charge4 < charge)
        {
            cout << "Plan 4:  Charge: $" << charge4 << fixed << setprecision(2)
            << "  Savings: $" << s4 << fixed << setprecision(2) << endl;
        }
    }
    else
    {
        cout << "Current plan saves the most money!" << endl;
    }
}
