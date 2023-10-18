long long fact(long long x){
    if(x==1||x==0){
        return 1;
    }
    return x*(fact(x-1));
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long>ans;
    for(int i=1;fact(i)<=n;i++){
        ans.push_back(fact(i));
    }
    return ans;
}