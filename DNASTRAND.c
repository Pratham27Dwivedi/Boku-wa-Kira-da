#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int i,n;
	    scanf("%d",&n);
	    char s[100];
	    scanf("%s",&s);
	    for( i=0;i<n;i++){
	        
	        if(s[i]=='A')
	        s[i]='T';
	         else if(s[i]=='T')
	        s[i]='A';
	        else  if(s[i]=='G')
	        s[i]='C';
	        else if(s[i]=='C')
	        s[i]='G';
	        
	    }
	    s[i]='\0';
	    printf("%s\n",s);
	    
	    
	    
	    
	    
	}
	return 0;
}

