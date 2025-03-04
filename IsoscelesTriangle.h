#ifndef ISOCELESTRIANGLE_H
#define ISOCELESTRIANGLE_H

#include "Triangle.h"

class RavnobedreniTreuqolnik : public Treygolni {
    public:
        RavnobedreniTreuqolnik(int ASide, int CSide,  double AAngle, double BAngle)
        {
            this->ASide = ASide;
            this->BSide = ASide;
            this->CSide = CSide;
            this->AAngle = AAngle;
            this->BAngle = BAngle;
            this->CAngle = AAngle; 
        }
    
        void get_Phigure() override {
            cout << "Равнобедренный треугольник:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
            cout << endl;
        }
    };

#endif 