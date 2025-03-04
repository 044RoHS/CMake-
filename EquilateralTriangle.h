#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"

class RavnostoroniiTreuqolnik : public Treygolni {
    public:
        RavnostoroniiTreuqolnik(int ASide,  double AAngle)
        {
            this->ASide = ASide;
            this->BSide = ASide;
            this->CSide = ASide;
            this->AAngle = AAngle;
            this->BAngle = AAngle;
            this->CAngle = AAngle; 
        }
    
        void get_Phigure() override {
            cout << "Равносторонний треугольник:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
            cout << endl;
        }
    };

#endif 