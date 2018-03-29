class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            dic= {}
            for i, n in enumerate(nums):
                m = target - n
                if m in dic:
                    return [dic[m], i]
                else:
                    dic[n] = i