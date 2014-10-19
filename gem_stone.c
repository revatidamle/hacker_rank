#include<stdio.h>
#include<string.h>

int find(char array[], char l)
{
  //if (strlen(array)==0)
    //return 1;
  int a;
  for (a=0;a<strlen(array);a++)
    {
      if(array[a]==l)
        return 1;
    }
  return 0;
}
int main()
{
  int num;
  int gemstones = 0;
  char gemstone[100]={'\0'};
  scanf("%d",&num);
  int i=0;
  int j=0;
  int k=0;
  char comp[num][1000];
  for (i=0;i<num;i++)
    {
      scanf("%s",comp[i]);
    }

  int length[num];
  for (i=0;i<num;i++)
    {
      length[i]=strlen(comp[i]);
    //  printf("%d ",length[i]);
    }
    int smallest=length[0];
    int index=0;
  for (i =0;i<num;i++)
    {
      if (length[i]<smallest)
        {
          smallest=length[i];
          index=i;
        }
    }
  int start;
  //printf("smallest : %d index = %d \n",smallest,index);
  if (index==0)
    start=1;
  else
    start=0;
  int exists;
  for (j=0 ;j < (length[index]);j++)
  {

      char letter = comp[index][j];
      //printf("letter = %c \n",letter);
      for (i=start;i<num;i++)
        {

          if(i == index)
            {continue;}
        //  printf("current rock : %s \n",comp[i]);
          exists=find(comp[i],letter);
          if (exists==0)
            {
              //printf("breaking at letter : %c \n",letter);
              break;
            }
          if(exists==1)
            {
              continue;
            }
        }
        printf("length of string is %d : string is %s : letter is %c\n", (int)strlen(gemstone), gemstone, letter);

      if(exists==1)
        {
            if(find(gemstone,letter)==0)
              {
                printf("%c ",letter);
                gemstone[k++]=letter;
                gemstones=gemstones+1;
              }
        }
      //k++;
  }

printf("%d ",gemstones);
  return 0;
}
