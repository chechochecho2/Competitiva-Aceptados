#include <stdio.h>
#include <stdlib.h>
int main(){
	int p,n,s,i,c;
	scanf("%d",&p);
	c=p;
	char V[99];
	while(p>0){
		scanf("%d",&n);
		scanf("%s",V);
		s=0;
		for(i=0;i<n;i++){
			if(V[i]=='.'){
				s++;
				i+=2;
			}
		}
		printf("Case %d: %d\n",(c-p)+1,s);
		p--;
	}
	return 0;
}