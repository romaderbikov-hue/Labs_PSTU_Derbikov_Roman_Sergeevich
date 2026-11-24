#include <iostream>
using namespace std;

struct Advertising
{
    int shows;
    double clickPercent;
    double avgPerClick;
};

int main()
{
    Advertising ad;

    cout << "Ads shown: ";
    cin >> ad.shows;
    cout << "Click percent: ";
    cin >> ad.clickPercent;
    cout << "Avg income per click: ";
    cin >> ad.avgPerClick;

    double income = ad.shows * ad.clickPercent * ad.avgPerClick;
    cout << "Income: " << income << "\n";

    return 0;
}