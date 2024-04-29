#include "functions.hpp"

//Розробіть функтор, який обчислює відстань між двома точками у просторі. Перевантажте оператор () для цієї операції.
double Distance2Points::operator() (double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

//Створіть клас, який представляє відстань у метрах. Перевантажте оператор приведення типу, щоб можна було отримати відстань у футах або сантиметрах.

double MetersToCentimeters::operator() () const
{
    return meters * 100;
}

double MetersToFeet::operator() () const
{
    return meters * 3.28084;
}
