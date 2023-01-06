
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string ans;
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x =rand()%9;
    if(x==0) ans='A';
    else if(x==1) ans="B+";
    else if(x==2) ans="B";
    else if(x==3) ans="C+";
    else if(x==4) ans="C";
    else if(x==5) ans="D+";
    else if(x==6) ans="D";
    else if(x==7) ans="F";
    else if(x==8) ans="W";
    cout << "You will get "<<ans<<" in this 261102.";

}