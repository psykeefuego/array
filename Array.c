#include<stdio.h>
void main()
{
  int i,j,k,m;
  int elm[3][3];
  printf("Input elements in thr matrix: \n");
    for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	     printf("\n Element [%d][%d]  ",i,j);
	      scanf("%d",&elm[i][j]);
	  }
    }
   printf("\n    The matrix is:\n\n");
    for(k=0;k<3;k++)
	{
	 for(m=0;m<3;m++)
	 {
	     printf("\t %d    ",elm[k][m]);
	  }
	  printf("\n");
    }
}
