#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	freopen("in.txt", "r", stdin);
	int n; 
	int a[3012];
	char table[3012];	
	int i;

	while( scanf("%d", &n) >= 0 )
	{
		memset(table, 0, sizeof(table));
		for( i = 0; i < n; i++ )
		{
			scanf("%d", a + i);
		}
		for( i = 1; i < n; i++ )
		{
			table[ abs(a[i] - a[i+1]) ] = 1;
		}
		for( i = 1; i < n; i++ )
		{
			if(table[i] == 0)
			{
				break;
			}
		}
		if( i == n )
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
	}
	return 0;
}