int countDigits(int n){
	// Write your code here.	
	int ans=0;
	int temp=n;
	for(;temp>0;temp/=10){
		int rem=temp%10;
		if(rem==0){
			continue;
		}
		if(n%rem==0){
		ans++;
		}
	}
	return ans;
}