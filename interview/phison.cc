/*
There is a sorted array “a” defined in below:
unsigned int a[768] = {1,1,1,…,0,0,0} and a[X] >= a[X+1]
Please write a function with minimum CPU and memory
resources to find out the X with the first 0 in this array
*/
#include <stdio.h>
#include <stdlib.h>

int FirstZero (unsigned int* a, int l, int r)
{
    int m;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (a[m] == 1) { l = m + 1; }
        else           { r = m - 1; }
    }
    return l;
}

unsigned int* GenerateA (int size, int position)
{
    unsigned int* a = (unsigned int*)calloc(size, sizeof(unsigned int));
    for (int i = 0; i != position; ++i) { a[i] = 1; }
    return a;
}

int main()
{
    unsigned int size = 11, i;
    unsigned int* a;
    for (i = 0; i != size; ++i)
    {
        a = GenerateA(size, i);
        int pos = FirstZero(a, 0, size);
        if (pos != i)
        {
            printf("correct position should be %d but not %d\n", i, pos);
            break;
        }
    }
    if (i == size) { printf("TESTED!\n"); }
    return 0;
}

/*
  Given a singly linked list,
  write a C function with minimum CPU and memory resource to
  find the largest element from the first half part of the list
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node_
{
    int key;
    struct Node_* next;
}
Node;

Node* Insert (Node* begin, int key)
{
    if (begin)
    {
        Node* prev = NULL;
        Node* node = begin;
        while (node)
        {
            prev = node;
            node = node->next;
        }
        prev->next = (Node*)calloc(1, sizeof(Node));
        prev->next->key = key;
    }
    else
    {
        begin = (Node*)calloc(1, sizeof(Node));
        begin->key = key;
    }
    return begin;
}

int FindLargestElement (Node* begin)
{
    if (begin)
    {
        int max_element = begin->key;
        Node *node_1 = begin, *node_2 = begin;
        while (node_2->next && node_2->next->next)
        {
            if (max_element < node_1->key) { max_element = node_1->key; }
            node_1 = node_1->next;
            node_2 = node_2->next->next;
        }
        return max_element;
    }
    return 0;
}

Node* CreateList (int length)
{
    Node *begin = NULL;
    while (length--) { begin = Insert(begin, 1 + (rand() % 100)); }
    return begin;
};

void DisplayList (Node* begin)
{
    while (begin)
    {
        printf("%d -> ", begin->key);
        begin = begin->next;
    }
    printf("\n");
    return;
}

int main (void)
{
    srand(time(NULL));
    int size = 10;
    for (int i = 1; i != size; ++i)
    {
        Node *begin = CreateList(i);
        DisplayList(begin);
        printf("the largest element in first half: %d\n", FindLargestElement(begin));
        free(begin);
    }
    return 0;
}

/* algorithm only */

// 1 有一個array[99], 裡面存放1~100之間的整數, 且不同 array elements 之間的數字不重複
// 1.a 如果 array 已排序, 如何找出1~100之間哪個整數不再array中?
// 1.b 如果 array 沒排序, 如何找出1~100之間哪個整數不再array中?

// 2. 將任意一維array中等於0的排到後面，不等於0的放到前面，不要求排序

// 3. 將兩個長度不相等的linked list合成排序的linked list。 例如：A：{5, 2}；B：{6,3,1,4} => C：{1,2,3,4,5,6}