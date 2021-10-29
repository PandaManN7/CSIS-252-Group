#include <iostream>
#include<iomanip>
#include "Functions.cpp"
using namespace std;

int main(){
    int userInput;
    double years;
    int exit;

    do{
        cout<<"input 1 if converting from human to dog years, 2 if dog to human years: \n";
        cin>> userInput;
        if(validUserInput(userInput)){
            cout<<"Input ammount of years to convert: ";
            cin>>years;
            if(userInput == 1){
                cout<< years <<" Human years is equal to "<<setprecision (2) <<fixed <<humanToDog(years)<<" Dog years \n";
            }
            else if(userInput==2){
                cout<< years <<" Dog years is equal to "<<setprecision (2) <<fixed <<dogToHuman(years)<<" Human years \n";
            }
            cout<<"If you would like to exit, enter 0. If you would like to convert again, enter any whole number: \n";
            cin>> exit;
        }
    }while(exit != 0);

    cout<<"Program Ending...";
    
    return 0;
}