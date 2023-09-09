public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
           int ans = 0;
        map<int,int>m;
        m[arr[0]]++;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<k)
            {
                ans+=m[k-arr[i]];
                m[arr[i]]++;
            }
        }
        return ans;
    }
};
