def reverseArray(self, nums):
        low = 0
        high = len(nums)-1
        while low < high:
            nums[low],nums[high]=nums[high],nums[low]
            low+=1
            high-=1
        return nums