#include <stdio.h>
void BFS(int vertex);
int graph[10][10],visited[10],total;
int main()
{
	int i,j;
	printf("eneter the total number of vertices:\n");
	scanf("%d",&total);
	printf("enter the adjacency matrix\n");
	for(i=0;i<total;i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	printf("\n BFS TRAVERSAL IS\n");
	BFS(0);
	return 0;
	
}
void BFS(int vertex)
{
	int j;
	printf("%d",vertex);
	visited[vertex]=1;
	for(j=0;j<total;j++)
	{
		if(!visited[j]&&graph[vertex][j]==1)
		{
			BFS(j);
		}
	}
}
