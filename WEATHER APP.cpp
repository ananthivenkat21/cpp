/*
Project: #!!!# WEATHER APP#!!!#
Name:Ananthika V 
College:Vivekanandha College of Engineering for Women

Used Data:
1)Email
2)Location
3)Weather report timing(Today!/Tomorrow!/Yesterday!/Weekly report!)
4)Temperature and Climate

Method used:
1)Switch case
2)
*/

#include<iostream>
using namespace std;
int main()
{
    string email;
    string location;
    int choice;
    cout<<"#!!!#WEATHER APP#!!!#"<<endl;
    cout<<"Enter your email id:"<<endl;
    cin>>email;
    cout<<"Enter your current location:"<<endl;
    cin>>location;
    cout<<"1.Today\n2.Tomorrow\n3.Yesterday\n4.Entire week\n5.Rainfall in this week\n6.Heavy sun in this week"<<endl;
    cout<<"Enter the period for when want the report:"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Overcast Weather"<<endl;
            cout<<"Temperature:25 deg C"<<endl;
            cout<<"**You can chill out in outside**"<<endl;
            break;
        }
        case 2:
        {
            cout<<"Pouring Rain"<<endl;
            cout<<"Temperature:21 deg C"<<endl;
            cout<<"~~you'll wish you brought an umbrella~~"<<endl;
            break;
        }
        case 3:
        {
            cout<<"Intense Sunlight"<<endl;
            cout<<"Temperatute:30 deg C"<<endl;
            cout<<"^-^Your body and head got heated^-^"<<endl;
            break;
        }
        case 4:
        {
            cout<<"Monday--Rainfall(25 deg C)\nTuesday--Cloudy(28 deg C)\nWednesday--Sunny(30 deg C)\nThursday--Heavy sun(32 deg C)\nFriday--Windy(27 deg c)\nSaturday--Strom(24 deg C)\n Sunday--Slight Rain(26 deg C)"<<endl;
            cout<<"According to the above report ~!!~-__- Plan your schedule"<<endl;
            break;
        }
        case 5:
        {
            cout<<"*Monday* *Wednesday* *Saturday*"<<endl;
            cout<<"Be well and unharmed while traveling"<<endl;
            break;
        }
        case 6:
        {
            cout<<"^Tuesday^ ^Friday^ ^Sunday^"<<endl;
            cout<<"so dodge to go ou"<<endl;
            break;
        }
        default:
        {
            cout<<"!~~Choose some other period~~!";
            break;
        }
    }
    cout<<"\nTHANK YOU>_<!! CALL ON"<<endl;
    return 0;
}
