#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void printResult() {
    string thegrade ;
    srand(time(0));
    int x = rand()%9;
    if(x==0) thegrade = "A" ;
    if(x==1) thegrade = "B+" ;
    if(x==2) thegrade = "B" ;
    if(x==3) thegrade = "C+" ;
    if(x==4) thegrade = "C" ;
    if(x==5) thegrade = "D+" ;
    if(x==6) thegrade = "D" ;
    if(x==7) thegrade = "F" ;
    if(x==8) thegrade = "W" ;
cout << "You will get " << thegrade <<" in this 261102." <<  endl ;

}

int main(){

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    int grade = rand() % 9 ;
    
printResult();

return 0;
 
}