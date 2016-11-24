#include<stdio.h>
int main (){
	int t,i;
	while(scanf("%d",&i) !=EOF){
    if(101>i&&i>0){
	t=i/10;
    switch (t){
    	case 10:
    		case 9: printf("A\n");break;
    		case 8:printf("B\n");break;
			case 7:printf("C\n");break;
			case 6:printf("D\n");break;	
			default:printf("E\n");break;
						
	}
    }
    else{
    	printf("Score is error!\n");
    }
    }
	return 0;
}
