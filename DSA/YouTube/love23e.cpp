#include<iostream>
#include<vector>
using namespace std;

bool SearchMatrix(vector<vector<int>>& matrix,int target)
{
    int row=matrix.size();
    int col=matrix[0].size();

    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int element=matrix[mid/col][mid%col];
        if(element==target)
        {
            return 1;
        }
        if(element<target)
        {
            start=mid+1;
        }
        if(element>target)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Search is  number present or not:"<<SearchMatrix(matrix,1)<<endl;
    return 0;
}