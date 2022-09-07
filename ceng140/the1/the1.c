#include <stdio.h>
int wall[100000];
int wallLength;

void waller(int wall[100000], int width, int height, int position)
{
  int i, bound;
  if (position + width < wallLength)
    bound = position + width;
  else
    bound = wallLength;
  if (position<0)
    position = 0;
  for (i=position; i<bound; i++)
  {
    if (wall[i] < height)
      wall[i] = height;
  }
}

void printVars(int width, int height, int timeFirstAttack, int position, int speed, int attackInterval, int numOfAttacks)
{
  printf("%d %d %d %d %d %d %d", width, height, timeFirstAttack, position, speed, attackInterval, numOfAttacks);
}

void printWall(int wall[100000], int wallLength)
{
  int i;
  for (i=0; i<wallLength; i++)
    printf("%d ", wall[i]);
  printf("%d\n", wall[wallLength]);
}

int main()
{
  int i;
  int numTribes, width, height;
  int timeFirstAttack, position, speed, attackInterval, numOfAttacks;

  scanf("%d %d", &wallLength, &numTribes);
  for (i=0; i<wallLength+1; i++)
    wall[i] = 1;
  while (numTribes > 0)
  {
    scanf(" %d %d %d %d %d %d %d", &width, &height, &timeFirstAttack, &position, &speed, &attackInterval, &numOfAttacks);
    do
    {
      waller(wall, width, height, position);
      position += speed*attackInterval;
      numOfAttacks--;
    } while (numOfAttacks>0);
    numTribes--;
  }
  printWall(wall, wallLength);
  return 0;
}
