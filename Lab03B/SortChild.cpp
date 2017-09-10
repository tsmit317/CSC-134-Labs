//////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: SortChild.cpp
// Date: 02/24/14
// Programmer: Taylor Smith
//
// Description: Defines memberfunctions for class SortChild
//
//////////////////////////////////////////////////////////////////////////////////////////////


#include "SortChild.h"

#include <array>
#include <iostream>
#include <string>

using namespace std;

// constructor

SortChild::SortChild(Child kids [], int numKids)
{
    
    numKids = 24;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Fucntion: bubbleSort()
//
// Description: Uses bubble sort to sort the array by name and age.
//
// Returns: kids
//
////////////////////////////////////////////////////////////////////////////////////////////////

int SortChild::bubbleSort(int x)
{
    if (x==1)
    {
        for (int i = 0; i < 23; i++)
        {
            for( int j = 0; j < 24; j++)
            {
                if (kids[j].getAge() > kids[j+1].getAge())
                {
                    int temp = 0;
                    temp = kids[j+1].getAge();
                    kids[j+1] = kids[j];
                    kids[j] = temp;
                }
            }
       }
    }
    else if (x==2)
    {
        for (int i = 0; i < 23; i++)
        {
            for( int j = 0; j < 24; j++)
            {
                if (kids[j].getName() > kids[j+1].getName())
                {
                    string temp = " ";
                    temp = kids[j+1];
                    kids[j+1] = kids[j];
                    kids[j] = temp;
                }
            }
        }
    }
    return kids;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: sortByAge()
//
// Description: Sets x = 1 so that when bubble sort is called, it knows to sort by age.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


void SortChild::sortByAge()
{
    int x = 1;
    bubbleSort(x);
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: sortByName()
//
// Description: Sets x = 2 so that when bubble sort is called, it knows to sort by name.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

void SortChild::sortByName()
{
    int x = 2;
    bubbleSort(x);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: printNameAge()
//
// Description: Uses for function to print the contents of the array. 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

void SortChild::printChildNameAge()
{
    for (int t = 0; t < 24; t++)
    {
        cout << "\n" << kids[t];
        
    }
}