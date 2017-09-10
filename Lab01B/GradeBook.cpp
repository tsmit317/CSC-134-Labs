//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename:GradeBook.cpp
// Date: 01/29/14
// Programmer: Taylor Smith
//
// Discription: Implementations of the GradeBook member-function definitions.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include "GradeBook.h" // include class GradeBook
#include <iostream>

using namespace std;

// constructor GradeBook() initializes data-members of class GradeBook
GradeBook::GradeBook()
{
    double lab_grade_total = 0.0;
    double quiz_grade_total = 0.0;
    int lab_grade_cnt = 0;
    int quiz_grade_cnt = 0;
    double lab_avg = 0.0;
    double quiz_avg = 0.0;
    double midterm_exam_grade = 0.0;
    double final_exam_grade = 0.0;
    double ec_grade = 0.0;
    double fsg = 0.0;
    char flg = ' ';
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: addLabGrade(double grade)
//
// Description: Adds grade to lab_grade_total and adds 1 to total lab_grade_cnt.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void GradeBook::addLabGrade(double grade)
{
    grade = 0.0;
    cin >> grade;
    
    lab_grade_total = lab_grade_total + grade;
    lab_grade_cnt += 1;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getAvgLabGrade()
//
// Description: Calculates the lab average by dividing the total lab grades, lab_grade_total,
//              by the number of lab grades entered, lab_grade_cnt.
//
// Returns: lab_avg, or lab average
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double GradeBook::getAvgLabGrade()
{
    lab_avg = lab_grade_total / lab_grade_cnt;
    return lab_avg;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: addQuizGrade(double grade)
//
// Description: Adds grade to total quiz grades, quiz_grade_total, and adds 1 to the quiz count,
//              quiz_grade_cnt.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void GradeBook::addQuizGrade(double grade)
{
    grade = 0.0;
    cin >> grade;
    
    quiz_grade_total = quiz_grade_total + grade;
    quiz_grade_cnt += 1;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getAvgQuizGrade()
//
// Description: Calculates the quiz average by dividing the total quiz grades, quiz_grade_total,
//              by the number of quiz grades entered, quiz_grade_cnt.
//
// Returns: quiz_avg, or quiz average
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double GradeBook::getAvgQuizGrade()
{
    quiz_avg = quiz_grade_total / quiz_grade_cnt;
    return quiz_avg;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: setMidtermExamGrade(double grade)
//
// Description: Asks user to enter midterm grade, then sets the grade to midterm_exam_grade.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void GradeBook::setMidtermExamGrade(double grade)
{
    grade = 0.0;
    
    cout << "Enter midterm exam grade: ";
    cin >> grade;
    midterm_exam_grade = grade;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getMidtermExamGrade()
//
// Returns: Midterm exam grade, or midterm_exam_grade.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double GradeBook::getMidtermExamGrade()
{
    return midterm_exam_grade;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: setFinalExamGrade(double grade)
//
// Description: Asks user to enter final exam grade, then sets the grade to final_exam_grade.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void GradeBook::setFinalExamGrade(double grade)
{
    grade = 0.0;
    
    cout << "Enter final exam grade: ";
    cin >> grade;
    final_exam_grade = grade;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getFinalExamGrade()
//
// Returns: Final exam grade, or final_exam_grade.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double GradeBook::getFinalExamGrade()
{
    return final_exam_grade;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: setExtraCreditGrade(double grade)
//
// Description: Asks user to enter extra credit grade, then sets ec_grade equal to grade.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void GradeBook::setExtraCreditGrade(double grade)
{
    grade = 0.0;
    
    cout << "Enter extra credit grade: ";
    cin >> grade;
    ec_grade = grade;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getExtraCreditGrade()
//
// Returns: Extra credit grade, or ec_grade.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double GradeBook::getExtraCreditGrade()
{
    return ec_grade;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getFinalSemesterGrade()
//
// Description: Calculates the final semester grade by multiplying: quiz, lab, midterm exam, final exam
//              , and extra credit averages by the weight (percent of final grade) they carry in the class,
//              then adding them together.
//
// Returns: Final semester grade, or fsg.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double GradeBook::getFinalSemesterGrade()
{
    fsg = ((lab_avg * .50) + (quiz_avg * .10) + (midterm_exam_grade * .20) + (final_exam_grade * .20) +(ec_grade * .02));
    return fsg;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Function: getFinalLetterGrade()
//
// Description: Determines the final letter grade by using "if"/"else..if" statements, which uses the final
//              semester grade, fsg.
//
// Returns: Final letter grade, or flg.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
char GradeBook::getFinalLetterGrade()
{
    if (fsg >= 90)
    {
        flg = 'A';
    }
    else if ((fsg < 90) && (fsg >= 80))
    {
        flg = 'B';
    }
    else if ((fsg < 80) && (fsg >= 70))
    {
        flg = 'C';
    }
    else if ((fsg < 70) && (fsg >= 65))
    {
        flg = 'D';
    }
    else if (fsg < 65)
    {
        flg = 'F';
    }
    
    return flg;
}
