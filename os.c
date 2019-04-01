#include<stdio.h>
int main()
{
	int s[20];
	int i,j,n,x;
	char c[2];
	printf("Enter no. of students");
	scanf("%d",&n);
        for (i = 0; i < n; ++i)
        {
		    printf("Enter the number of gifts picked by %c\n",65+i);
	        scanf("%d", &s[i]);
        }
    for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (s[i] < s[j]) 
                {
                    x = s[i];
                    s[i] = s[j];
                    s[j] = x;
                }
            }
        }
 
        printf("The order of billed students is\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n",s[i]);
        }

    
	
}
