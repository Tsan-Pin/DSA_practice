/*Example 1.1 
Selrction sort :

for(i=0;i<n;i++){	 
	Check list[i] to list[n-1] , the smallest element is list[min]
	Interchange the list[i] and list[min]
	}*/
# include <stdio.h>
# include <math.h>
# define swap(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void sort (int [],int);
int main(){
	int i ,  n, *list ;	
	printf("Enter the number of integer to generate:\n");
	scanf("%d",&n);
	list = malloc(n*sizeof(int));
	if (list==NULL){
		printf("Error in allocate memory");
		return 1 ;
	}
	
	for (i=0;i<n;i++){
		scanf("%d",&list[i]);
	}
	sort(list,n);
	printf("The sorted list is :");
	
	for (i=0;i<n;i++){
		printf("%d \t",list[i]);
	} 
	free(list);
	return 0 ;
	system("pause");
} 
void sort(int list[],int n ){
	int i , j , min , temp ; 
	for(i=0;i<n;i++){
		min = i ; 
		for(j=i+1;j<n;j++){
			if(list[j]<list[min]){
				min = j ;
			}
		}
		swap(list[i],list[min],temp);
	}
}
