#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define m 3
#define n 9
void path(int bin[m][m],int a1,int a2);
void printsol(int sol[m][m]);
void findpath(int bin[m][m],int sol[m][m],int r,int c);
char dir[n];
int top=-1;
int a1,a2,b1,b2;
int main()
{

    char maze[m][m];
    int bin[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c",&maze[i][j]);
            if(maze[i][j]=='S')
            {
                a1=i;
                a2=j;
            }
            else if(maze[i][j]=='E')
            {
                b1=i;
                b2=j;
            }
            if(maze[i][j]!='x')
            {
                bin[i][j]=1;
            }
            else
            {
                bin[i][j]=0;
            }
        }
    }


   for(int i=0;i<m;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%c ",maze[i][j]);
       }
       printf("\n");
   }
   printf("\n");
    path(bin,a1,a2);

    return 0;
}
void printsol(int sol[m][m])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",sol[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%c",dir[i]);
    }
    exit(0);
}
void path(int bin[m][m],int a1,int a2)
{
    int sol[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            sol[i][j]=0;
        }
    }
    findpath(bin,sol,a1,a2);
}
void findpath(int bin[m][m],int sol[m][m],int r,int c)
{
    if(r==b1 && c==b2)
    {
        sol[r][c]=1;
        printsol(sol);
        return;
    }
    if(r>=3 || r<0 || c>=3 || c<0 || sol[r][c]==1 || bin[r][c]==0)
    {
        return;
    }
    else{
    sol[r][c]=1;
    top++;

    dir[top]='N';
    findpath(bin,sol,r-1,c);

    dir[top]='E';
    findpath(bin,sol,r,c+1);

    dir[top]='S';
    findpath(bin,sol,r+1,c);

    dir[top]='W';
    findpath(bin,sol,r,c-1);

    sol[r][c]=0;
    top--;

}
}
