#include<iostream>
#include<cmath>
using namespace std;
int main(){//
    //Data types//
   /* int age=18;
    char name= 'a';
    float PI= 3.14f;
    bool isSafe= true;
    double num= 100.99;
    cout<< age << endl << name << endl << PI<< endl << isSafe << endl << num << endl;
// type conversion (small to big) : Implicit//
    char grade ='b';
    int value = grade;
    cout << value<< endl; //returns the ASCII value of the character//

// Type Casting (big to small) : Explicit//
    double digit=1000.998;
    int newDigit= (int)digit;
    cout << newDigit << endl;


// taking input from user//
   int number;
   cout<< "enter number";
   cin>> number;

   cout<< number<< endl;

//Airthmetic Operations//
   int a= 5; 
   int b= 10;
   int sum = a+b;
   int sub= a-b;
   float div= a/b;
   int mult=a*b;
   double mod= a%b;
   cout<< sum << endl << sub << endl << div << endl << mult << endl << mod << endl;

   //Conditional Statement//
   int ageofperson;
   cout<<"enter age if the person";
   cin>>ageofperson;

   if(ageofperson>=18){
    cout<<"eleigible";
   }
   else{
    cout<<"not eligible" << endl;
   }*/
   //loops//
   /*int n=3;
   int num=1;
   for (int i =1; i<=n ; i++){
    for(int j=1; j<=n; j++){
        cout<<num;
        num=num+1;
    }

    cout<< endl;
}*/

/*int n = 4; // You can change this for bigger pattern

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n-i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

return 0;
}*/


/*int a=13;
int b=5;
float c;
c=(float)a/b;     //typecasting//
cout<<c;*/



/*int a,b,c;
cout<<"enter a,b,c";
cin>>a>>b>>c;
float r1=(-b+sqrt(b*b-4*a*c))/(2*a);
float r2=(-b-sqrt(b*b-4*a*c))/(2*a);

cout<<r1<<" "<<r2;

return 0;
}*/


//loop to display Digits of a given number in reverse//
/*int r,n;
int sum=0;
int m=n;
cout<<"enter n";
cin>>n;
while(n>0){
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;
 }

 if(sum==m){
    cout<<"armstrong";
 }
 else{
    cout<<"not armstrong";
 }
}*/


/* int r, n;
int rev=0;
int m=n;
while(n>0){
    r=n%10;
    n=n/10;      //same method to reverse a number//
    rev=rev*10+r;
}

if(rev==m){
    cout<<"palindrome";
}
else{
    cout<<"not plaindrome";
}
}*/


