class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        bool condition = false;
        int idxOne, idxTwo;
        for (int i = 0; i < nums.size(); i++)
        {
            int firstNumber = nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (firstNumber + nums[j] == target)
                {
                    idxOne = i;
                    idxTwo = j;
                    condition = true;
                    break;
                }
            }
            if (condition)
            {
                break;
            }
        }
        return {idxOne, idxTwo};
    }
};