#include<stdio.h>
int main(){
	int i,m,n,t,y,z;
	while(scanf("%d %d",&m,&n) !=EOF){
		while(i>=m&&i<=n){
			i=m;
			t=i%10;
			y=(i/10)%10;
			z=i/100;
	    if(i==t*t*t+y*y*y+z*z*z){
	    	printf("%d ",i);
		} 
		
		i++;
	}
		printf("no\n");	
		} 
	return 0;
} 
