class Solution
{
public:
    void helper(vector<int> &temp, vector<vector<int>> &ans, int k, int n, int ind, int sum)
    {
        if (sum == n && k == 0)
        {
            ans.push_back(temp);
            return;
        }
        if (sum > n)
            return;
        for (int i = ind; i <= 9; i++)
        {
            if (i > n)
            {
                break;
            }
            temp.push_back(i);
            helper(temp, ans, k - 1, n, i + 1, sum + i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> temp;
        vector<vector<int>> ans;
        helper(temp, ans, k, n, 1, 0);
        return ans;
    }
};