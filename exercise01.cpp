#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << setw(5) << "No" << setprecision(2);
 cout << setw(15) << "Name" << setprecision(2);
 cout << setw(15) << "Marks" << setprecision(2); 
 cout << endl;
 
 for (int r = 0; r < 5; r++) {
   cout<<setw(5)<<setprecision(2);
     cout <<  r+1 ;
        cout<<setw(15)<<setprecision(2);
          cout<<  names[r];
          cout<<setw(15)<<setiosflags(ios::fixed)<<setprecision(2);
          cout << marks[r] << endl;
 }
}