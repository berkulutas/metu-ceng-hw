#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "the3.h"

#define MAX_SIZE 10

typedef
struct QueryTableElement
{
    char query[6];
    int rank; 
    QueryNode *ptr;
} QueryTableElement;

CountNode *head = NULL; /* head node for CountNodes*/
QueryTableElement* queryTable[MAX_SIZE];


CountNode *find_CountNode(int count) /* return a pointer to searched CountNode*/
{
    CountNode *result = head;

    while (result)
    {
        if (result->count == count)
           return result;
        else
            result = result->next;
    }
    return result; 
}

CountNode *make_CountNode(int count)
{
    CountNode *new = malloc(sizeof(CountNode));
    QueryNode **querylist = malloc(sizeof(QueryNode **));
    new->querylist = querylist;
    new->prev = NULL;
    new->next = NULL;
    new->count = count;

    return new;
}

void free_CountNode(CountNode *node)
{
    free(node->querylist);
    free(node);
}

void remove_CountNode(CountNode*  removed)
{
    // CountNode *removed = find_CountNode(count); /* removed node ptr replace with function argument and delete this line*/
    CountNode *nextNode, *prevNode;

    if (removed->prev == NULL) /* remove 1st */
    {
        nextNode = removed->next;
        head = nextNode;
        nextNode->prev = NULL;
    }
    else if (removed->next == NULL) /* remove last */
    {
        prevNode = removed->prev;
        prevNode->next = NULL;
    }
    else
    {
        prevNode = removed->prev;
        nextNode = removed->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    free_CountNode(removed);
}

void add_CountNode(CountNode *new)
{
    int flag = 0;
    CountNode *tmp, *tmpprev;
    if (!head) /* head == NULL */
    {
        head = new;
        return;
    }

    if (new->count < head->count) /*insert 1st position*/
    {
        head->prev = new;
        new->next = head;
        head = new;
    }

    if (new->count > head->count)
    {
        tmp = head;
        while (tmp->count < new->count)
        {
            if (tmp->next)
                tmp = tmp->next; /* if temp->next == NULL break */
            else
            {
                flag = 1; /* append to end */
                break;
            }
        }

        if (flag) /* append to end */
        {
            tmp->next = new;
            new->prev = tmp;
            flag = 0;
        }
        else /* insert between nodes */
        {
            tmpprev = tmp->prev;
            tmpprev->next = new;
            new->prev = tmpprev;
            new->next = tmp;
            tmp->prev = new;
        }
    }
}

int compare_QueryNodes(QueryNode *qnode1, QueryNode *qnode2)
{
    char *str1 = qnode1->query;
    char *str2 = qnode2->query;

    return strcmp(str1, str2);
}

void printQueryNode(CountNode *countNode) /* DONE */
{
    QueryNode *dummyquerylist = *(countNode->querylist);
    while ((dummyquerylist))
    {
        printf("%s ", (dummyquerylist)->query);
        (dummyquerylist) = (dummyquerylist)->next;
    }
}

void printCountNode()
{
    CountNode *tmp = head;
    while (tmp)
    {
        printf("%d ", tmp->count);
        printQueryNode(tmp);
        tmp = tmp->next;
        printf("\n");
    }
}

QueryNode *make_QueryNode(char *query) /* DONE */
{
    QueryNode *new = malloc(sizeof(QueryNode));
    new->prev = NULL;
    new->next = NULL;
    new->query = query;

    return new;
}

QueryNode *add_QueryNode(CountNode *countNode, QueryNode *queryNode) /* DONE */
{
    QueryNode **querylist = countNode->querylist;
    QueryNode *tmp, *tmpprev;
    int flag = 0;
    if (*querylist == NULL) /* insert first element */
    {
        *querylist = queryNode;
    }
    else if (compare_QueryNodes(queryNode, (*querylist)) < 0) /* insert 1st position */
    {
        (*querylist)->prev = queryNode;
        queryNode->next = (*querylist);
        (*querylist) = queryNode;
    }
    else if (compare_QueryNodes(queryNode, (*querylist)) > 0) /* insert between nodes */
    {
        tmp = *querylist;
        while (compare_QueryNodes(queryNode, tmp) > 0)
        {
            if (tmp->next)
            {
                tmp = tmp->next;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag) /* append to end */
        {
            tmp->next = queryNode;
            queryNode->prev = tmp;
        }
        else /* insert between nodes */
        {
            tmpprev = tmp->prev;
            tmpprev->next = queryNode;
            queryNode->prev = tmpprev;
            tmp->prev = queryNode;
            queryNode->next = tmp;
        }
    }
    return queryNode;
}

void delete_querytableElement(char* query)
{
    int i;
    for (i=0; i<MAX_SIZE; i++)
    {
        if (strcmp(query, queryTable[i]->query) == 0)
        {
            free(queryTable[i]);
            queryTable[i] = NULL;
        }
    }
}

void remove_QueryNode() /* Done changed head for empty countnode */
{
    QueryNode *removed = *(head->querylist);
    CountNode *tmp= head;
    
    if (removed->next == NULL)
    {
        remove_CountNode(tmp);
    }
    else
    {
        (removed->next)->prev = NULL;
        (*head->querylist) = removed->next;
    }

    delete_querytableElement(removed->query);
    free(removed);
    
}

void if_not_add_CountNode(int number)
{
    if (!find_CountNode(number)) /* if no countNum then add */
    {
        add_CountNode(make_CountNode(number));
    }
}

void initilazie_table()
{
    int times, number, i;
    CountNode *cnode;

    /*for (i=0; i<MAX_SIZE; i++)
    {
        queryTable[i] = malloc(sizeof(struct QueryTableElement));
    }*/

    scanf("%d", &times);
    for (i = 0; i < times; i++)
    {
        queryTable[i] = malloc(sizeof(struct QueryTableElement));
        scanf(" %s %d", &(queryTable[i]->query), &number);
        queryTable[i]->rank = number;
        /* if (!find_CountNode(number)) 
        {
            add_CountNode(make_CountNode(number));
        } */ 
        if_not_add_CountNode(number);
        cnode = find_CountNode(number);
        queryTable[i]->ptr = add_QueryNode(cnode, make_QueryNode(queryTable[i]->query));
    }
}

void print_QueryTable()
{
    int i;
    printf("**** QUERY TABLE ****\n");
    for (i=0; i<MAX_SIZE; i++)
    {
        if (queryTable[i])
        printf("%d: %s %d %p\n", i+1, queryTable[i]->query, queryTable[i]->rank, (void*)queryTable[i]->ptr);
    }
    printf("*********************\n");

}

struct QueryTableElement* inTable(char* scanned) /* linear seach in table */
{
    int i; 
    for (i=0; (i<MAX_SIZE && queryTable[i]); i++)
    {
        if (strcmp(scanned, queryTable[i]->query) == 0) return queryTable[i];       
    }
    return NULL; 
}

void change_QueryNode(QueryNode* queryNode, CountNode* countNode)
{
    QueryNode *tmpprev, *tmpnext, **queryList;
    CountNode* prevCountNode;


    if (queryNode->prev == NULL)
    {
        queryList = find_CountNode(countNode->count-1)->querylist;
        tmpnext = queryNode->next; 
        *queryList = tmpnext; 
        if (tmpnext) tmpnext->prev = NULL;
        
    }
    else if (queryNode->next == NULL)
    {
        tmpprev = queryNode->prev; 
        tmpprev->next = NULL;
    }
    else 
    {
        tmpprev = queryNode->prev;
        tmpnext = queryNode->next; 
        tmpprev->next = tmpnext; 
        tmpnext->prev = tmpprev;
    }

    queryNode->next = NULL;
    queryNode->prev = NULL;
    add_QueryNode(countNode, queryNode);
    if (countNode->prev)
    {
        prevCountNode = countNode->prev; 
        if (*(prevCountNode->querylist) == NULL ) 
        {
            remove_CountNode(prevCountNode);
        }
    }

}


int find_space_index_in_table()
{
    int i;
    for (i=0; i<MAX_SIZE; i++)
    {
        if (queryTable[i]) continue;
        else
            break; 
    }
    if (i == MAX_SIZE) return -1;
    return i; 
}

void arrange()
{
    int times;
    char scannedQuery[6];
    int i, j; 
    struct QueryTableElement* tmpElement;
    QueryNode *tmpprev, *tmpnext; 
    CountNode* cnode; 

    scanf(" %d", &times);
    for (j=0; j<times; j++)
    {
        scanf(" %s", &scannedQuery);
        if((tmpElement = inTable(scannedQuery))) /* if query exist in table */
        {
            tmpElement->rank +=1;
            
            if_not_add_CountNode(tmpElement->rank);
            change_QueryNode(tmpElement->ptr,find_CountNode(tmpElement->rank));
        }
        else if (find_space_index_in_table() == -1) /* TODO if table is full */
        {
            remove_QueryNode();
            
            i = find_space_index_in_table();
            queryTable[i] = malloc(sizeof(QueryTableElement));
            queryTable[i]->rank = 1;
            strcpy((queryTable[i])->query, scannedQuery);
            if_not_add_CountNode(1);
            cnode = find_CountNode(1);
            queryTable[i]->ptr = add_QueryNode(cnode, make_QueryNode(queryTable[i]->query));
            
        }
        else /* if there is a space in table */ 
        {
            i = find_space_index_in_table();
            queryTable[i] = malloc(sizeof(QueryTableElement));
            queryTable[i]->rank = 1;
            strcpy((queryTable[i])->query, scannedQuery);
            
            if_not_add_CountNode(1);
            cnode = find_CountNode(1);
            queryTable[i]->ptr = add_QueryNode(cnode, make_QueryNode(queryTable[i]->query)); 
        }
    }
}

int main()
{
    initilazie_table();
    arrange();
    printCountNode();
    return 0;
}
