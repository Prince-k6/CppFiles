//create a function which takes two points as objects and computes the distance bewtween those two points
//(hint: create a friend function)

//distance formula:  sqrt((x2-x1)^2+(y2-y1)^2)

#include<iostream>
#include<cmath>         //for sqrt 
using namespace std;

class point{
    double x;
    double y;
public:
    point(double a,double b){
        x=a;
        y=b;
    }
    void showPoint(){
        cout<<"("<<x<<","<<y<<")";
    }
    friend double distance(point  ,point );    //declared a friend function show that we can access the data of objects

};
double distance(point p, point q){
    return sqrt(pow((p.x-q.x),2)+pow((p.y-q.y),2));
}

int main(){
    point p(5,6);
    point q(8,9);

    p.showPoint();
    cout<<endl;
    q.showPoint();
    cout<<endl;

    cout<<"Distance between points ";p.showPoint();cout<<" and ";q.showPoint();cout<<"= "<<distance(p,q)<<endl;


    return 0;
}