#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Pryamougolnik : public Chetriohugolnik {
    public:
        Pryamougolnik(int ASide, int BSide, double AAngle)
        {
            this->ASide = ASide;
            this->BSide = BSide;
            this->CSide = ASide;
            this->DSide = BSide;
            this->AAngle = AAngle;
            this->BAngle = AAngle;
            this->CAngle = AAngle;
            this->DAngle = AAngle;
        }
    
        void get_Phigure() override {
            cout << "Прямоугольник:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
            cout << endl;
        }
    };

#endif 