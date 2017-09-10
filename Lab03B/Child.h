#ifndef CHILD_H
#define CHILD_H
     
///////////////////////////////////////////////////////////////////////
//
// Class: Child
//                                                                   
// Description:
//    The class holds information about a child at the WT Day Care
//
//    Data members:
//        string name     : Child's first name
//        int    age      : Child's age
//        char   gender   : Child's gender: 'F' or 'M'
//        bool   inSchool : Child's school status based on age
//
//    Member functions                                       
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

#include <cstdlib>
#include <string>

using namespace std;

class Child
{

// Data members

private:
    string name;
    int age;
    char gender;
    bool inSchool;

public:

// Constructors
    
    Child ();
    Child (string, int, char);

// Setters: Mutators
    
    void   setName(string);
    void   setAge(int);
    void   setGender(char);
    void   setInSchool();

// Getters: Accessors
    
    string getName();
    int    getAge();
    char   getGender();
    bool   getInSchool();

// Displays information in Child object
    
    void   childMsg();
};
#endif
