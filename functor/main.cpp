#include "functions.hpp"


int main()
{
//Розробіть функтор, який обчислює відстань між двома точками у просторі. Перевантажте оператор () для цієї операції.
    Distance2Points data;
    double distance = data(1,2,3,4,5,6);
    cout<<distance<<endl;
    
//Створіть клас, який представляє відстань у метрах. Перевантажте оператор приведення типу, щоб можна було отримати відстань у футах або сантиметрах.
    MetersToCentimeters toCentimeters(10);
    double resultToCentimeters = toCentimeters();
    cout<< resultToCentimeters<<endl;
    
    MetersToFeet toFeet(10);
    double resultToFeet = toFeet();
    cout<<resultToFeet<<endl;
}
