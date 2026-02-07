#include <iostream>
using namespace std;

bool isCarBackToOrigin(string s){
    int x = 0, y = 0;
    for(char move : s){
        if(move == 'r') x++;
        else if(move == 'l') x--;
        else if(move == 'u') y++;
        else if(move == 'd') y--;
    }
    return x == 0 && y == 0;
}

int main(){
    string s;
    cout<< "Enter moves :"<<endl;
    cin>>s;

    if(isCarBackToOrigin(s)) cout<< "Car is back to origin"<<endl;
    else cout<< "Car is not back to origin"<<endl;
    return 0;
}