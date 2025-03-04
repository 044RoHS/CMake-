#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

# include "Triangle.h"

class PryamoygolniTreygolnik : public Treygolni {
    public:
        
    PryamoygolniTreygolnik( int ASide, int BSide, int CSide, double AAngle, double BAngle, double CAngle){
            this->ASide = ASide;
            this->BSide = BSide;
            this->CSide = CSide;
            this->AAngle = AAngle;
            this->BAngle = BAngle;
            this->CAngle = CAngle; 
    }
    
        void get_Phigure() override {
            cout << "Прямоугольный треугольник:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
            cout << endl;
        }
    };


#endif