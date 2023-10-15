#include<iostream>
using namespace std;

string decideActivity(string temperature,string humidity);
string activity;
main(){
    string temperature;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    string humidity;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    string activty;
    activity=decideActivity(temperature,humidity);
    cout<<"Recommended activity: "<<activity;

}
string decideActivity(string temperature,string humidity){
    string activity;
if(temperature=="warm"&& humidity=="dry")
{activity= "Play tennis" ;
return activity;}
if(temperature=="warm"&& humidity=="humid")
{activity= "Swim" ;
return activity;}
if(temperature=="cold"&& humidity=="dry")
{activity= "Play basketball ";
return activity;}
if(temperature=="cold"&& humidity=="humid")
{activity= "Watch TV" ;
return activity;}
}