#include "rectangle.h"

int Rectangle::getArea(int l,int b)
{
	int area;
        area = l * b;
        std::cout << "cout : Area = " << area << "\n";
	return area;
}
   
int Rectangle::getPerimeter(int l,int b)
{
        int peri;
        peri = 2 * (l + b);
        std::cout << "cout : Perimeter = " << peri << "\n";
	return peri;
}
