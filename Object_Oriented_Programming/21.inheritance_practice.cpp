//inheritance practice
/*
create 2 calculator 
    1.simpleCalcultor : takes input of 2 numbers using a utility function and performs +,-,*,/ and displays the result using another utitlity function
    2.scientific calculator : takes input of 2 numbers using a utility function and performs any four scientific operation of your choice
                              and displays the result using another utitlity function

    Create another class HybridCalculator and inherit it using these two classes 
    Q1.what type of iheritance are you using?
    Q2.what mode of inheritance are you using
    Q3.create an object of HybirdCalculator and display result of simple and scientfic calculator

*/

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
private:
    float num1,num2;
public:
    float add, sub, mul, div;
    // SimpleCalculator(float n1, float n2){
    //     num1=n1;
    //     num2=n2;
    // }
    void set_data1(float n1, float n2){
        num1=n1;
        num2=n2;
    }
    void calculate(){
        add=num1+num2;
        sub=num1-num2;
        mul=num1*num2;
        div=num1/num2;
    }
    void simple_display(){
        calculate();
        cout<<"Additon: "<<add<<endl;
        cout<<"Subtraction: "<<sub<<endl;
        cout<<"Multiplication: "<<mul<<endl;
        cout<<"Division: "<<div<<endl;
    }
};
class ScientificCalculator{
private:
    float x,y;
public:
    float p, e, fact, l;      //power(x,y)=x^y    exp(x)=e^x     fact(x)=X!     log(x)
    // ScientificCalculator(float a, float b){
    //     x=a;
    //     y=b;
    // }
    void set_data2(float a, float b){
        x=a;
        y=b;
    }
    float power(float base, float ex){          //ex-> exponent
        p= pow(base,ex);
        return p;
    }
    float exponent(float num){
        e=exp(num);
        return e;
    }
    float factorial(int num){
        if(num==0){
            return 1;
        }
        else{
            return num*factorial(num-1);
        }
    }
    float slog(float s){
        l=log(s);
        return l;
    }
    void scientific_display(){
        cout<<"pow("<<x<<","<<y<<"): "<<power(x,y)<<endl;
        cout<<"e^"<<x<<": "<<exponent(x)<<", e^"<<y<<": "<<exponent(y)<<endl;
        cout<<"factorial("<<x<<"): "<<factorial(x)<<", factorial("<<y<<"): "<<factorial(y)<<endl;
        cout<<"log("<<x<<"): "<<slog(x)<<", log("<<y<<"): "<<slog(y)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

public:
    void display(){
        simple_display();
        scientific_display();
    }
};
/*
                this is how class HybridCalculator will look like
private:
    float num1,num2;     
    float x,y;
public:           
    float add, sub, mul, div;
    set_data1();
    void calculate();
    void simple_display();

    float p, e, fact, l; 
    set_data2();
    float power(float base, float ex);
    float factorial(int num);
    float slog(float s);
    void scientific_display();
*/

int main(){
    int a,b;
    HybridCalculator object;
    cout<<"enter a and b: ";
    cin>>a>>b;
    object.set_data1(a,b);       //simple calculator
    object.set_data2(a,b);       //scientific calculator

    object.display();

    return 0;
}
