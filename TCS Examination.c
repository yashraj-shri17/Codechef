#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i =0;i<t;i++){
	    int arr[3];
	    int brr[3];
	    for(int i = 0;i<3;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i = 0;i<3;i++){
	        scanf("%d",&brr[i]);
	    }
	    int sum_a=0;
	    int sum_b=0;
	    for(int i = 0;i<3;i++){
	        sum_a+=arr[i];
	    }
	    for(int i = 0;i<3;i++){
	        sum_b+=brr[i];
	    }
	    if(sum_a>sum_b){
	        printf("DRAGON\n");
	    }
	    else if (sum_a<sum_b){
	        printf("SLOTH\n");
	    }
	    else{
	        if(arr[0]>brr[0]){
	          printf("DRAGON\n");  
	        }
	        else if(arr[0]<brr[0]){
	            printf("SLOTH\n");
	        }
	        else{
	          if(arr[1]>brr[1]){
	          printf("DRAGON\n");  
	        }
	        else if(arr[1]<brr[1]){
	            printf("SLOTH\n");
	        }
	        else{
	            printf("TIE\n");
	        }
	        }
	    }
	}
    return 0;
}
