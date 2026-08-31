#include <iostream>
#include<string>
using namespace std;

int main(){

    string str="how Many wOrds";
    int vowel=0;
    int spaces=0;
    int consonant=0;

    for(int i=0;str[i]!='\0';i++){

        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){

            vowel++;
        }
        else if(str[i]==' '){
            spaces++;
        }else{
            consonant++;
             
        }


    }

     cout<<"Vowel: "<<vowel<<endl;
     cout<<"Consonant: "<<consonant<<endl;
     cout<<"Words: "<<spaces+1;

     return 0;


}