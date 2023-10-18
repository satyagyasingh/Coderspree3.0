bool palindrome(int n)
{
    // Write your code here
    int pal =0;
    for(int x =n ;x>0;){
        pal = pal*10 +x%10;
        x=x/10;
    }
   if(pal ==n){
       return true;
   }else{
       return false;
   }
}