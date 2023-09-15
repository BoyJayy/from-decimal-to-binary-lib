#include <iostream>
#include "to binary.h"
#include <fstream>
using namespace std;

int to_bin()
{
    int num = 0, t = 0, d = 1;
    cout << "Enter count:" << endl;
    cout << "==> ";
    cin >> num;
    while (num)
    {
        t += (num % 2) * d;
        //cout<<t;
        num = num / 2;
        d = d * 10;
    }
    cout << t;
    //  cout<<num;
    cout << endl;
    system("pause");
    return 0;
}