# pragma once
#include <iostream>
#include <cmath>
using namespace std;

//Розробіть функтор, який обчислює відстань між двома точками у просторі. Перевантажте оператор () для цієї операції.
class Distance2Points
{
public:
    double operator() (double x1, double y1, double z1, double x2, double y2, double z2);
};


//Створіть клас, який представляє відстань у метрах. Перевантажте оператор приведення типу, щоб можна було отримати відстань у футах або сантиметрах.

class MetersToCentimeters {
private:
    double meters;
    
public:
    MetersToCentimeters(double meters):
    meters {meters}{}
    double operator() () const;
};

class MetersToFeet {
    double meters;
    
public:
    MetersToFeet (double meters):
    meters {meters}{}
    double operator() () const;
};
