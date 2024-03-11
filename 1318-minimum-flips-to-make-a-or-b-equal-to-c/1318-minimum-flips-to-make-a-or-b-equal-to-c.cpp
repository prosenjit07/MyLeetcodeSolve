class Solution {
public:
    int minFlips(int a, int b, int c) {
        int i,j;
        int ans=0;
        for(i=0;i<31;i++)
        {
                    int x,y,z;
                    if(a&(1<<i))x=1;
                    else x=0;
                    if(b&(1<<i))y=1;
                    else y=0;
                    if(c&(1<<i))z=1;
                    else z=0;
                    cout<<x<<" "<<y<<" "<<z<<endl;
                    if((x|y)!=z)
                    {
                            if(z==1)ans+=1;
                    else
                    {
                            if(x==1)ans+=1;
                            if(y==1)ans+=1;
                    }
                }
                cout<<x<<" "<<y<<" "<<z<<" "<<ans<<endl;
            }
return ans;

    }
};