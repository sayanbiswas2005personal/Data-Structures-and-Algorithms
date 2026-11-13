#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    void merge(vector<int>& arr,int low,int mid,int high){
        vector<int> ans;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                ans.push_back(arr[left]);
                left++;
            }else{
                ans.push_back(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            ans.push_back(arr[left]);
            left++;
        }
        while(right <= high){
            ans.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<=high; i++){
            arr[i] = ans[i - low];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l >= r) return;
        int mid = l + (r - l) / 2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};