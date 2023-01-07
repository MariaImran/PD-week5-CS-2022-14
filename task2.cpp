#include<iostream>
using namespace std;
main(){
      float length, height, width, volume;
      string unit;
      cout<<"Enter length:";
      cin>>length;
      cout<<"Enter width:";
      cin>>width;
      cout<<"Enter height:";
      cin>>height;
      volume = (length*height*width)/3;
      cout<<"Enter unit:";
      cin>>unit;
      if(unit == "millimeters"){
      volume = volume/100;
       cout<<"Volume in millimeters" <<volume <<endl;
      }
      if(unit == "centimeters"){
      volume = volume/10;
       cout<<"Volume in centimeters" <<volume <<endl;
      }
     if(unit == "kilometers"){
      volume = volume*1000;
       cout<<"Volume in kilometers" <<volume <<endl;
      }
}