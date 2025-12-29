//Menu driven program for sorting an array in ascending and descending order

#include<iostream>
using namespace std;

void sortAscending(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void sortDescending(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter no. of products:";
    cin>>n;

    int prices[100];
    cout<<"enter the price of "<<n<<" products:"<<endl;
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    int choice;
    cout<<"\n--MENU--\n";
    cout<<"1.view Prices in Ascending order\n";
    cout<<"2.view Prices in Descending order\n";
    cout<<"3.EXIT\n";
    do{
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
                sortAscending(prices,n);
                cout<<"Prices in Ascending order:";
                display(prices,n);
                break;
            case 2:
                sortDescending(prices,n);
                cout<<"Prices in Descending order:";
                display(prices,n);
                break;
            case 3:
                cout<<"Exiting Program.Thank you!"<<endl;
                break;
            default:
                cout<<"invalid choice! please try again"<<endl;
        }
    }while(choice!=3);
    return 0;
}