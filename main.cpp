#include <iostream>
using namespace std;


void time(int seconds, int hours, int mins, int secs){
cin >> seconds;
cout << "Enter number of seconds: " << endl;
hours = (seconds/3600) % 60;
mins = (seconds/60) % 60;
secs = seconds % 60;


  
  cout << hours << " hours, " << mins << " minutes, " << secs << " seconds" << endl;
}

int main() {
int seconds_in;
int h;
int m;
int s;

  
time(seconds_in, h, m, s);
}
