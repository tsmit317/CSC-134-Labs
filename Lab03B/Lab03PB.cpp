///////////////////////////////////////////////////////////////////////
//
// Filename: Lab3B.cpp
// Date: 02/24/14
// Programmer: Taylor Smith
//
// Description:
//   WT Day Care has requested a program that can sort the children
//      in the day care facility either by age or by name.
//  The programmers have decided implement one of the following Sorting Algorithm
//      five possible different sorting algorithms:
//       	a) insertion sort
//       	b) selection sort
//       	c) bubble sort
//       	d) quick sort
//       	e) merge sort
//
//   Each of the children in the facility is represented by a Child
//      object and these objects are stored in an array of Child
//      objects.  The main function creates the Child array and
//      invokes the childInitArray(Child kids[]) function to
//      initialize the Child objects. The main function performs the
//      following tasks:
//         a) creates a SortChild object.
//         b) invokes the sortByName() and sortByAge() member functions of the SortChild
//            class to sort the array.
//         c) display the sorted list.
//
//    Possible Sample Output:
//
//
//    Using Bubble Sort to sort by name
//
//    Contents of Child Array :
//    Ashton   :  5
//    Bella    : 10
//    Cassidy  : 10
//    Christy  :  7
//    Elijah   : 11
//    Gerald   : 10
//    James    :  3
//    Phoenix  :  3
//    Terra    :  6
//    Tommy    :  9
//
//    Using Bubble Sort to sort by age
//
//    Contents of Child Array :
//    James    :  3
//    Phoenix  :  3
//    Ashton   :  5
//    Terra    :  6
//    Christy  :  7
//    Tommy    :  9
//    Bella    : 10
//    Cassidy  : 10
//    Gerald   : 10
//    Elijah   : 11
//
//    Using Quick Sort to sort by name
//
//    Contents of Child Array :
//    Ashton   :  5
//    Bella    : 10
//    Cassidy  : 10
//    Christy  :  7
//    Elijah   : 11
//    Gerald   : 10
//    James    :  3
//    Phoenix  :  3
//    Terra    :  6
//    Tommy    :  9
//
//    Using Quick Sort to sort by age
//
//    Contents of Child Array :
//    Phoenix  :  3
//    James    :  3
//    Ashton   :  5
//    Terra    :  6
//    Christy  :  7
//    Tommy    :  9
//    Gerald   : 10
//    Cassidy  : 10
//    Bella    : 10
//    Elijah   : 11
//
//    Press any key to continue . . .
//
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Child.h"
#include "SortChild.h"
using namespace std;

int childInitArray(Child[]);

// the main function

int main()
{
    // Get Child array to sort
    
    Child kids[24];
    
    int numKids = childInitArray(kids);
    
    // Instantiate the SortChild object used to sort the array
    
    SortChild sort(kids, numKids);
	// Display the list of kids before sorting
	sort.printChildNameAge();
    
    // Sort the object and display output
    sort.sortByName();
	sort.printChildNameAge();
	cout << endl;
	sort.sortByAge();
	sort.printChildNameAge();
    
	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////
//
// Function: int childInitArray(Child kids[])
//
// Description:
//    Initializes the Child array to sort.
//
// Parameters:
//      Child[] kids : the Child array
//
// Returns: int numKids : number of kids in array
//
///////////////////////////////////////////////////////////////////////

int childInitArray(Child kids[])
{
    kids[0]  = Child("Cassidy", 10, 'F');
    kids[1]  = Child("Ashton",   5, 'F');
    kids[2]  = Child("James",    3, 'M');
    kids[3]  = Child("Elijah",  11, 'M');
    kids[4]  = Child("Terra",    6, 'F');
    kids[5]  = Child("Christy",  7, 'F');
    kids[6]  = Child("Bella",   10, 'F');
    kids[7]  = Child("Tommy",    9, 'M');
    kids[8]  = Child("Gerald",  10, 'M');
    kids[9]  = Child("Phoenix",  3, 'F');
    kids[10] = Child("Patsy",   11, 'F');
    kids[11] = Child("Becky",    7, 'F');
    kids[12] = Child("Betty",   10, 'F');
    kids[13] = Child("Dorthy",  11, 'F');
    kids[14] = Child("Casey",    7, 'M');
    kids[15] = Child("Lilly",    1, 'F');
    kids[16] = Child("Mary",    11, 'F');
    kids[17] = Child("Jerry",    7, 'M');
    kids[18] = Child("John",     1, 'M');
    kids[19] = Child("Anne",    10, 'F');
    kids[20] = Child("Pam",      8, 'F');
    kids[21] = Child("David",    5, 'M');
    kids[22] = Child("Joey",     8, 'M');
    kids[23] = Child("Jenell",   8, 'F');
    
    return 24;
}


