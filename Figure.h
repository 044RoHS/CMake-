#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
using namespace std;

class Phigure {
    protected:
        int ASide;
        int BSide;
        int CSide;
        int DSide;
        double AAngle;
        double BAngle;
        double CAngle;
        double DAngle;
    
    public:
        Phigure(){}
        virtual void get_Phigure() = 0; 
        virtual ~Phigure() {}          
    };
    

#endif 