#include<iostream>
const float PI=3.142;
using namespace std;
class Shape{
    public:
    //pure virtual function that will be overriden
    virtual void area()=0;
};
class Circle:public Shape{
    private:
    float radius;
    public:
    void area()override{
        float Area=PI*radius*radius;
        cout<<"Area of a circle of radius"<<radius<<"is "<<Area<<endl;
    }
    //constrictor for circle
    Circle(float r):radius(r){}
};
class Rectangle:public Shape{
    private:
    float length;
    float width;
    public:
    void area()override{
        float Area=length*width;
        cout<<"The area of the rectangle of length "<<length<<" and width "<<width<<"is "<<Area<<endl;
    }
    //constructor ro initialise
    Rectangle(float l,float w):length(l),width(w){}

};
int main(){
    int choice;
    cout<<"Enter Your desirred shape \n1. circle\n2. rectangle\nChoice:";
    cin>>choice;
    if(choice==1){
        Circle c(7.0);
        c.area();
    }else if(choice==2){
        Rectangle r(14.0,13.5);
        r.area();
    }else{
        cout<<"Enter a valid input";
    }
}