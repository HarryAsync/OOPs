#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

// abstract class
class shape{
    public:
    virtual float area(){                  // virtual function to be overridden in sub class 
        return 0.0;
    }
};
class square : public shape{
    float side;
    public:
    square(float side){
        this->side=side;
    }
    float area() override{
        return side*side;
    }
};
class triangle : public shape{
    float base, height ;
    public:
    triangle(float base,float height){
        this->base=base;
        this->height=height;
    }
    float area() override{
        return 0.5*base*height;
    }
};
int main(){
    triangle t = triangle(3,5);
    square s = square(5);
    vector<shape*>v;      // storing pointer for base class since it is base for both the subclass 
    v.push_back(&t);
    v.push_back(&s);
    for(auto it:v)
    {
        cout<<"area of this shape is :"<< it->area()<<endl;
    } 
    return 0;
}