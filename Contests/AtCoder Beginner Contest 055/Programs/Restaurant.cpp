#include <iostream>

using namespace std;

int main()
{
    int no_of_meals;
    cin >> no_of_meals;

    const int COST = 800, REFUND = 200, PACKAGE = 15;

    int no_of_refunds = no_of_meals/PACKAGE;
    int total_cost = no_of_meals*COST - no_of_refunds*REFUND;
    cout << total_cost;

    return 0;
}
