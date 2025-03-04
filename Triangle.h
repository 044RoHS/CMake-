#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"





class Treygolni : public Phigure {

    public:
    Treygolni(){}
        Treygolni(int ASide, int BSide, int CSide, double AAngle, double BAngle, double CAngle){
        this->ASide = ASide;
        this->BSide = BSide;
        this->CSide = CSide;
        this->AAngle = AAngle;
        this->BAngle = BAngle;
        this->CAngle = CAngle; 
        }
        
            void get_Phigure() override {
                cout << "Треугольник:" << endl;
                cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
                cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
                cout << endl;
            }
        };

#endif 