////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Filename: InternetCharge.h
//  Date: 01/30/14
//  Programmer: Taylor Smith
//
//  Class: InternetCharge
//
//  Description: Presents the public interface of the class. Member-functions are defined in
//              InternetCharge.cpp.
//
//  Member-functions:
//          InternetCharge();
//          InternetCharge(int pln, int mnt, double dta);
//          void setPlan(int pln);
//          void setMinutes(int mnt);
//          void setData(double dta);
//          int getPlan();
//          int getMinutes();
//          double getData();
//          double getCharge();
//          double calcPlanCharge(int pln);
//          void displayMonCharge();
//          void displayBetterPlans();
//
//  Data-members:
//          int plan;
//          int minutes;
//          double data;
//          double charge;
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>


using namespace std;

class InternetCharge
{
    
        public:
            InternetCharge();
            InternetCharge(int pln, int mnt, double dta);
    
            void setPlan(int pln);
            void setMinutes(int mnt);
            void setData(double dta);
    
            int getPlan();
            int getMinutes();
            double getData();
            double getCharge();
    
            double calcPlanCharge(int pln);
            void displayMonCharge();
            void displayBetterPlans();
    
    
        private:
            int plan;
            int minutes;
            double data;
            double charge;
           
                
    
                   
    
    
};