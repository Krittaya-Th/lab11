#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));
    int g=rand()%9;
    string grade;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    if(g==0){
        grade = "A";
    }else if(g==1){
        grade = "B+" ;
    }else if(g==2){
        grade = "B" ;
    }else if(g==3){
        grade = "C+" ;
    }else if(g==4){
        grade = "C" ;
    }else if(g==5){
        grade = "D+" ;
    }else if(g==6){
        grade = "D" ;
    }else if(g==7){
        grade = "F" ;
    }else{
        grade = "W" ;
    }
    cout << "You will get "<<grade<<" in this 261102.";
    return 0;
}