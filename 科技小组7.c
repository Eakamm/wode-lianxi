#include<stdio.h>
#include<math.h> 
int main(){
	long i,m,n,t;
    
	while(scanf("%ld %ld",&m,&n) !=EOF){
	
	long k=0;
	long y=0;	
	i=m;
    
	while(i>=m&&i<=n){
		t=(abs(i)+2)%2;
	if (t==0){
		k=k+i*i;	
	}else{
		y=y+i*i*i;
	}
	i++;
	}
	
	printf("%ld %ld\n",k,y);
	
	}
  return 0;
}
