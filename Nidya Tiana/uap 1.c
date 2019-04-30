#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int arr[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<=i;j++){
	            scanf("%d",&arr[i][j]);
	            
	        }
	    }
	    
	    
	    for(int i=n-1;i>0;i--){
	        for(int j=0;j<i;j++){
	            if(arr[i][j]>arr[i][j+1])
	            arr[i-1][j]+=arr[i][j];
	            else
	            arr[i-1][j]+=arr[i][j+1];
	        }
	    }
	    printf("%d\n",arr[0][0]);
	}
	return 0;
}