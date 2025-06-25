#include<iostream>
using namespace std;

/*int sum(int a, int b){
    return a+b;
}

int main(){
    int x=4,y=5;

    cout << sum(x,y);
    cout<<endl;
    return 0;
}*/


/*int sumofDigits(int num){
    int digit=0;
    while(num>0){
        int lastDigit=num%10;
        num/=10;

        digit+=lastDigit;
    }
    return digit;
}

int main(){
    cout<<sumofDigits(154)<<endl;
}*/


/*int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
        cout<<endl;
    }
    return fact;
}


int nCr(int a, int b){

}*/


int prime(int a){
    if(a%2!=0){
        cout<<"num is prime";
    }
    else{
        cout<<"not Prime";
    }
    return a;
    
}

int main(){
    cout<<prime(9);
}