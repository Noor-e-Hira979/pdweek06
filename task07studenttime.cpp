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