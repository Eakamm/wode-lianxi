#include<stdio.h>
int main(){
	char i,z,a[3];
	int j,l;
	while(scanf("%c",&a[0]) !=EOF){
    for (l=1;l<3;l++){
    	scanf("%c",&a[l]);
	}
	
	for (l=0;l<2;l++){
		for(j=0;j<2-l;j++){
		if (a[j]>a[j+1]){
		z=a[j];
	    a[j]=a[j+1];
		a[j+1]=z; 
	}
	}
	}
	for (l=0;l<3;l++){
		if(l==2)
		printf("%c",a[l]);
		else
		printf("%c ",a[l]);
	}
	printf("\n");
	scanf("%c",&a[0]);
	}
	return 0;
}
