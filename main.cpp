#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5};
    int size = 5;
    //printing the numbers from max to min
    for(int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
