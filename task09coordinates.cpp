#include<iostream>
using namespace std;
string checkpointposition(int h, int x, int y);
main(){
    int h;
    cout<<"Enter height: ";
    cin>>h;
    int x;
    cout<<"Enter x coordinate: ";
    cin>>x;
    int y;
    cout<<"Enter y coordinate: ";
    cin>>y;
    checkpointposition(h, x, y);
}
string checkpointposition(int h, int x, int y){
 if(x>6 && y>8){
    cout<<"Outside";
 } 
 if(x>=2 && x<4 && y<8){
    cout<<"Inside";
 }  
 if(x<=6 && y<=2){
    cout<<"Inside";

 }
 if(x==6 && y==2){
    cout<<"Border";
 }
 if(x==2 && y==2){
    cout<<"Border";
}
if (x>=2 && x<4 && y<=8){
    cout<<"Inside";
}
}