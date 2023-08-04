#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    cout << randomNumber << endl;

    cout << "Enter your temperature in oC: ";
    double celsisusTemp = 0.0;
    cin >> celsisusTemp;

    double fahrenTemp = celsisusTemp * 1.8 + 32;
    cout << "Temperature in oF is : " << fahrenTemp;

    return 0;
}