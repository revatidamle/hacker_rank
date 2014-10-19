#include<stdio.h>
#include<string.h>
int main()
{
  int test_cases;
  scanf("%d",&test_cases);
  int i=0;
  int cycles[test_cases];


  for(i=0;i<test_cases;i++)
    {
      scanf("%d",&cycles[i]);
    }


  for(i=0;i<test_cases;i++)
    {
      int j=0;
      int height=1;
      if(cycles[i]==0)
        {
          printf("%d\n",height);
          continue;
        }
      for(j=1;j<=cycles[i];j++)
        {
          if(j%2==0)
            height=height+1;
          if(j%2!=0)
            height=2*height;
        }
      printf("%d\n",height);

    }


}
