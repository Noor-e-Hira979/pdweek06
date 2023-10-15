TASK01
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


TASK#02
#include<iostream>
using namespace std;

float calculateAverage (float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main(){
    string name;
    cout<<"Enter student name: ";
    cin>> name;
float marksEnglish;
cout<<"Enter marks for English: ";
cin>>marksEnglish;
float marksMaths;
cout<<"Enter marks for Maths: ";
cin>>marksMaths;
float marksChemistry;
cout<<"Enter marks for Chemistry: ";
cin>>marksChemistry;
float marksSocialScience;
cout<<"Enter marks for Social Science: ";
cin>>marksSocialScience;
float marksBiology;
cout<<"Enter marks for Biology: ";
cin>>marksBiology;
cout<<"Student Name: "<<name <<endl;
float result;
result=calculateAverage (marksEnglish,marksMaths, 
marksChemistry, marksSocialScience,marksBiology);

cout<<"Percentage: "<<result <<"%" <<endl;
float average;
string grade;
grade= calculateGrade(average);
cout<<"Grade: "<<grade;

}
float calculateAverage (float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology){
float add = marksEnglish+ marksMaths + marksChemistry+ marksSocialScience+ marksBiology;
float calculate= add/500;
float result= calculate*100;
return result;
}
string calculateGrade(float average)
{float result;
string grade;


  if (result >= '90' && result<='100')
{grade="A+";
return grade;
}

 if (result>='80' && result < '90')
{grade="A";
return grade;
}

 if (result>='70' && result<'80')
{grade="B+";
return grade;
}

 if (result>='60' && result<'70')
{grade="B";
return grade;
}

 if (result>='50' && result<'60')
{grade="C";
return grade;
}

if (result>='40' && result<'50')
{grade="D";
return grade;
}}

TASK#03


#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int day;
    cout << "Enter the day of birth: ";
    cin >> day;
    string month;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    string answer;
    answer = findZodiacSign(day, month);
    cout << "Zodiac Sign: " << answer;
}
string findZodiacSign(int day, string month)
{
    string answer;
    if (month=="March" && day>= 21 || month=="April" && day<= 19)
    {
        answer="Aries";
    }
    if (month=="April" && day>= 20 || month=="May" && day<= 20)
    {
        answer="Taurus";
    }
    if (month=="May" && day>= 21 || month=="June" && day<= 20)
    {
        answer="Gemini";
    }
    if (month=="June" && day>= 21 || month=="July" && day<= 22)
    {
        answer="Cancer";
    }
    if (month=="July" && day>= 23 || month=="August" && day<= 22)
    {
        answer="Leo";
    }
    if (month=="August" && day>= 23 || month=="September" && day<= 22)
    {
        answer="Virgo";
    }
    if (month=="September" && day>= 23 || month=="October" && day<= 22)
    {
        answer="Libra";
    }
    if (month=="October" && day>= 23 || month=="November" && day<= 21)
    {
        answer="Scorpio";
    }
    if (month=="November" && day>= 22 || month=="December" && day<= 21)
    {
        answer="Sagittarius";
    }
    if ((month=="December" && day>= 22) || (month=="January" && day<= 19))
    {
        answer="Capricorn";
    }
    if ((month=="January" && day>= 20) || (month=="February" && day<= 18))
    {
        answer="Aquarius";
    }
    if ((month=="February" && day>= 19) || (month== "March" && day<= 20))
    {
        answer="Pisces";
    }
    return answer;
}
TASK#04

#include <iostream>
using namespace std;
float balancecalculate(float minutes, char servicecode, char timecall);
main()
{
    char servicecode, timecall;
    cout << "Enter the service code(R/r for regular, P/p for premium): ";
    cin >> servicecode;

    if (servicecode == 'p' || servicecode == 'P')
    {
        cout << "Enter time of tha call (D/d for day, N/n for night): ";
        cin >> timecall;
    }
    float minutes;
    cout << "Enter the number of minutes used: ";
    cin >> minutes;
    if (servicecode == 'P' || servicecode == 'p')
    {
        cout << "Service Type: Premium" << endl;
    }
    else if (servicecode == 'R' || servicecode == 'r')
    {
        cout << "Service Type: Regular" << endl;
    }
    cout << "Total Minutes Used: " << minutes << " minutes" << endl;
    float amount;
    amount = balancecalculate(minutes, servicecode, timecall);
    cout << "Amount Due: $" << amount;
}
float balancecalculate(float minutes, char servicecode, char timecall)
{
    float amount = 0.0;
    if ((servicecode == 'P' || servicecode == 'p') && (timecall == 'D' || timecall == 'd') && minutes > 75)
    {
        float calculate1 = minutes - 75;
        amount = 25.00 + calculate1 * 0.10;
    }
    if ((servicecode == 'P' || servicecode == 'p') && (timecall == 'D' || timecall == 'd') && minutes <= 75)
    {

        amount = 25.00;
    }
    if ((servicecode == 'P' || servicecode == 'p') && (timecall == 'N' || timecall == 'n') && minutes > 100)
    {
        float calculate1 = minutes - 100;
        amount = 25.00 + calculate1 * 0.05;
    }
    if ((servicecode == 'P' || servicecode == 'p') && (timecall == 'N' || timecall == 'n') && minutes <= 100)
    {

        amount = 25.00;
    }

    if ((servicecode == 'R' || servicecode == 'r') && minutes > 50)
    {
        float calculate1 = minutes - 50;
        amount = (10.00) + (calculate1 * 0.20);
    }

    if ((servicecode == 'R' || servicecode == 'r') && minutes <= 50)
    {

        amount = 10.00;
    }
    return amount;
}

