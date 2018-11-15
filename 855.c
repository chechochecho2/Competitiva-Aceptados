#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}
int main(){
	int a,c,i,n,m,p;
	int X[50000], Y[50000];
	scanf("%d",&p);
	while(p>0){
		scanf("%d %d %d",&n,&m,&a);
		for(i=0;i<a;i++){
			scanf("%d %d",&X[i],&Y[i]);
		}
		qsort(X,a,sizeof(int),cmpfunc);
		qsort(Y,a,sizeof(int),cmpfunc);

		printf("(Street: %d, Avenue: %d)\n", X[(a-1)/2],Y[(a-1)/2]);	
		p--;
	}
	return 0;
}