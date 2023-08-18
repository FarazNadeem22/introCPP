class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        idxOne, idxTwo = -1, -1
        for i in range(len(nums)):
            firstNumber = nums[i]
            for j in range(i + 1, len(nums)):  
                if firstNumber + nums[j] == target:
                    idxOne, idxTwo = i, j
                    break
            if idxOne != -1 and idxTwo != -1:
                break
        return [idxOne, idxTwo]