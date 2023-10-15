#include<iostream>
using namespace std;
int calculateVolleyballGames(string yeartype, int holiday, int
weekend);

main(){
    string yeartype;
    cout<<"Enter year type: ";
    cin>>yeartype;
    int holiday;
    cout<<"Enter number of holidays: ";
    cin>>holiday;
    int weekend;
    cout<<"Enter number of weekends: ";
    cin>>weekend;
     calculateVolleyballGames(yeartype, holiday,weekend);

}
int calculateVolleyballGames(string yeartype, int holiday, int
weekend)
{ float homevisit=weekend*2;
float volleyweekend=homevisit-weekend;
float volleyonholiday=holiday-(holiday*0.75);
if(yeartype=="leap"){
float volleyleap= volleyweekend+volleyonholiday+0.15;
cout<< volleyleap;
}
else
{float volleyleap= volleyweekend+volleyonholiday;
cout<<volleyleap;
}}