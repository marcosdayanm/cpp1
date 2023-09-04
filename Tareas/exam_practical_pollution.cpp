#include <iostream>
using namespace std;

class environment{
private:
float km, people, totalcar1, totalcar2, totalcar3, totalbus;
int vehicle;

public:

void setdata(float kmout, int peopleout, int vehicleout){
    km = kmout;
    people = peopleout;
    vehicle = vehicleout;
}

void car(){
    
    if (vehicle == 1){
        totalcar1 = (km/11);
    }
    else if (vehicle == 2){
        totalcar1 = (km/18);
    }
    else if (vehicle == 3){
        totalcar1 = (km/24);
    }

    totalcar2 = (2391/people);
    totalcar3 = totalcar1 * totalcar2;
    cout<<endl<<"In your trip, the car's emisions would be: "<<totalcar3<<endl;
}

void bus(){
    totalbus = (km/1.2)*(2391/30.0);
    cout<<"In your trip, the bus's emisions would be: "<<totalbus<<endl;
}

void efficiency(){
    if (totalbus > totalcar3){
        cout<<endl<<"Use car! Is more efficient in your case";
    }
    else if (totalbus < totalcar3){
        cout<<endl<<"Use bus! Is more efficient in your case";
    }
    else{
        cout<<endl<<"Use car! In your trip bus and car have the same efficiency but car is more confortable";
    }
}

};





int main(){

float kmout, peopleout;
int vehicleout;

// distance
cout<<"Hoy many kilometers are you going to travel? ";
cin>>kmout;

// tipo de vehiculo
while (true){
cout<<"In what vehicle you are thinking to travel? \n1. SUV \n2. Sedan \n3.Hybrid \nSelect the number: ";
cin>>vehicleout;
if (vehicleout > 3 or vehicleout < 1){
    cout<<endl<<"Invalid number, you must choose between 1 and 3, try again"<<endl<<endl;
    continue;
}
break;
}

// cuanta gente
while (true){
cout<<"How many people are you going to be in total traveling? ";
cin>>peopleout;
if (peopleout > 5 or peopleout < 1){
    cout<<endl<<"Invalid number, you must choose between 1 and 5, try again"<<endl<<endl;
    continue;
}
break;
}


environment trip1;

trip1.setdata(kmout, peopleout, vehicleout);
trip1.car();
trip1.bus();
trip1.efficiency();

return 0;
}



