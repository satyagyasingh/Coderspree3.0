long reverseBits(long n) {
    // Write your code here.
    long rev=0;
    if(n==0){
        return 0;
    }
    for(int p=31;p>=0;p--){
        rev = rev + pow(2,p)*(n%2);
        n/=2;
    }
    return rev;
}