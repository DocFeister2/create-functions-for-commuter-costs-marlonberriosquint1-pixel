#include <iostream>
using namespace std;

const double DOLLARS_PER_GALLON = 5.62;     // cost of gas per gallon
const double MILES_PER_COMMUTE = 30;    // miles in one round-trip commute
const double MILES_PER_GALLON = 36;       // car fuel efficiency

double toDollars(double commutes) {
    double gasMiles;
    double gasGallons;
    double totalCost;

    gasMiles = commutes * MILES_PER_COMMUTE;
    gasGallons = gasMiles / MILES_PER_GALLON;
    totalCost = gasGallons * DOLLARS_PER_GALLON;
    return totalCost;
}
double toCommutes(double dallars) {
  double costPerCommute = (MILES_PER_COMMUTE / MILES_PER_GALLON) * DOLLARS_PER_GALLON;
    return dallars / costPerCommute;
}
int main(){ 
  cout << "$20 will buy you: " << toCommutes(20) << " commutes Miles." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes Miles." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes Miles." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes Miles." << endl;

  cout << "Enter the number of commutes you'd like to do:" << endl;
  double myCommutes;
  double myCost;

  cin >> myCommutes;
  myCost = toDollars(myCommutes);

  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;
  cout << "All done!" << endl;

  return 0;
}