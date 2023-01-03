class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int n = secret.size();
        map<int, int> mp1;
        map<int, int> mp2;
        int cntA = 0, cntB = 0;
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
            {
                cntA++;
            }
            else
            {
                mp1[secret[i] - '0']++;
                mp2[guess[i] - '0']++;
            }
        }
        for (auto it : mp1)
        {
            if (mp2.find(it.first) != mp2.end())
            {
                cntB += min(mp2[it.first], it.second);
            }
        }
        return to_string(cntA) + "A" + to_string(cntB) + "B";
    }
};