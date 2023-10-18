
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans;
        ans.push_back(0);
        if(n==1) return ans;
        
        ans.push_back(1);
        if(n==2) return ans;
        
        int a=0;
        int b=1;
        int c;
        for(int i=1;i<n-1;i++){
            c=a+b;
            a=b;
            b=c;
            ans.push_back(c);
        }
        return ans;
}