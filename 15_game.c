#include<stdio.h>

void main()
{
	int i,j,n=4,a[10][10],x,y,t=1,aux,undo[10][10];

	printf("\nenter the matrix to be solved, empty space note with 0 :\n");
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);





	printf("\nentered matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}

	printf("\033[1;31m");
    while(t!=7)
    {
	printf("\nselect line and the column of the number you want to move ex.(a,b) :");
	scanf("%d,%d",&x,&y);
	printf("Selected number is: %d\n",a[x-1][y-1]);

	printf("\nSelect the action:");
	printf("\n1 - undo");
	printf("\n2 - move upwards");
	printf("\n3 - move downwards");
	printf("\n4 - move to right");
	printf("\n5 - move to left\n");
    scanf("%d",&t);

    if(t!=1)
    {
        for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			undo[i][j]=a[i][j];
    }

    if(t==1)
    {
        for (i=0;i<n;i++)
            for (j=0;j<n;j++)
                a[i][j]=undo[i][j];
        printf("Curent matrix:\n");
        for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
    }

    if(t==2)
    {
       aux=a[x-1][y-1];
       a[x-1][y-1] = a[x-2][y-1];
       a[x-2][y-1] = aux;

       printf("New Matrix is:\n");
       for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
    }

    if(t==3)
    {
       aux=a[x-1][y-1];
       a[x-1][y-1] = a[x][y-1];
       a[x][y-1] = aux;

       printf("New Matrix is:\n");
       for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
    }

    if(t==4)
    {
       aux=a[x-1][y-1];
       a[x-1][y-1] = a[x-1][y];
       a[x-1][y] = aux;

       printf("New Matrix is:\n");
       for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
    }

    if(t==5)
    {
       aux=a[x-1][y-1];
       a[x-1][y-1] = a[x-1][y-2];
       a[x-1][y-2] = aux;

       printf("New Matrix is:\n");
       for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
    }



    printf("\n6 - continue the game\n");
    printf("7 - exit game\n");
    scanf("%d",&t);


    }
}

