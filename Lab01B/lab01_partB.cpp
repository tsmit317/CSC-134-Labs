//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename:lab01_partB.cpp
// Date: 01/29/14
// Programmer: Taylor Smith
//
// Discription:
//      Program asks the user to enter lab, quiz, midterm exam, final exam, and extra credit grades.
//      The program then calculates: average lab and quiz grades, final semester grade, and final letter
//      grade. The program uses the class "GradeBook" and creates two objects, "myGradebook 1 and 2" to
//      to manipulate.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "GradeBook.h" //include definition of class GradeBook
#include <iomanip> // include iomanip to use "setprecision"

using namespace std;

// function main begins program execution
int main()
{
    // create two GradeBook objects
    
    GradeBook myGradebook1; //create object myGradebook1
    GradeBook myGradebook2; // create object myGradebook2
    
    // declare local variables
    double lGrade = 0.0;
    double qGrade = 0.0;
    double mGrade = 0.0;
    double fGrade = 0.0;
    double eGrade = 0.0;
    
    // begin myGradebook1
    // ask user to enter lab grades
    cout << "Enter six lab grades: ";
    myGradebook1.addLabGrade(lGrade); // enters "lGrade" to myGradebook1's addLabGrade; counter adds 1
    myGradebook1.addLabGrade(lGrade);
    myGradebook1.addLabGrade(lGrade);
    myGradebook1.addLabGrade(lGrade);
    myGradebook1.addLabGrade(lGrade);
    myGradebook1.addLabGrade(lGrade);
    
    // ask user to enter quiz grades
    cout << "Enter seven quiz grades: ";
    myGradebook1.addQuizGrade(qGrade); // enters "qGrade" to myGradebook1's addLabGrade; counter adds 1
    myGradebook1.addQuizGrade(qGrade);
    myGradebook1.addQuizGrade(qGrade);
    myGradebook1.addQuizGrade(qGrade);
    myGradebook1.addQuizGrade(qGrade);
    myGradebook1.addQuizGrade(qGrade);
    myGradebook1.addQuizGrade(qGrade);
    
    
    myGradebook1.setMidtermExamGrade(mGrade); // modify myGradebook1's MidtermExamGrade w/ double mGrade.
    myGradebook1.setFinalExamGrade(fGrade); // modify myGradebook1's FinalExamGrade w/ double fGrade.
    myGradebook1.setExtraCreditGrade(eGrade); // modify myGradebook1's ExtraCreditGrade w/ double eGrade.
    
    // display final semester grades for myGradebook1
    cout << "\n" << "STUDENT FINAL SEMESTER GRADE CALCULATON" << endl;
    cout << "Average Lab Grade: " << myGradebook1.getAvgLabGrade()
    << fixed << setprecision(2) << endl; // displays lab average
    cout << "Average Quiz Grade: " << myGradebook1.getAvgQuizGrade()
    << fixed << setprecision(2) << endl; // displays quiz average
    cout << "Midterm Exam Grade: " << myGradebook1.getMidtermExamGrade()
    << setprecision(2) << fixed << endl; // displays midterm grade
    cout << "Final Exam Grade: " << myGradebook1.getFinalExamGrade()
    << fixed << setprecision(2) << endl; // displays final exam grade
    cout << "Extra Credit Grade: " << myGradebook1.getExtraCreditGrade()
    << fixed << setprecision(2) << endl; // displays extra credit
    cout << "Final Semester Grade (FSG): " << myGradebook1.getFinalSemesterGrade()
    << fixed << setprecision(2) << endl; // displays final semester grade
    cout << "Final Semester Letter Grade: " << myGradebook1.getFinalLetterGrade() << endl; // displays letter grade
    
    // end of myGradebook1
    // start myGradebook 2
    
    // ask user to enter lab grades
    cout << "\n" << "Enter three lab grades: ";
    myGradebook2.addLabGrade(lGrade);// enters "lGrade" to myGradebook2's addLabGrade; counter adds 1
    myGradebook2.addLabGrade(lGrade);
    myGradebook2.addLabGrade(lGrade);
    
    // ask user to enter quiz grades
    cout << "Enter seven quiz grades: ";
    myGradebook2.addQuizGrade(qGrade);// enters "qGrade" to myGradebook2's addQuizGrade; counter adds 1
    myGradebook2.addQuizGrade(qGrade);
    myGradebook2.addQuizGrade(qGrade);
    
    
    myGradebook2.setMidtermExamGrade(mGrade);// modify myGradebook2's setMidtermExamGrade w/ mGrade
    myGradebook2.setFinalExamGrade(fGrade);// modify myGradebook2's setFinalExamGrade w/ fGrade
    myGradebook2.setExtraCreditGrade(eGrade);// modify myGradebook2's setExtraCreditGrade w/ eGrade
    
    // display final semester grades for myGradebook2
    cout << "\n" << "STUDENT FINAL SEMESTER GRADE CALCULATON FOR SECOND OBJECT" << endl;
    cout << "Average Lab Grade: " << myGradebook2.getAvgLabGrade()
    << fixed << setprecision(2) << endl; // displays lab avg
    cout << "Average Quiz Grade: " << myGradebook2.getAvgQuizGrade()
    << fixed << setprecision(2) << endl; // display quiz avg
    cout << "Midterm Exam Grade: " << myGradebook2.getMidtermExamGrade()
    << fixed << setprecision(2) << endl; // display midterm
    cout << "Final Exam Grade: " << myGradebook2.getFinalExamGrade()
    << fixed << setprecision(2) << endl; // display final exam
    cout << "Extra Credit Grade: " << myGradebook2.getExtraCreditGrade()
    << fixed << setprecision(2) << endl; // display extra credit
    cout << "Final Semester Grade (FSG): " << myGradebook2.getFinalSemesterGrade()
    << fixed << setprecision(2) << endl; // display final semester grade
    cout << "Final Semester Letter Grade: " << myGradebook2.getFinalLetterGrade() << endl; // display letter
    
    // end myGradebook2
    
    cin.get();
    return 0;
} // end main

