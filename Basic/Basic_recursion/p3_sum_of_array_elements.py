def helper(nums,ind):
    if ind < 0:
        return
    return nums[ind] + helper(nums,ind-1)
def arraySum(self, nums):
    return helper(nums,len(nums)-1)