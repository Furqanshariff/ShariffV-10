#include<stdio.h>
#define Coins 4
#define MAX 2000
int coins[Coins] = { 1, 5, 10, 25};

void findMin(int change)
{
	int coinList[MAX] = { 0 };
	int i, k = 0,length=0;

	for (i = Coins - 1; i >= 0; i--) {
		while (change >= coins[i]) {
			change -= coins[i];

			coinList[k++] = coins[i];
		}
	}
	for(i=0; coinList[i]!='\0'; i++)
    {
        length++;
    }


    printf("%d\n",length);
    return;
}



int main(void)
{
    int change;
	do{
        printf("change owed: ");
        scanf("%d",&change);
    }while(change<=0);
	findMin(change);
	return 0;
}
