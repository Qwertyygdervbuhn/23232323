#include <iostream>
#include <time.h>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point() 
    {
        cout << "Default constructor\n";
        x = y = 0;
    }

    Point(int x1, int y1)  
    {
        cout << "Constructor with parameters\n";
        x = x1;
        y = y1;
    }

    void Init()
    {
        x = rand() % 10;
        y = rand() % 10;
    }

    void Init(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    void Output()
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }

   
    Point operator+(const Point& b)
    {
        Point temp;
        temp.x = this->x + b.x;
        temp.y = this->y + b.y;
        return temp;
    }

    Point operator+(int a)
    {
        Point temp;
        temp.x = this->x + a;
        temp.y = this->y + a;
        return temp;
    }

    Point operator*(int a)
    {
        Point temp;
        temp.x = this->x * a;
        temp.y = this->y * a;
        return temp;
    }

    
    Point operator/(int a)
    {
        Point temp;
        if (a != 0)
        {
            temp.x = this->x / a;
            temp.y = this->y / a;
        }
        return temp;
    }


    Point operator*(const Point& b)
    {
        Point temp;
        temp.x = this->x * b.x;
        temp.y = this->y * b.y;
        return temp;
    }

    
    Point operator/(const Point& b)
    {
        Point temp;
        if (b.x != 0 && b.y != 0)
        {
            temp.x = this->x / b.x;
            temp.y = this->y / b.y;
        }
      return temp;
    }
};

int main()
{
    srand(unsigned(time(0)));

    Point a(2, 4);
    Point b(1, 2);
    Point c = a + b;  
    c.Output();
    c = a + 10; 
    c.Output();

    c = a * 3;  
    c.Output();
   
    c = a / 2;  
    c.Output();

    
    c = a * b;  
    c.Output();

    c = a / b;  
    c.Output();
}
