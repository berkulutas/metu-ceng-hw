#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char* Pos;

int findIndex(char c, char* cp)
{
  int index =0;
  while(*cp)
  {
    if (c == *cp) return index;
    else cp++; index++;
  }
}

char* replace(char* handle, char* var_handle, char* values, int size)
{
  char* res = malloc(sizeof(char)*(size+1));
  char* p = res;
  int i;

  for (i=0; i<size; i++)
  {
    if (islower(handle[i]))
    {
      res[i] = values[findIndex(handle[i], var_handle)];
    }
    else
    {
      res[i] = handle[i];
    }
  }
  printf("\nokke = %s\n",res);
  return res;
}

int eval()
{
  int left, right;
  char oper;
  if (*Pos == '(')
  {
    Pos++;
    left = eval();
    oper = *Pos++;
    right = eval();
    Pos++;

    switch(oper)
    {
      case '&':
      {
        return (left && right);
        break;
      }

      case '|':
      {
        return (left || right);
        break;
      }

      case '>':
      {
        if ((left == 1) && (right == 0)) return 0;
        else return 1;
        break;
      }

      case '=':
      {
        return (left == right);
        break;
      }

      case '-':
      {
        return !right;
        break;
      }
    }

  }

  else if (*Pos == '-')
  {
    oper = *Pos++;
    right = eval();
    //Pos++;
    return !right;
  }

  else
  {
    sscanf(Pos, "%d", &left);
    Pos++;
    return left;
  }
}

int eeval(char* s)
{
  Pos = s;
  return eval();
}

void swap(char* p, char* q)
{
  char temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void sortLex(char* p, int count)
{
  int i,j;
  for (i=0; i < count; i++)
  {
    for (j= i+1; j < count; j++)
    {
      if (p[i] > p[j]) swap(&p[i], &p[j]);
    }
  }
}

int arrSize(char* p )
{
  int c =0;
  while(*p)
  {
    c++;
    p++;
  }
  return c;
}

int isIn(char c, char* p)
{
  while(*p)
  {
    if (c == *p) return 1;
    p++;
  }
  return 0;
}

char* parseVariables(char* handle)
{
  char* p = handle;
  char* res = malloc(sizeof(char)*30);
  char* p_res = res;
  while (*p)
  {
    if (islower(*p) && !isIn(*p, p_res))
    {
      *res = *p;
      res++;
      p++;
    }
    p++;
  }
  sortLex(p_res, arrSize(p_res));
  return p_res;
}

char* takeInput()
{
  char* dummy = malloc(sizeof(char)*999);
  char* p_dummy = dummy;
  char w;
  int c =0;

  while ((w = getchar()) != EOF)
  {
    if (isspace(w)) continue;
    *p_dummy = w;
    p_dummy++;
    c++;
  }
  dummy = realloc(dummy, sizeof(char)*(c+1));
  return dummy;
}

int main()
{
  int i;
  char* x;
  char* handle = takeInput();
  printf("%s\n",handle);
  char* var_handle = parseVariables(handle);
  printf("%s\n", var_handle);
  char* values = malloc(sizeof(char)*arrSize(var_handle));
  for (i=0; i< arrSize(var_handle);i++)
  {
    values[i] = '1'; // burada fonksiyon nasil bir liste yaratiyor "111" sekline mi {'1','1','1'} seklinde mi fark var mi anla
  }

  for (;*var_handle;var_handle++)
  {
    printf("%c ", *var_handle);
  }
  printf("R\n");

  for (;*values;values++)
  {
    (*values == '1')? printf("T ") : printf("F ");
  }
  // x = replace(handle, var_handle, values, arrSize(handle));
  // printf("%c\n", eeval(x));
  // free(x);


}
