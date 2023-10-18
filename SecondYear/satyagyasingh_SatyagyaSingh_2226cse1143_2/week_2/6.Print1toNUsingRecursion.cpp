int print(int a,vector<int>&ans,int x){
    if(a==x){
        ans.push_back(x);
        return x;
    }
    ans.push_back(a);
    return print(a+1,ans,x);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    print(1,ans,x);
    return ans;
}