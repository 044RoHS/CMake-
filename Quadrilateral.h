#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Figure.h"

class Chetriohugolnik : public Phigure {
    public:
        Chetriohugolnik(){}
    
        Chetriohugolnik(int ASide, int BSide, int CSide, int DSide, double AAngle, double BAngle, double CAngle, double DAngle)
        {
            this->ASide = ASide;
            this->BSide = BSide;
            this->CSide = CSide;
            this->DSide = DSide;
            this->AAngle = AAngle;
            this->BAngle = BAngle;
            this->CAngle = CAngle;
            this->DAngle = DAngle;
        }
    
       
        void get_Phigure() override {
            cout << "Четырёхугольник:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
            cout << endl;
        }
    };

#endif 