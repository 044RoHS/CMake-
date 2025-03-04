#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Quadrilateral.h"

class Pomb : public Chetriohugolnik {
    public:
        Pomb(int ASide,  double AAngle, double BAngle)
        {
            this->ASide = ASide;
            this->BSide = ASide;
            this->CSide = ASide;
            this->DSide = ASide;
            this->AAngle = AAngle;
            this->BAngle = BAngle;
            this->CAngle = AAngle;
            this->DAngle = BAngle;
        }
    
        void get_Phigure() override {
            cout << "Ромб:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
            cout << endl;
        }
    };

#endif 