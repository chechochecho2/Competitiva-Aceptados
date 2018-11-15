#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}
int main(){
	int p,b,n,i,j,k,unicos;
	int V[1000000];
	int AUX[1000000];
	int* point;
	scanf("%d",&p);

	while(p>0){
		scanf("%d",&n);
		if(n==0){
			printf("0\n");
		}else{
			for(i=0;i<n;i++){
				scanf("%d",&V[i]);
			}
			unicos=1;
			for(i=2;i<=n;i++){
				for(j=0;j<=(n-i);j++){
					b=0;
					point=&V[j];
					memcpy(AUX,point,i*4);
					qsort(AUX,i,sizeof(int),cmpfunc);
					for(k=0;k<(i-1);k++){
						if(AUX[k]==AUX[k+1]){
							b=1;
							break;
						}
					}
					if(!b){
						unicos=i;
						break;
					}
				}
			}
			printf("%d\n",unicos);
		}
		p--;	
	}
	printf("\n");
	return 0;
}