//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
#include<stdio.h>

int main()
{
int n,k,ans=0,t;
scanf("%d",&n);
scanf("%d",&k);
for(int i=0;i<n;i++){
    scanf("%d",&t);
if(t%k==0){
    ans++;
}
}printf("%d",ans);
	return 0;
}

