#include<stdio.h>
int main()
{
	int temp,n,couple,men[1002],women[1002],hotness=0,i=0,j=0;
	scanf("%d\n",&n);
	while(n-- != 0) {
	scanf("%d\n",&couple);
	j = couple;
	while(j--!=0){
	
	scanf("%d\n",&men[i]);
	i++;
	}
	for(i=0;i<couple;i++) {
	for(j=0;j<i;j++){
		if(men[i] > men[j]){
			temp=men[i];	
			men[i]=men[j];
		men[j]=temp;
	}
	}
	}

	j = couple;
	i=0;
	while(j--!=0){
	scanf("%d\n",&women[i]);
	i++;
	}
	for(i=0;i<couple;i++) {
	for(j=0;j<i;j++){
		if(women[i] > women[j]){
			temp=women[i];	
			women[i]=women[j];
			women[j]=temp;
	}
	}
	}
	for(i=0;i<couple;i++) 
	hotness += (men[i]*women[i]);
	printf("%d\n",hotness);
	hotness=0;
	i=0;
	}
}
