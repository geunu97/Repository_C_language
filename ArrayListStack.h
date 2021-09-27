#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrayStack {
	Data stackArr[STACK_LEN];
	int topIndex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack* pstack);  //초기화
int SIsEmpty(Stack* pstack);   //비어있는지

void Spush(Stack* pstack, Data data); //값 넣기
Data SPop(Stack* pstack);  //값 빼기
Data SPeek(Stack* pstack); //조회



#endif


