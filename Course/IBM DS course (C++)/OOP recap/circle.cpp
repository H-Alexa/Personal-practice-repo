//Problem statement:



#include<iostream>
using namespace std;
class Circle{
private:
    int Radius;
    public:
    int getRadius()
    {
        return Radius;
        }
    void setRadius(int nradius)
    {
        Radius=nradius;
        }
    Circle(int r)
    {
        Radius=r;
        }
    };
    class Utility{
    public:
    double calculateArea(Circle C)
    {
        int radius = C.getRadius();
        return 3.14*radius*radius*1.0;
        }
    };
int main()
{
    int n;
    cout<<"Enter the radius(in cm): ";
    cin>>n;
    Circle c(n);
    Utility U;
    cout<<"Circle area = "<<U.calculateArea(c)<<"\n";
    return 0;
}
