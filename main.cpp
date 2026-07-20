#include <iostream>
#include <vector>
#include "Highlander.h"
#include "SuperIntArray.h"

using namespace std;

int main()
{
    cout << "= Highlander =" << endl;

    Highlander h1("Connor");

    cout << Highlander::speak() << endl;
    cout << h1.status() << endl;

    {
        Highlander h2("Duncan");

        cout << Highlander::speak() << endl;
        cout << h2.status() << endl;
    }

    cout << Highlander::speak() << endl;
    cout << h1.status() << endl;

    cout << endl;
    cout << "= SuperIntArray =" << endl;

    int values[] = {5, 10, 15, 20};

    SuperIntArray a(values, 4);

    a.add(25);

    cout << "Array: ";

    for (int i = 0; i < a.getSize(); i++)
        cout << a.get(i) << " ";

    cout << endl;

    a.change(2, 100);

    cout << "After change: ";

    for (int i = 0; i < a.getSize(); i++)
        cout << a.get(i) << " ";

    cout << endl;

    cout << "Max: " << SuperIntArray::getMax(a.getNums(), a.getSize()) << endl;
    cout << "Min: " << SuperIntArray::getMin(a.getNums(), a.getSize()) << endl;
    cout << "Mean: " << SuperIntArray::getMean(a.getNums(), a.getSize()) << endl;

    cout << endl;
    cout << "= Copy Constructor =" << endl;

    SuperIntArray copy(a);

    copy.change(0, 999);

    cout << "Original: ";

    for (int i = 0; i < a.getSize(); i++)
        cout << a.get(i) << " ";

    cout << endl;

    cout << "Copy: ";

    for (int i = 0; i < copy.getSize(); i++)
        cout << copy.get(i) << " ";

    cout << endl;
}
