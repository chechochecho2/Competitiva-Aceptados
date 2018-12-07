#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	// Este codigo no me lo han aceptado en UVA pero todos los inputs que he probado me han dado
	// resultados correctos y no se cual es el problema.
	int n,b,s=0,s2,c,i,j,b1=0,p;
	scanf("%d",&p);
	int L[1000000];
	while(p){
		b1=0;
		s=0;
		scanf("%d %d",&n,&b);
		if(n==0 && b!=0){
			printf("YES\n");
			p--;
			continue;
		}
		for(i=0;i<b;i++){
			scanf("%d",&L[i]);
		}
		for(i=0;i<b;i++){
			s+=pow(2,i);
		}
		for(i=1;i<=s;i++){
			s2=0;
			for(j=1,c=0;j<=s;j<<=1,c++){
				if(j&i){
					s2+=L[c];
				}
			}
			if(s2==n){
				printf("YES\n");
				b1=1;
				break;
			}
		}
		if(!b1){
			printf("NO\n");
		}
		p--;
	}	
	return 0;
}