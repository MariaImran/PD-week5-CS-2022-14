#include<iostream>
using namespace std;
main(){
    float priceOfVehicle,taxAmount,taxRate,finalPrice;
    char vehicleType;
    cout<<"enter price of vehicle:";
    cin>>priceOfVehicle;
    cout<<"enter vehicle type:";
    cin>>vehicleType;
    cout<<"enter tax amount:";
    cin>>taxAmount;
      if(vehicleType == 'M'){
        taxAmount = priceOfVehicle*0.06;
        finalPrice = priceOfVehicle + taxAmount;
        cout<<"final price is:" <<finalPrice;
         }
      if(vehicleType == 'E'){
        taxAmount = priceOfVehicle*0.08;
        finalPrice = priceOfVehicle + taxAmount;
        cout<<"final price is:" <<finalPrice;
         }
      if(vehicleType == 'S'){
        taxAmount = priceOfVehicle*0.1;
        finalPrice = priceOfVehicle + taxAmount;
        cout<<"final price is:" <<finalPrice;
         }
      if(vehicleType == 'V'){
        taxAmount = priceOfVehicle*0.12;
        finalPrice = priceOfVehicle + taxAmount;
        cout<<"final price is:" <<finalPrice;
         }
      if(vehicleType == 'T'){
        taxAmount = priceOfVehicle*0.15;
        finalPrice = priceOfVehicle + taxAmount;
        cout<<"final price is:" <<finalPrice;
         }
}