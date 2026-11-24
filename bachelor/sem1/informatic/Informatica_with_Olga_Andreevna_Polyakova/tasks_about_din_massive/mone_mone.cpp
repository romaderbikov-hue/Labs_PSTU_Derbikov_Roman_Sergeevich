#include <iostream>
using namespace std;

struct Worker
{
    char fio[100];
    int days;
    double dayPay;
    double bonus;
};

int main()
{
    Worker w;

    cout << "Name (no spaces): ";
    cin >> w.fio;
    cout << "Days worked: ";
    cin >> w.days;
    cout << "Daily pay: ";
    cin >> w.dayPay;
    cout << "Bonus: ";
    cin >> w.bonus;

    double salary = w.days * w.dayPay + w.bonus;
    cout << "Worker: " << w.fio << ", salary: " << salary << "\n";

    return 0;
}