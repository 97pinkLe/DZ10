#include "Header.h"

int main()
{
    Student ivan("Ivanov", "Ivan", "Ivanovich", 18, true);
    Boss bos("Boss", "Boss", "Boss", 54, 26);
    ivan.print();
    cout << endl;
    bos.print();
}