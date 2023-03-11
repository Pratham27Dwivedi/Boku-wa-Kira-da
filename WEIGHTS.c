#include <stdio.h>

int main(void) {
	int i,w;
	int x,y,z;
	scanf("%d",&i);
	while(i--)
	{
	    scanf("%d %d %d %d",&w,&x,&y,&z);
	    if(w==x || w==y || w==z || w==(x+y) || w==(y+z) || w==(z+x) || w==(x+y+z))
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	    
	}
	return 0;
}

