#include<stdio.h>
int main(){
	double a[100];
	int i,t,j,k,x,l;
	j=2;
	while(scanf("%d",&x) !=EOF){
		t=0;
		k=0;
		l=0;
	    for(i=0;i<x;i++){
		scanf("%lf",&a[i]);
	    if (a[i]>0)
	    l++;
	    if (a[i]==0)
	    t++;
	    if (a[i]<0)
	    k++;
	}
	if (x==0){
	}else{
		printf("%d %d %d\n",k,t,l); 
	}
	}
	return 0;
}
