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












