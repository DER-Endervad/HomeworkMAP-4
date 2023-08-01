#include <iostream>

#include "shape.h"
#include "transform.h"

#include "my_line.h"
#include "my_sqr.h"
#include "my_cube.h"
#include "my_circle.h"
#include "my_cylinder.h"

int main()
{
    /*std::cout << "OLD Version: ";
    Shape shap(2,1,1,1,3,3,3,6,6,6,9,9,9,10,10,10,13,13,13,16,16,16,19,19,19);
    std::cout << shap.getType() << std::endl;
    transform tr(shap);
    tr.shift(2, 2, 2);
    tr.scaleX(5);*/

    // NEW
    My_line mline(1, 2, 3, 4);
    mline.scaleX(5);
    mline.shift(2, 2);
    mline.scale(3);

    My_sqr msqr(1, 2, 3, 4, 5, 6, 7, 8);
    msqr.scaleY(5);
    msqr.shift(3, 3);
    msqr.scale(2);

    My_cube mcube(1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 7, 8);
    mcube.scaleZ(5);
    mcube.shift(3, 3, 3);
    mcube.scale(2);

    My_circle mcircle(1, 2, 3);

    My_cylinder mcylinder(1, 2, 3, 4);

    system("Pause");
    return 0;
}
