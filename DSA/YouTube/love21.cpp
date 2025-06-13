// #include<iostream>
// using namespace std;

// int  rotate(int arr[],int m)
// {
//     int temp[m];
//     int k=2;//Rotate array from 2 index 
//     for(int i=0;i<m;i++)
//     {
//         temp[(i+k)%m]=arr[i];
//     }
//     arr=temp;
// }

// int main()
// {
//     int arr[4]={1,2,3,4};
//     cout<<"Before rotating a array:"<<endl;
//     for(int i=0;i<4;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     rotate(arr,4);
//     cout<<"After rotating a array:"<<endl;
//     for(int i=0;i<4;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0 || k % n == 0) return;
    k = k % n;

    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = nums[i];
    }

    nums = result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
