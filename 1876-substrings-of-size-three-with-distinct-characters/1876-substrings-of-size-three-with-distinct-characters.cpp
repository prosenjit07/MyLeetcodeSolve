class Solution {
public:
    int countGoodSubstrings(string s) {

    int x=3;// length of substring
    int n = s.size();
    int ans = 0;
    if (x > n)
    {
        return 0;
    }
    else
    {
        map<char, int> m;
        // s=xyzxyz and x=3
        for (int i = 0; i < x; i++)
        {
            m[s[i]]++;
        }
        if (m.size() == x)
        {
            ans++;
        }
        for (int i = x; i < n; i++)
        {
            m[s[i]]++;            // add the last character
            m[s[i - x]]--;        // decrease the first character count
            if (m[s[i - x]] == 0) // if the count of the first character is 0, then remove it from the map
            {
                m.erase(s[i - x]); // remove o count char so that map size isn't increase.
            }
            // if the size of the map is equal to the length of the substring,
            // then increment the answer
            if (m.size() == x)
            {
                ans++;
            }
        }
    }
    return ans;
    }
};