#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmpfunc(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}
int main(){
	int n,i,j,b,b2;
	int W[3000];
	int M[2999];
	while(scanf("%d",&n)!=EOF){
		b=0;
		for(i=0;i<n;i++){
			scanf("%d",&W[i]);
		}
		if(n==1){
			printf("Jolly\n");
		}else{
			for(i=0;i<(n-1);i++){
				M[i]=fabs(W[i]-W[i+1]);
			}
			qsort(M,n-1,sizeof(int),cmpfunc);	
			
			for(i=0;i<(n-1);i++){
				if(M[i]!=(i+1)){
					printf("Not jolly\n");
					b=1;
					break;
				}
			}	
			if(b!=1){
				printf("Jolly\n");
			}
		}
	}
	return 0;
}