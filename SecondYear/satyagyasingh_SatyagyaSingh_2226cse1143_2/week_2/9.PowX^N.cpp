double res(double val,int pow){
    if(pow==0){
        return 1.0;
    }
    if(pow==1){
        return val;
    }
   
    if(pow%2!=0){
        return val*res(val,pow/2)*res(val,pow/2);
    }
    return res(val,pow/2)*res(val,pow/2);
    
}
double myPow(double x, int n) {
    // Write Your Code Here
    if(n<0){
        return (1.0/res(x,n));
    }
    return res(x,n);
}