#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> arr(size);
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        int ans = 0;
        for (int j = size - 1; j > 0; j--)
        {
            priority_queue<int> maxheap(arr.begin(), arr.begin() + j);
            int maxele = maxheap.top();
            if (arr[j] < maxele)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}