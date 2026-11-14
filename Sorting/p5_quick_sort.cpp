#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low < high){
            int partion_ind = partition(arr,low,high);
            quickSort(arr,low,partion_ind-1);
            quickSort(arr,partion_ind+1,high);
        }
    }
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int left = low + 1;
        int right = high;
        while(true){
            while(left <= right && arr[left] < pivot) left++;
            while(right >= left && arr[right] > pivot) right--;
            if(left > right) break;
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        swap(arr[low],arr[right]);
        return right;
    }
};