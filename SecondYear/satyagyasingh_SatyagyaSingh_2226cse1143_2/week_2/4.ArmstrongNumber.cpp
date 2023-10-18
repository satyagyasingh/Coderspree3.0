bool checkArmstrong(int n){
	//Write your code here
	int sum=0;
	int count=0;
	for(int i=n;i>0;i/=10){
		count++;
	}
	for(int i=n;i>0;i/=10){
		int rem=i%10;
		sum+=pow(rem,count);
	}
	return (sum==n);
}
