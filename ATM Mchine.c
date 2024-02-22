#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i = 0;i<t;i++){
	    int n,m;
	    scanf("%d %d",&n ,&m);
	    int arr[n];
	    for(int j = 0;j<n;j++){
	        scanf("%d",&arr[j]);
	    }
	    int ans[n];
	    int req = m;
	   for(int k = 0;k<n;k++){
	       if(req>=arr[k]){
	           req = req - arr[k];
	           ans[k]=1;
	       }
	       else{
	          ans[k]=0; 
	       }
	   }
	   for(int p = 0;p<n;p++){
	       printf("%d",ans[p]);
	   }
	   printf("\n");
	}

}