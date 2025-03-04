#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Chetriohugolnik {
    public:
        Parallelogram(int ASide, int BSide, double AAngle, double BAngle){
            this->ASide = ASide;
            this->BSide = BSide;
            this->CSide = ASide;
            this->DSide = BSide;
            this->AAngle = AAngle;
            this->BAngle = BAngle;
            this->CAngle = AAngle;
            this->DAngle = BAngle;
        }
    
        void get_Phigure() override {
            cout << "Параллелограмм:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
            cout << endl;
        }
    };

#endif 