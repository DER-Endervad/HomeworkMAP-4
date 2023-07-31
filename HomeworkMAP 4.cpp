#include <iostream>

#include "shape.h"
#include "transform.h"

int main()
{
    Shape shap(0,1,1,1,3,3,3,6,6,6,9,9,9,10,10,10,13,13,13,16,16,16,19,19,19);
    std::cout << shap.getType() << std::endl;
    transform tr(shap);
    tr.shift(2, 2, 2);
    system("Pause");
    return 0;
    /*std::vector<std::vector<int>> xyz2;
    std::vector<std::vector<int>> xyz(3, std::vector<int>(8));*/

}
