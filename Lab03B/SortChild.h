#ifndef SORTCHILD_H
#define SORTCHILD_H

///////////////////////////////////////////////////////////////////////
//
// Class: SortChild
//
// Description:
//    The class contains sorting algorithms that sort Child objects
//
//    Data members:
//        Child kids[24]   : Sort Array
//        int  numKids     : Array size
//
//        SortChild (Child [], int numKids);
//        void printChildNameAge();
//        void sortByName()
//        void sortByAge()
//
//    Possible Member functions  (depends on Sorting Algorithm Selected)
//        int  insertionSort();
//        int  selectionSort();
//        int  bubbleSort();
//        int  quickSort(int, int);
//        int  partition(int, int, int)
//        int  mergeSort(int, int);
//        void merge(int, int, int);
//
///////////////////////////////////////////////////////////////////////

// SortChild class definition
#include <iostream>
#include <array>
#include <string>

#include "Child.h"



class SortChild
{
    // Data members
    
    // Constructor
public:
    SortChild(Child kids [] , int numKids);
    void printChildNameAge();
    void sortByName();
    void sortByAge();
    int  bubbleSort(int x);
private:
    Child kids [24];
    
    int numKids;
    // Sorting algorithms
    
    // Displays information in Child array
    
};
#endif