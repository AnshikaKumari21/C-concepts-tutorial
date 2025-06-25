#include<iostream>
using namespace std;
int main(){
    /*int A[7]={-2,-3,-5,-4,-8,-5,-9};
    int n=7,max;
    max=INT_MIN;  //max=0 when all the array nmber will be positive
    for(int i=0;i<7;i++){
        if(A[i]>max){            //fine the maximum number 
            max=A[i];
        }
    }
    cout<<"maximum number is"<<max;*/


    /*int A[10],n,key;
    cout<<"enter number";
    for(int i=0;i<10;i++){
        cin>>A[i];
    }                            //linear search

    cout<<"enter key";
    cin>>key;
    for(int i=0;i<10;i++){
        if(key==A[i]){
            cout<<"key found at"<<i;
        }
    }
    cout<<"not found";*/

//Nested Loop//
/*int n;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>=n-1)
               cout<<"* ";
            
            else
               cout<<" ";
            
        }
        cout<<endl;
    }*/

//2D array//
/*int A[2][3]={3,3,3,3,3,3};
int B[2][3]={1,1,1,1,1,1};
int C[2][3];

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}*/

//Average of elements//
/*int n;
float num[100],sum=0.0, average;
cout<<"enter the number of element";
cin>>n;

for(int i=0;i<n;++i){
    cout<<i+1<<"enter number";
    cin>>num[i];
    sum+=num[i];
}

average=sum/n;
cout<<"average is"<<average;
return 0;*/


//mul of 2 matrix//
int a[10][10],b[10][10],mult[10][10],r1,r2,c1,c2;
cout<<"enter number of rows and column or first matrix";
cin>>r1>>c1;
cout<<"enter number of rows and coloums of second matrix";
cin>>r2>>c2;

if(c1!=r2){
    cout<<"can't multiply";
    return 0;
}
cout<<endl<<"enter element of first matrix"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cout<<"enter element a"<<i+1<<j+1<<" : ";
    }
}


}
    
    
