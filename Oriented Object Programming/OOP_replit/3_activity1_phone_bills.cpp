#include <iostream>
using namespace std;

int main(){
int min;

cout<<"Enter the minutes you used the telephone the last month to calculate the bill: ";
cin>>min;
if(min<=200){
  cout<<"For "<<min<<" minutes, the bill is $300";
}
else if(min<=250){
  float extra;
  float finalprice;
  extra = (min - 200)*1.2;
  finalprice = extra + 300;
  cout<<"For "<<min<<" minutes, the bill is $"<<finalprice;
}
  
else if(min<=300){
  float extra;
  float finalprice;
  extra = (50*1.2)+((min-250)*1.1);
  finalprice = extra + 300;
  cout<<"For "<<min<<" minutes, the bill is $"<<finalprice;
}
  
else if(min>300){
  float extra;
  float finalprice;
  extra = (50*1.2)+(50*1.1)+(min-300);
  finalprice = extra + 300;
  cout<<"For "<<min<<" minutes, the bill is $"<<finalprice;
}


return 0;
}
