# include <stdio.h>

int main(){
	int  *pi;
	float  *pf;
	pi = malloc(sizeof(int));
	pf = malloc(sizeof(float));
	*pi = 1024 ;
	*pf = 3.14 ;
	printf("An integer = %d , a float = %f \n",*pi , *pf );
	free(pi);
	free(pf); 	
	system("pause");
	return 0 ;
} 
