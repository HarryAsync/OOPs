#include<iostream>
#include<stdio.h>
using namespace std;

class Circle{
    double r;
    public:
    Circle(double r){
    this->r=r;
    }
    const double get_area(){
        return  3.14159*r*r;
    }
};

int main(){
    Circle c = Circle(5);
    cout<<c.get_area()<<endl;
    return 0;
}