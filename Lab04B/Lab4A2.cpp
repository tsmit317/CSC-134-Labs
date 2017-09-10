//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Lab4A2.cpp
// Name: Taylor Smith
// Date: 02/27/14
//
// Description: Program uses built-in array of 20 integers and two pointer based strings to test
//              the function prototypes. The 6 functions display length, copy strings to one another,
//              and add each together using array subscripting and pointer arithmetic.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Implement the following function prototypes
int stringLength1 (char *str);
int stringLength2 (char *str);
char* stringCopy1 (char *str1, const char *str2);
char* stringCopy2 (char *str1,  const char *str3);
char* stringCat1 (char *str1, const char *str2);
char* stringCat2 (char *str1, const char *str3);

// Use the following driver to test implementations:
int main()
{
    char str1[20];
    char *str2 = "Forrest";
    char *str3 = "Run";
    
   
    // Test stringLength functions
    
    cout << "stringLength1 (" << str2 << "): "
    << stringLength1 (str2) << endl;
    cout << "stringLength2 (" << str3 << "): "
    << stringLength2 (str3) << endl;
    
    // Test stringCopy functions
    
    cout << "stringCopy1 (str1, " << str2 << "): "
    << stringCopy1 (str1, str2) << endl;
    cout << "stringCopy2 (str1, " << str3 << "): "
    << stringCopy2 (str1, str3) << endl;
   
    // Test stringCat functions
    
    cout << "stringCat1 (str1, " << str2 << "): "
    << stringCat1 (str1, str2) << endl;
    cout << "stringCat2 (str1, " << str3 << "): "
    << stringCat2 (str1, str3) << endl;


    
    return 0; 
} // end main

// shows length using array subscripting

int stringLength1 ( char *str)
{
    
    int i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
};

// shows length using pointer arithmetic
int stringLength2 ( char *str)
{
  int len = 0;
    while(*str != '\0')
    {
        str++;
        len++;
    }
    
    return len;
};

// copies str2 to str1 using array subscripting
char* stringCopy1 (char *str1, const char *str2)
{
    int i = 0;
    
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    
    return str1;
};

// copies str3 to str1 using pointer arithmetic
char* stringCopy2 (char *str1, const char *str3)
{
    int j = 0;
    
    while (*(str3+j) != '\0')
    {
        *(str1+j) = *(str3+j);
        j++;
    }

    *(str1+j) = '\0';
    
    return str1;
};

// adds str2 to str1, which contains the copy of str3, at the end of str1 using array subscripting
char* stringCat1 (char *str1, const char *str2)
{
    
    int j = 0;

    str1[3] = '1';
        
        while (str2[j] != '\0')
        {
            str1[3 + j] = str2[j];
            j++;
            
        }
    
    str1[3+j] = '\0';
    
	return str1;
};

// adds str3 to str1, which contains str1+str2, at the end of str1 using pointer arithmetic
char* stringCat2 (char *str1, const char *str3)
{
    int j = 0;
    
    *(str1 + 10) = '1';
    
    while (*(str3 + j) != '\0')
    {
        *(str1 +(10 + j)) = *(str3 + j);
        j++;
    }
    
    *(str1 +(10 + j)) = '\0';
    
    return str1;
};
