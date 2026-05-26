#include<iostream>
#include<stdio.h>
using namespace std;

class Student{
    const string name;
    int rollnumber;
    double score;
    public:
    Student(string name,int roll,double score):  name(name) // initializer list type assignment for const assignment
    {
        //For const members:memory must be initialized during object creation itself. That happens BEFORE constructor body executes.
        this->rollnumber=roll;
        this->score=score;
    }
    void display_student(){
        cout<<"the student is:"<<name<<" "<<rollnumber<<" "<<score<<endl;
    }
};


int main(){
    Student s= Student("clara B",5,21.4);
    s.display_student();  
    return 0;
}