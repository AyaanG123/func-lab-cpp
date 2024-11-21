//Ayaan Gill
//11/21/24
//function lab
#include <iostream>
#include <string>
using namespace std;

void countdown(){
    for(int i=10; i>0;i--){
        cout<<i<<endl;
    }
    cout<<"Lift Off!"<<endl;
}

void customGreet(string name, int num){
    for(int i = 0; i < num;i++){
        cout<<"Hello, "<<name<<"!"<<endl;
    }
}

int getFavoriteNumber(){
    return 7;
}

float calculateAverage(int a, int b, int c){
    return (a + b + c) / 3;
}

int main() {
int a, b, c, num;
string name;
int favNumber = getFavoriteNumber();
countdown();

cout<<"enter your name: ";
cin>>name;
cout<<"enter a number: ";
cin>>num;
customGreet(name, num);

cout<<"Your favorite number is: "<<favNumber<<endl;

cout<<"Enter 3 numbers: ";
cin>>a>>b>>c;
float avg = calculateAverage(a, b, c);
cout<<"The average is: "<<avg<<endl;

    return 0;
}