TASK#05

#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string day, double
quantity);
main(){
    string fruit;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    string day;
    cout<<"Enter the day of week (e.g.,Monday, Sunday): ";
    cin>>day;
    double quantity;
    cout<<"Enter the quantity: ";
    cin>>quantity;
   float price= calculateFruitPrice(fruit,day,quantity);
    cout<<price;

}
float calculateFruitPrice(string fruit, string day, double
quantity)
{
    if(fruit=="banana" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*2.50;
return price; }

    if(fruit=="apple" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*1.20;
return price;}

if(fruit=="orange" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*0.85;
return price;}

if(fruit=="grapefruit" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*1.45;
return price;}

if(fruit=="kiwi" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*2.70;
return price;}

if(fruit=="pineapple" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*5.50;
return price;}

if(fruit=="grapes" && (day=="Monday" || day=="Tuesday"|| day=="Wednesday"|| day=="Thursday"|| day=="Friday")){
float price=quantity*3.85;
return price;}

if(fruit=="banana" && (day=="Saturday" || day=="Sunday")){
float price=quantity*2.70;
return price;}

if(fruit=="apple" && (day=="Saturday" || day=="Sunday")){
float price=quantity*1.25;
return price;}

if(fruit=="orange" && (day=="Saturday" || day=="Sunday")){
float price=quantity*0.90;
return price;}

if(fruit=="grapefruit" && (day=="Saturday" || day=="Sunday")){
float price=quantity*1.60;
return price;}

if(fruit=="kiwi" && (day=="Saturday" || day=="Sunday")){
float price=quantity*3.00;
return price;}

if(fruit=="pineapple" && (day=="Saturday" || day=="Sunday")){
float price=quantity*5.60;
return price;}

if(fruit=="grapes" && (day=="Saturday" || day=="Sunday")){
float price=quantity*4.20;
return price;}



}


TASK#06

#include<iostream>
using namespace std;

string calculateHotelPrices(string month, int numberofstays);
main(){
    string month;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    int numberofstays;
    cout<<"Enter the number of stays: ";
    cin>>numberofstays;
calculateHotelPrices( month, numberofstays);
}

string calculateHotelPrices(string month, int numberofstays)
{
    if((month=="May" || month=="October") && numberofstays<=7)
    {float apartment=65*numberofstays;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=50*numberofstays;
    cout<<"Studio: "<<studio<<"$";
    }

if((month=="May" || month=="October") && (numberofstays>7 && numberofstays<14))
    {float apartment=65*numberofstays;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=50*numberofstays*0.05;
    cout<<"Studio: "<<studio<<"$";
    }
    if((month=="May" || month=="October") && numberofstays>14 )
    {float apartment=65*numberofstays*0.1;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=50*numberofstays*0.3;
    cout<<"Studio: "<<studio<<"$";
    }
    if((month=="June" || month=="September") && numberofstays>14)
    {float apartment=68.70*numberofstays*0.1;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=75.20*numberofstays*0.2;
    cout<<"Studio: "<<studio<<"$";
    }
    if((month=="June" || month=="September") && numberofstays<=14)
    {float apartment=68.70*numberofstays;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=75.20*numberofstays;
    cout<<"Studio: "<<studio<<"$";

    }
    if((month=="July" || month=="August") && numberofstays<=7)
    {float apartment=77*numberofstays;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=76*numberofstays;
    cout<<"Studio: "<<studio <<"$";
    }

if((month=="July" || month=="August") && numberofstays>14)
    {float apartment=77*numberofstays*0.1;
    cout<<"Apartment: "<<apartment<<"$";
    float studio=76*numberofstays;
    cout<<"Studio: "<<studio <<"$";
    }
}


TASK#07

#include<iostream>
using namespace std;
string checkStudentStatus(int examhour, int examminute, int
studenthour, int studentminute);
main(){
    int examhour;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examhour;
    int examminute;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examminute;
    int studenthour;
    cout<<"Enter Student hour of arrival: ";
    cin>>studenthour;
    int studentminute;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentminute;
     int hourdiff=studenthour-examhour;
   int minutediff=studentminute-examminute;
    checkStudentStatus(examhour, examminute,
studenthour, studentminute);
}
string checkStudentStatus(int examhour, int examminute, int
studenthour, int studentminute)
{ int convertexam=(examhour* 60)+(examminute);
int convertstudent=(studenthour*60)+(studentminute);
   int timediff=convertexam-convertstudent;
   
if(timediff==0 ){
cout<<"On time";
}
if(convertexam>convertstudent ){
cout<<"Early"<<endl;
cout<<timediff/60<<" : "<<timediff%60 << " hours before the start";
}
if(convertexam<convertstudent ){
cout<<"Late" <<endl;
cout<<timediff/60<<" : "<<timediff%60 << " hours after the start";
}
}


TASK#08

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

TASK#09

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