#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5};
    int siz = 5;
    for(int i = siz-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    } 

    cout << "\n===========\n";

   int num[] = {1,2,3,4,5};
    int numsize = size(num);
   
    for(int i = 0; i < numsize; i++)
    {
      cout << num[i] << "\n";
    }
    
    return 0;
}
