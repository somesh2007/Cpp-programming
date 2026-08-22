#include <iostream>
using namespace std;

int main (){
    int day;
    cout<<"enter a day number: ";
    cin>>day;
    
    switch(day){
        case 1: cout<<"Monday";
        break;
        case 2: cout<<"Tuseday";
        break;
        case 3: cout<<"wednesday";
        break;
        case 4: cout<<"Thursday";
        break;
        case 5: cout<<"Friday";
        break;
        case 6: cout<<"Saturday";
        break;
        case 7: cout<<"Sunday";
        break;
        default: cout<<"invalid day";


    }
    return 0;
}