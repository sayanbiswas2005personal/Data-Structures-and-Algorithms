def insertionSort(self, nums):
        n = len(nums)
        for i in range(n):
            key = nums[i]
            position = i - 1
            while position >= 0 and nums[position] > key:
                nums[position + 1] = nums[position]
                position -= 1
            nums[position + 1] = key
        return nums