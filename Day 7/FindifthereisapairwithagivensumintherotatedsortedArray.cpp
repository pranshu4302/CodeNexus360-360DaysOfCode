public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
          int i=0 , j=n-1;
        int count = 0;
        while(i<j){
            if(arr[i] + arr[j] == sum)
                {count++;
                i++;
                j--;}
            else if(arr[i]+arr[j] > sum)
                j--;
            else
                i++;
        }
        if(count != 0)
            return count;
        else
            return -1;
    
        
    }
};
