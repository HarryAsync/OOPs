#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle{
    private:
    int len,bth;
        public:
    Rectangle(int len,int bth){
        this->len=len;
        this->bth=bth;
    }

    int find_area(){
        return len*bth;
    }
    int perimeter(){
        return 2*(len+bth);
    }
};


int main(){
    Rectangle r = Rectangle(4,3);
    cout<<r.find_area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}