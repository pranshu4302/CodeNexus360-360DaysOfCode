public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	   for(int i=0;i<n;i++){
            int reverse=0,last,ele;
            ele=a[i];
            while(ele>0){
                last=ele%10;
                reverse=reverse*10+last;
                ele=ele/10;
            }
            if(reverse!=a[i])
                return 0;
        }
        return 1;
        
        
    }
};
