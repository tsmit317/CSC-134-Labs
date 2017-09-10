//////////////////////////////////////////////////////////////////////////////////////////
//
// Class: GradeBook
//
// Discription: Presents the public interface of the class. Member-functions are defined in
//              GradeBook.cpp.
//
// Data Members:
//      double lab_grade_total;
//      double quiz_grade_total;
//      int lab_grade_cnt;
//      int quiz_grade_cnt;
//      double lab_avg;
//      double quiz_avg;
//      double midterm_exam_grade;
//      double final_exam_grade;
//      double ec_grade;
//      double fsg;
//      char flg;
//
// Member Functions:
//      GradeBook();
//      void addLabGrade(double grade);
//      void addQuizGrade(double grade);
//      void setMidtermExamGrade(double grade);
//      void setFinalExamGrade(double grade);
//      void setExtraCreditGrade(double grade);
//      double getMidtermExamGrade();
//      double getFinalExamGrade();
//      double getFinalSemesterGrade();
//      char   getFinalLetterGrade();
//      double getAvgLabGrade();
//      double getAvgQuizGrade();
//      double getExtraCreditGrade();
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class GradeBook
{
public:
    GradeBook();
    void addLabGrade(double grade);
    void addQuizGrade(double grade);
    void setMidtermExamGrade(double grade);
    void setFinalExamGrade(double grade);
    void setExtraCreditGrade(double grade);
    double getMidtermExamGrade();
    double getFinalExamGrade();
    double getFinalSemesterGrade();
    char   getFinalLetterGrade();
    double getAvgLabGrade();
    double getAvgQuizGrade();
    double getExtraCreditGrade();
    
private:
    double lab_grade_total;
    double quiz_grade_total;
    int lab_grade_cnt;
    int quiz_grade_cnt;
    double lab_avg;
    double quiz_avg;
    double midterm_exam_grade;
    double final_exam_grade;
    double ec_grade;
    double fsg;
    char flg;
};
