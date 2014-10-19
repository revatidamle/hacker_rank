#include<stdio.h>
#include<string.h>
int main()
{
  int N,T,i,j;
  scanf("%d %d",&N,&T);
  int width[N];
  int cars[T];
  for (i=0;i<N;i++)
  {
    scanf("%d",&width[i]);
  }

  int find_least(int a,int b )
  {
    int i;
    int least=width[a];
    for(i=a;i<=b;i++)
      {
        if (least>width[i])
          least=width[i];
      }
      return least;
  }
  for (i=0;i<T;i++)     // for each test case
  {
      int a ,b;
      scanf("%d %d",&a,&b);
      cars[i]=find_least(a,b);
      //printf("\n%d\n",cars);


  }
  for(i=0;i<T;i++)
    printf("%d\n",cars[i]);
}
