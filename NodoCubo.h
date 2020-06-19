#ifndef NODOCUBO_H_INCLUDE
#define NODOCUBO_H_INCLUDE
#include <iostream>
#include <string>
using namespace std;

class NodoCubo{
    public:
        NodoCubo(string name_,string month_,string year_)
        {
            name = name_;
            month = "0";
            year = "0";
            pass = "0";

            next = 0;
            before = 0;
            up  = 0;
            down = 0;
            ade  = 0;
            atr = 0; 
        }
        NodoCubo(string name_,string month_,string year_,string pas)
        {
            name = name_;
            month = month_;
            year = year_;
            pass = pas;

            next = 0;
            before = 0;
            up  = 0;
            down = 0;
            ade  = 0;
            atr = 0; 
        }
        

        
        string getName() {return name;}
        string getMonth(){ return month;}
        string getYear() {return year;}
        string getPass(){return pass;}
        

        NodoCubo *getNext(){ return next;}
        NodoCubo *getBefore() {return before;}
        NodoCubo *getUp(){ return up;}
        NodoCubo *getDown() {return down;}
        NodoCubo *getAde(){ return ade;}
        NodoCubo *getAtr() {return atr;}
        void setNext(NodoCubo *n) { next = n;}
        void setBefore(NodoCubo *n){ before = n;}
        void setUp(NodoCubo *n) { up = n;}
        void setDown(NodoCubo *n){ down = n;}
        void setAde(NodoCubo *n) { ade = n;}
        void setAtr(NodoCubo *n){ atr = n;}
        
        
     private:
        string name;
        string month;
        string year;
        string  pass;

        NodoCubo *next;
        NodoCubo *before;
        NodoCubo *up;
        NodoCubo *down;
        NodoCubo *ade;
        NodoCubo *atr;
        
    };
    #endif