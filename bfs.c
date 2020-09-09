#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
	for(i=0;i<=n;i++)
	{
		if(a[v][i] &&! visited[i])
		q[++n]=i;
		if(f<=n)
		{
			visited[q[f]]=1;
			bfs(q[f+1]);
		}
	}
}
void main()
{
	int v;
	printf("Enter the no.of vertices: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("Enter graph data in matrix form\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	printf("Enter the starting vertex: ");
	scanf("%d",&v);
	bfs(v);
	printf("\nThe node which are reachable are\n");
	for(i=0;i<=n;i++)
	{
		if(visited[i]!=0)
		printf("%d\t",i);
		else
		printf("\nbfs is not possible");
	}
}
