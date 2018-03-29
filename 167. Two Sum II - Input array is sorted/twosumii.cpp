class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = (int)numbers.size()-1;
        while (numbers[left] + numbers[right] != target){
            if (numbers[left] + numbers[right] < target){
                ++left;
            }
            else{
                --right;
            }
        }
        return vector<int>({left+1,right+1});
    }
};