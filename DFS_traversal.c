#include<stdio.h>
#include<stdlib.h>
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int A[7][7] = {{0, 1, 1, 0, 0, 0, 0},
		{1, 0, 0, 1, 1, 1,1},
		{1, 0, 0, 0, 0, 0, 1},
		{0, 1, 0, 0, 0, 0,0},
		{0, 1, 0, 0, 0, 0,0},
		{0, 1, 0, 0, 0, 0,0},
		{0, 1, 1, 0, 0, 0, 0}};
void DFS(int i){
	int j;
	visited[i] = 1;
	printf("%5d", i);
	for(j = 0; j < 7; j++){
		if(!visited[j] && A[i][j] == 1){
			DFS(j);}
	}
}
int main(){
	printf("DFS Traversal:");
	DFS(0);
	return 0;
}
---------------------------------------------------------
output:
DFS Traversal:    0    1    3    4    5    6    2
