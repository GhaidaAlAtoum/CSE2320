// Driver to handle operations in 2320 Lab 3, Summer 2017
#include <stdlib.h>
#include <stdio.h>
#include "RB.h"

int main()
{
int op,key,rank;

STinit();  // Initialize red-black tree
verifyRBproperties();

scanf("%d",&op);
while (op)
{
  switch (op)
  { 
    case 1:
      scanf("%d",&key);
      printf("1 %d\n",key);
      STinsert(key);
	  STprintTree();
      break;
    case 2:
     scanf("%d",&key);
      printf("2 %d\n",key);
      rank=STinvSelect(key);
      if (rank==(-1))
        printf("Key %d is not in tree\n",key);
      else
        printf("Key %d has odd rank %d\n",key,rank);
      break;
    case 3:
      scanf("%d",&rank);
      printf("3 %d\n",rank);
	  printf(" Max Rank Is %d \n",SToddRankOfMax());
      if (rank<0 || rank>SToddRankOfMax())
        printf("rank %d range error\n",rank);
      else if (rank==0 && key(STselectSmall(rank))==(-1))
        printf("rank 0 has no keys\n");
      else
        printf("rank %d has first key %d and last key %d\n",
          rank,key(STselectSmall(rank)),key(STselectLarge(rank)));
      break;
    case 4:
      printf("4\n");
      verifyRBproperties();
      break;
    default:
      printf("Bad operation %d\n",op);
  }
  scanf("%d",&op);
}
printf("0\n");
}