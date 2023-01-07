#include<iostream>
using namespace std;
main(){
       int hoursNeeded, days, workers, work, workDoneByWorkers, totalHours, time;
       cout<<"Enter hours needed in the range of (0..200000):";
       cin>>hoursNeeded;
       cout<<"Enter days in the range of (0..20000):";
       cin>>days;
       cout<<"Enter number of workers in the range of (0..200):";
       cin>>workers;
       totalHours = (10 * workers * days);
       workDoneByWorkers =   totalHours * 0.1;
       totalHours = totalHours - workDoneByWorkers ;
       workDoneByWorkers = totalHours - hoursNeeded;
   
       if(hoursNeeded >= workDoneByWorkers){
        time = hoursNeeded - totalHours;
         cout<<"Yes!" <<time <<"hours left." <<endl;
       }
       if(hoursNeeded < workDoneByWorkers){
        time =  totalHours - hoursNeeded  ;
        cout<<"Not enough time!" <<time <<"hours needed." <<endl;
       }
}