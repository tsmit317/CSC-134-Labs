////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Lab01P1.cpp
// Date: January 10th, 2014
// Programmer: Taylor Smith
//
// Description:
//      Allows students to calculate their final semester grade by using six lab, seven quiz, midterm exam, final
//      exam, and extra credit grades.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int lab1, lab2, lab3, lab4, lab5, lab6 = 0;
    int q1, q2, q3, q4, q5, q6, q7 = 0;
    int midterm = 0;
    int final_exam = 0;
    int extra_credit = 0;
   
    char FLG = ' ';
    
    double lab_grade_total = 0.0;
    double lab_avg = 0.0;
    double quiz_grade_total = 0.0;
    double quiz_avg = 0.0;
    double FSG = 0.0;
    
    cout << "Enter six lab grades" << endl;
    cin >> lab1 >> lab2 >> lab3 >> lab4 >> lab5 >> lab6;
    lab_grade_total = (lab1 + lab2 + lab3 + lab4 + lab5 + lab6);
    lab_avg = (lab_grade_total / 6);
    
    cout << "Enter seven quiz grades" << endl;
    cin >> q1 >> q2 >> q3 >> q4 >> q5 >> q6 >> q7;
    quiz_grade_total = (q1 + q2 + q3 + q4 + q5 + q6 + q7);
    quiz_avg = (quiz_grade_total / 7);
    
    cout << "Enter midterm grade" << endl;
    cin >> midterm;
    
    cout << "Enter final exam grade" << endl;
    cin >> final_exam;
    
    cout << "Enter extra credit grade" << endl;
    cin >> extra_credit;
    
    FSG = ((lab_avg * .50) + (quiz_avg * .10) + (midterm * .20) + (final_exam * .20) + (extra_credit * .02));
    
    if (FSG >= 90)
    {
        FLG = 'A';
    }
    else if (FSG < 90 && FSG >= 80)
    {
        FLG = 'B';
    }
    else if (FSG < 80 && FSG >=70)
    {
        FLG = 'C';
    }
    else if (FSG < 70 && FSG >= 65)
    {
        FLG = 'D';
    }
    else if (FSG < 65)
    {
        FLG = 'F';
    }
        
    cout << "STUDENT FINAL SEMESTER GRADE CALCULATION" << endl;
    cout << fixed;
    cout << "Average Lab Grade: " << setprecision(2) << lab_avg << endl;
    cout << fixed;
    cout << "Average Quiz Grade: " << setprecision(2) << quiz_avg << endl;
    cout << fixed;
    cout << "Midterm Exam Grade: " << setprecision(2) << midterm << endl;
    cout << fixed;
    cout << "Final Exam Grade: " << setprecision(2) << final_exam << endl;
    cout << fixed;
    cout << "Final Semester Grade: " << setprecision(2) << FSG << endl;
    cout << "Final Letter Grade (FSG): " << FLG << endl;
    
    cin.get();
    return 0;
}

