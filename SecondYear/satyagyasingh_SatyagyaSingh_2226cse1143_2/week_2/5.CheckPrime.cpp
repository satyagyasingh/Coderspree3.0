bool isPrime(int n)
{
	// Write your code here.
	if(n==1){
		return 0;
	}
	int count=0;
	for(int i=2;i<=sqrt(n)+1;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;;
}
