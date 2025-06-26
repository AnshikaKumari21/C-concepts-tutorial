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
s.copy(str, 3);     //will copy the string in the array before n-1 index. and if you want print the entire string can use .length()//
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
}