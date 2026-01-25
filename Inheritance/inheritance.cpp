#include  <iostream>
#include <cstring>
using namespace std;

class TwoDShape
{
    public:
    double width, height;
    void showDim()
    {
        cout << "Width and Height are " << width << " and " << height << endl;
    }
};
class Triangle : public TwoDShape
{
    public:
    char style[20];

    double area()
    {
        return 0.5 * width * height;
    }
    void showStyle()
    {
        cout << "Triangle style is " << style << endl;
    }
};

int main()
{
    Triangle t1, t2;

    strcpy(t1.style, "isosceles");
    t1.width = 4.0;
    t1.height = 4.0;

    strcpy(t2.style, "right angled");
    t2.width = 8.0;
    t2.height = 12.0;

    cout << "Info for t1: " << endl;
    t1.showStyle();
    t1.showDim();
    cout << "Area is " << t1.area() << endl;

    cout << endl;

    cout << "Info for t2: " << endl;
    t2.showStyle();
    t2.showDim();
    cout << "Area is " << t2.area() << endl;

    return 0;
}