///////////////////////////////////////////////////////////////////////
//
// Class: Child
//                                                                   
// Description:
//    The class holds information about a child at the WT Day Care
//
//    List of data members:
//        string name     : Child's first name
//        int    age      : Child's age
//        char   gender   : Child's gender: 'F' or 'M'
//        bool   inSchool : Child's school status based on age
//
//    List of member functions                                       
//        Child ();
//        Child (string, int, char);
//        void   setName(string);
//        void   setAge(int);
//        void   setGender(char);
//        void   setInSchool();
//        string getName();
//        int    getAge();
//        char   getGender();
//        bool   getInSchool();
//        void   childMsg();
// 
///////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>
#include "Child.h"

using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function: Child()                                          
//                                                                   
// Description:
//    Default constructor: sets name="Roy", age=1, 
//    gender='M', and inSchool=false
//
// Parameters: none 
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

Child::Child()
{
    name = "Roy";
    age = 1;
    gender = 'M';
    inSchool = false;
}

///////////////////////////////////////////////////////////////////////
//
// Function: Child(string nam, int ag, char gen)
//                                                                   
// Description:
//    Three-parameter constructor: initializes name, age and gender
//    Calls setInSchool() to initialize inSchhool based on age
//
// Parameters:  
//    string nam  : Child's name
//    int ag      : Child's age               
//    char gen    : Child's gender               
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

Child::Child(string nam, int ag, char gen)
{
    name = nam;
    age = ag;
    gender = gen;
    setInSchool();
}

///////////////////////////////////////////////////////////////////////
//
// Function: void setName(string nam)
//                                                                   
// Description:
//    Sets name data member: the Child's first name
//
// Parameters:  
//    string nam  : Child's first name
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

void Child::setName(string nam)
{
    name = nam;
}

///////////////////////////////////////////////////////////////////////
//
// Function: void setAge(int ag)
//                                                                   
// Description:
//    Sets age data member: the Child's age
//
// Parameters:  
//    int ag      : Child's age               
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

void Child::setAge(int ag)
{
    age = ag;
}

///////////////////////////////////////////////////////////////////////
//
// Function: void setGender(char gen)
//                                                                   
// Description:
//    Sets gender data member: the Child's gender
//
// Parameters:  
//    char gen      : Child's gender: 'M' or 'F'               
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

void Child::setGender(char gen)
{
    gender = gen;
}

///////////////////////////////////////////////////////////////////////
//
// Function: void setInSchool()
//                                                                   
// Description:
//    Sets inSchool data member: uses the Child's age to determine 
//    whether or not the Child is in school
//
// Parameters: none  
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

void Child::setInSchool()
{
    if (age >= 5)
    {
        inSchool = true;
    }
    else
    {
        inSchool = false;
    }
}

///////////////////////////////////////////////////////////////////////
//
// Function: string getName()
//                                                                   
// Description:
//    Returns name data member: the Child's first name
//
// Parameters: none 
//                                                       
// Returns:  
//    string : name
//                                            
///////////////////////////////////////////////////////////////////////

string Child::getName()
{
    return name;
}

///////////////////////////////////////////////////////////////////////
//
// Function: int getAge()
//                                                                   
// Description:
//    Returns age data member: the Child's age
//
// Parameters: none 
//                                                       
// Returns:  
//    int : age
//                                            
///////////////////////////////////////////////////////////////////////

int Child::getAge()
{
    return age;
}

///////////////////////////////////////////////////////////////////////
//
// Function: char getGender()
//                                                                   
// Description:
//    Returns gender data member: the Child's gender: 'M' or 'F'
//
// Parameters: none 
//                                                       
// Returns:  
//    char : gender : 'M' or 'F'
//                                            
///////////////////////////////////////////////////////////////////////

char Child::getGender()
{
    return gender;
}

///////////////////////////////////////////////////////////////////////
//
// Function: bool getInSchool()                                          
//                                                                   
// Description:
//    Returns inSchool data member used to determine 
//    whether or not the Child is in school
//
// Parameters: none 
//                                                       
// Returns:  
//    bool : inSchool : true or false
//                                            
///////////////////////////////////////////////////////////////////////

bool Child::getInSchool()
{
    return inSchool;
}

///////////////////////////////////////////////////////////////////////
//
// Function: void childMsg()
//                                                                   
// Description:
//    Displays the information in the Child 
//    object using a readable message
//
// Parameters: none  
//                                                       
// Returns: none 
//                                            
///////////////////////////////////////////////////////////////////////

void Child::childMsg()
{
    string gen = "";
    if (gender == 'F') 
    {
        gen = "female";
    }
    else
    {
        gen = "male";
    }

    string is = "";
    if (inSchool) 
    {
        is = "in school.";
    }
    else
    {
        is = "not in school.";
    }

    cout << name  << " is a " << age << " year-old " << gen 
         << " child, who is " << is << endl << endl;
}
