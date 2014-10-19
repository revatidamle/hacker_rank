#include<stdio.h>
#include<string.h>
int palindrome(char a[])
{

   char b[1000];
   int i,j;
   strcpy(b,a);
   for (i=0,j=strlen(a)-1;i<strlen(a),j>=0;i++,j--)
     {
       b[j]=a[i];
     }

   if( strcmp(a,b) == 0 )
            return 1;
   else
        return 0;

}
int main()
{
  int T;
  scanf("%d",&T);
  char letter[T][1000];
  int i,j;
  for(i=0;i<T;i++)
  {
    scanf("%s",letter[i]);
  }
  int op[T];

  for (i=0;i<T;i++)
    {
      int ops=0;
      if(palindrome(letter[i])==1)
        ops=0;
      else
        {
          for(j=0;j<(strlen(letter[i])+1)/2;j++)
            {
              if(letter[i][j] > letter[i][strlen(letter[i])-j-1])
                {
                  ops=ops+(letter[i][j] -letter[i][strlen(letter[i])-j-1]);
                }

              else if(letter[i][j] < letter[i][strlen(letter[i])-j-1])
                {
                  ops=ops+ letter[i][strlen(letter[i])-j-1] - letter[i][j];
                }

            }

        }
        op[i]=ops;
    }

for(i=0;i<T;i++)
printf("%d\n",op[i]);



}
