/*Given two integers num1 and num2, return the sum of the two integers.*/

class Solution
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};

class Solution
{
public:
    int XOR(int a, int b)
    {
        if (a == b)
            return 1 else 0;
    }

    bool nice_pair(int &i, int &j, vector &arr, int &l, int &h)
    {
        if (low <= XOR(arr[i], arr[j]) and high >= XOR(arr[i], arr[j]))
            return true;
        else
            false;
    }

    int countPairs(vector<int> &nums, int low, int high)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nice_pair(i, j, nums, low, high))
                {
                }
            }
        }
    }
};