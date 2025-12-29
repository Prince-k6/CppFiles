#include<iostream>
using namespace std;

//default arguments

int moneyReceived(int current_money, float factor=1.06){         //0.6:-6% interest
    return current_money*factor;
}

int main(){
    float money=100000;
    cout<<"if you have "<<money<<" in your bank account you wil receive "<<moneyReceived(money)<<" after 1 years"<<endl;
    cout<<"for VIP if you have "<<money<<" in your bank account you wil receive "<<moneyReceived(money,1.1)<<" after 1 years"<<endl;

}