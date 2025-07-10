#include<iostream>
using namespace std;

//Adding two numbers
/*int sum(int a, int b){
    return a+b;
}

int main(){
    int x=4,y=5;

    cout << sum(x,y);
    cout<<endl;
    return 0;
}*/

//addition using loop
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

//finding factorial
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

//find prime number
/*int prime(int a){
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
}*/

//finding maximum of 3 number
/*int Max(int a, int b, int c){
    if(a>b&&b>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else
    return c;
}

int main(){
    cout<<Max(7,10,5);
}*/

//calculate m power n
/*int pow(int m,int n){
    int p=1;
    for(int i=0;i<n;i++){
        p=p*m;
    }
return p;
}

int main(){
    cout<<pow(2,5);
}*/


//Function Overloading: create multiple functions with the same name but different argument. This allows functions to perform similar operations on different types or numbers of inputs.
//summ of number using functions overloading
/*int sum(int a,int b){
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
    cout<<sum(10,20,30)<<endl;
}*/

//min of numbers using overloading
/*int Min(int a, int b){
    if(a>b){
        return b;
    }
    else
     return a;
}
int Min(int a, int b, int c){
    if(a<b&&a<c){
        return a;
    }
    else if(b<c){
        return b;
    }
    else
     return c;
}

float Min(float a, float b){
    if(a<b){
        return a;
    }
    else
     return b;
}

int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0f,9.0f)<<endl;
}*/


//FUNCTION TEMPLATES: you can use function templates to avoid function overloading in situations where multiple functions perform the same operation but with different data types. Function templates allow you to define a single function that works with any data type, making your code more efficient and versatile.
//Max of 2 numbers using function templates

/*template<class T>
T Max(T a, T b){
    if(a>b){
        return a;
    }
    else
     return b;
}
int main(){
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}*/

//DEFAULT ARGUEMENTS: a default argument is a value that is automatically assigned to a function parameter if no value is provided during the function call. 
                   // Default arguments can simplify the code by combining overloaded functions. You can create a single function that can operate with a varying number of parameters.

/*int max(int a,int b=0,int c=0){          //we can either pass 2 parameter or 3 parameters or onny 1, this is valid for all
    return a>b&&a>c ?a:(b>c?b:c);
}
int main(){
    cout<<max(10,13)<<endl;
    cout<<max(10,13,15)<<endl;
}*/

//"CALL BY VALUE" is a method of passing arguments to a function where the function receives a copy of the argument's value. This means that any changes made to the parameter within the function do not affect the original argument used in the function call. 
//swapig two numbers using call by value method
/*void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl; 
}*/

//"CALL BY ADDRESS" is a method of passing arguments to a function by their memory addresses, allowing the function to modify the original values rather than working on copies.
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
    int main(){
        int x=10,y=20;
        swap(&x,&y);
        cout<<x<<" "<<y<<endl;

    }
