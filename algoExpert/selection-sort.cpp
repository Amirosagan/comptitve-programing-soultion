#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(array[min], array[i]);
        }
    }
    return array;
}
