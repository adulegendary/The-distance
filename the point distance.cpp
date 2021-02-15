# include <iostream>
#include <cmath>
using namespace std;
double findDistance(int xOne, int xTwo, int yOne, int yTwo);
void resultOfDistance(double findDistance);// function we declare

int main() {
    int xOne, xTwo, yOne, yTwo;
    cout << "We gonna find the distance between two points " << endl;
    cout << "So put your numbers respectively " << endl;
    cout << "Put your X\n" << endl;
    cin >> xOne;
    cout << "put your X2\n" << endl;
    cin >> xTwo;

    cout << "Put your Y1\n" << endl;
    cin >> yOne;
    cout << endl;
    cout << "Put your Y2\n" << endl;
    cin >> yTwo;

    double findDistance = sqrt(pow(xOne - xTwo, 2) + pow(yOne - yTwo, 2));
    // Finally we call the function from from the function protype.
    resultOfDistance(findDistance);

    return 0;
}
void resultOfDistance(double findDistance) {

    cout << "the reesult,which the distance between two pints is " << findDistance << endl;
}
//the distance betwen two point.