#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
using namespace std;




int main() {
    setlocale(LC_ALL, "Ru");
    
    Phigure* Treygolnik[] = {
        new Treygolni(10, 20, 30, 50, 60, 70),
        new PryamoygolniTreygolnik(10, 20, 30, 30, 60, 90),
        new RavnobedreniTreuqolnik(10, 5,50, 80),
        new RavnostoroniiTreuqolnik(20,60)
    };

    
    for (int i = 0; i < 4; ++i) {
        Treygolnik[i]->get_Phigure();
    }

   
    Phigure* Chetriohugolni[] = {
        new Chetriohugolnik(10, 20, 30, 40, 60, 120, 70, 50),
        new Pryamougolnik(10,20,90),
        new Kvadrat(20,90),
        new Pomb(20,60,120),
        new Parallelogram(20, 30, 60, 120)
    };

    
    for (int i = 0; i < 5; ++i) {
        Chetriohugolni[i]->get_Phigure();
    }

    
    for (int i = 0; i < 4; ++i) {
        delete Treygolnik[i];
    }

    for (int i = 0; i < 5; ++i) {
        delete Chetriohugolni[i];
    }
   

    return 0;

    system("pause");
}