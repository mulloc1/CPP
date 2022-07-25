#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
  
int main()
{
	vector<int> arr;
  
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(4);
    sort(arr.begin(), arr.end(), greater<int>());
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
  
    return 0;
}
