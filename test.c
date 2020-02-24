#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void * a, const void * b) 
{ 
    return ( *(int*)b - *(int*)a ); 
}
int main()
{	int T,n,i,j,j1,l,ij,c1,c2,co,m,k,sum=0;
    char x;
    int A[4][4]={0};
        m=0;co=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%s %d",&x,&j);
            A[x-65][j/3-1]++;
        }
        for(i=0;i<4;i++){
        	for(j=0;j<4;j++)
        	    printf("%d ",A[i][j]);
			printf("\n");
		}
        for(i=0,j1=100;i<4;i++,j1-=25){
            l=0;
            for(j=0;j<4;j++){
                for(ij=0;ij<4;ij++){
                    if(l<A[j][ij]){
                       l=A[j][ij];
                       c1=j,c2=ij;
                    }
                }
            }
            if(l>0){
                m=m+l*j1;
                co++;
                A[c1][0]=0;
				A[c1][1]=0;
				A[c1][2]=0;
				A[c1][3]=0;
				A[0][c2]=0;
				A[1][c2]=0;
				A[2][c2]=0;
				A[3][c2]=0;
            }
            else{			
               break;
        	}
        }
        printf("\n");
        for(i=0;i<4;i++){
        	for(j=0;j<4;j++)
        	    printf("%d ",A[i][j]);
			printf("\n");
		}
		m=m-(4-co)*100;
		printf("%d %d",m,co);
    return 0;
}


