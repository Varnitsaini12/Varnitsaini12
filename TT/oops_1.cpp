#include <iostream>

using namespace std;

class Classroom
{
private:
    double length;
    double width;
    double height;
public:
    void set(double length, double width, double height){
        this->length = length;
        this->width = width;
        this->height = height;
    }

    double Area()
    {
        return length * wih;
    }
    double volume()
    {
        return length * width * height;
    }

    void Area1()
    {
        cout << "Function which do not return any value:" << endl;
        cout << length * width << endl;
    }
};

int main()
{
    Classroom AIML;
    AIML.set(10,20,30);
    // AIML.length = 10;
    // AIML.width = 20;
    // AIML.height = 30;
    AIML.Area1();
    cout << "Area is:" << AIML.Area() << endl;
    cout << "Volume is:" << AIML.volume() << endl;

    return 0;
}