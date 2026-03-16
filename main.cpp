//      **************************************************
//      Find the min, max among three values
//      Display three values in ascending order  min, other, max
//     **************************************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    // TODO: Find min, max, and med among num1, num2, num3
    min = (num1 < num2) ? num1 : num2;
    min = (min < num3) ? min : num3;
    max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;
    med = num1 + num2 + num3 - min - max;

    cout << min << " " << med << " " << max << endl;
}
