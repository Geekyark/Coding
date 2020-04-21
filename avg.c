 int main()
       {
              int n=5;//No. of rows
              int i=1;
              int c1=1;
              int c2=2*n-1;

              int j=n+1;
              int b1=n;
              int b2=n;

              for(int row=1;row<=(2*n-1);row++)
              {

                      for(int col=1;col<=(2*n-1);col++)
                      {
                                 if((row==i && col >c1 && col< c2) || (row==j && col >=b1 && col<=b2))
                                                printf(" ");
                                 else
                                                printf("*");
                      }
                      if(row< n)
                      {
                           i++;
                           c1++;
                           c2--;
                      }
                      else if(row >n)
                      {
                           j++;
                           b1--;
                           b2++;
                      }
                      printf("\n");
              }
             return 0;
       }

