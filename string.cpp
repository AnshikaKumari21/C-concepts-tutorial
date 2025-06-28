#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"enter  string";
    cin>>str;   // it will only print the word before space//
    cout<<str;

   getline(cin,str);   //getline can read the words after space also//
   cout<<str;




//built in Functions of string class

string s1="hello";
cout<<s1.length()<<endl;   // returns the length of the string//

                   //length and size both are same thing//
cout<<s1.size()<<endl;  //returns the size of the string//

cout<<s1.capacity();  //gives the capacity of the string , it will not create a array exactly of this string size..it will create a bigger size array...it means how many more characters you can add//

s1.resize(50);  //can change the capacity according to you//
cout<<s1.capacity();

cout<<s1.max_size();  //will give the maximum possible size..how many characters are allowed you can know the size//


s1.clear();  //will clear the contents
cout<<s1;

cout<<s1.empty(); //will find out whether a string is empty or not//



s1.append(" world");   //add a new content to the string from the right side//
s1.insert(3,"kk");     //will insert a given string in a given index//. (starting index, "string", ending index)
s1.replace(3,5,"aa");  //will replace the string with the given string.  (starting index, ending index,"string")
s1.erase();   //same as clear function//
s1.push_back('z');    //add a single character at the end of the string//
s1.pop_back();        //will remove single character of the string from the end//

string s2="amazing";
s1.swap(s2);     //will swap the string//
cout<<s1<<endl;
cout<<s2;


string s="wellcome in C++ world";
string s1="hello";
char str[10];
//s.copy(str, 3);     //will copy the string in the array before n-1 index. and if you want print the entire string can use .length()//
str[3]='\0';       //because it will print some ramdom number after three character...here only few alphabets are copied not the null characters so thats why we have to add a null character at the end of the array
cout<<str<<endl;


cout<<s.find('o');      // to find the occurance of the string or the character inside the main string//
cout<<s.rfind('o');    // to find the occurance of the string or character inside the main string from the right side//
cout<<s.find_first_of('l');     //("string/char",starting index)....find the occurance of the string from the left hand sort of string, it will find the first occurance
cout<<s.find_last_of('l');      //("string/char",starting index)....find the occurance of the string from the right hand sort of string, it will find the last occurance
cout<<s.substr(3,7);      //(starting index, ending index)....it wil extract the srting
cout<<s.compare(s1);     //if the first string length is larger it will return +ve value and if the first string length is smaller it will return -ve value and if both the string length is equal it will return 0. (it is case sensitive also that means "H" and "h" both is diff)
cout<<s.at(4);   //it will return the letter of that index
cout<<s[4];   //.at and this...both are same.....we can modify also like {cout<<s[4]='W';}.  
s[4]='w';
cout<<s;






//QUESTIONS RELATED TO STRING//
//1. Find the length of the string
string str="WELCOME";
int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
}
cout<<"length of the string is "<< count<<endl;
return 0;

//and by using iterator or the easy way is  using .length()//
string::iterator it;
int count=0;
for(it=str.begin();it!=str.end();it++){
    count++;
}
cout<<"length of the string is "<<count<<endl;

//2. Change case from upper to lower//
for(int i=0;str[i]!='\0';i++){
    str[i]=str[i]+32;      //and to change in upper case we just have to -32
}
cout<<str;

//3. Count vowels, cononants and words
string str2="how Many wOrds";
int vowels=0,consonants=0,space=0;
for(int i=0;str2[i]!='\0';i++){
    if(str2[i]=='A' || str2[i]=='E' || str2[i]=='I' || str2[i]=='O' || str2[i]=='U' ||
         str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u')
         vowels++;
    else if(str2[i]==' ')
         space++;
    else
         consonants++;
    
}

cout<<"Vowels"<<vowels<<endl;
cout<<"consonants"<<consonants<<endl;
cout<<"words"<<space+1<<endl;


//4. Checking palindrome
string strr="MADAM";
string rev="";

for (int i = strr.length() - 1; i >= 0; i--) {
        rev += strr[i];
    }

cout<<strr<<" ";
if (strr == rev)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

//5. Find username from gmail
string email="John123@gmail.com";
int i=(int)email.find('@');
string uname=email.substr(0,i);
cout<<"Username is "<<uname<<endl;


}