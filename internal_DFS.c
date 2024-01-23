#include<stdio.h>
#include<stdlib.h>

int n;

void DFS(int i,int a[n][n],int visited[n])
{
int j;
visited[i]=1;

printf("%3d",i);

for(j=0;j<n;j++){
  if( visited[j]!=1 && a[i][j] == 1)
  {
    DFS(j,a,visited);
    }
}
}

int main(){

printf("enter array size:");
scanf("%d",&n);
int a[n][n];
int visited[n];
printf("enter array elements:\n");
for(int i = 0; i<n ; i++){
  for(int j = 0; j<n;j++){
  scanf("%d",&a[i][j]);
  }
  printf("row:%d\n",i);
 }
 
for(int i = 0; i< n; i++){
 visited[i]=0;
 }
 
 printf("\nDFS Traversal:\n");
 DFS(0,a,visited);
return 0;

}
