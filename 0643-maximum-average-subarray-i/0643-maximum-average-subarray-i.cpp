class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0.0;
        double ans = 0.0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        ans=sum/k;
        int n = nums.size();
        for (int i = k; i < n; i++)
        {
            sum += nums[i];
            sum -= nums[i - k];
            double num =sum /k;
            if(ans<num) ans = num;
        }
        return ans;
    }
};