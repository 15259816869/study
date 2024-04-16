#include<stdio.h>
int Binsearch(int v[],int len,int key){
	int low,high,mid;
	low=0,high=len-1;
	do{
		mid=(low+high)/2;
		if(key<v[mid])
			high=mid-1;
		else if(key>v[mid])
			low=mid+1;
		else 
			return mid;
	}while(low<=high);
	return -1;
} 
int main(){
	int v[]={1,2,3,4,5,6,7,8,9,10,11};   
	printf("%d \n",Binsearch(v,(sizeof(v)/sizeof(v[0])),7));
	return 0;

}
