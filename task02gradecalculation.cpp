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