
#include <iostream>
using namespace std;

int main()
{
    int n;
    float capacity;

    cout << "Enter number of parcels: ";
    cin >> n;

    float weight[100], profit[100], ratio[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter weight and profit of parcel " << i + 1 << ": ";
        cin >> weight[i] >> profit[i];

        ratio[i] = profit[i] / weight[i];
    }

    cout << "Enter truck capacity: ";
    cin >> capacity;

    // Sort parcels by profit/weight ratio
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                swap(ratio[i], ratio[j]);
                swap(weight[i], weight[j]);
                swap(profit[i], profit[j]);
            }
        }
    }

    float totalProfit = 0;

    for (int i = 0; i < n; i++)
    {
        if (capacity >= weight[i])
        {
            capacity -= weight[i];
            totalProfit += profit[i];
        }
        else
        {
            totalProfit += ratio[i] * capacity;
            capacity = 0;
            break;
        }
    }

    cout << "\nMaximum Profit = " << totalProfit;

    return 0;
}
