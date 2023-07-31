#include <iostream>

#include "shape.h"
#include "transform.h"

int main()
{
    Shape shap(2,1,1,1,3,3,3,6,6,6,9,9,9,10,10,10,13,13,13,16,16,16,19,19,19);
    std::cout << shap.getType() << std::endl;
    transform tr(shap);
    tr.shift(2, 2, 2);
    tr.scaleX(5);
    system("Pause");
    return 0;
}
