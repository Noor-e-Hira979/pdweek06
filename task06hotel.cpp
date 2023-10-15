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





