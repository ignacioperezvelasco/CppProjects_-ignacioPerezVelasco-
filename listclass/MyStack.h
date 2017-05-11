#pragma once
class MyStack
{
	
public:
	struct node
	{
		int info;
		node* next;
	};
	//atributos:
	node* s;

	MyStack(MyStack &a);
	MyStack(int numelementostack, int elemento);
	// prototipos
	void pop();			// elimina
	void push(int a);	// a�ade
	int top();			//devuelve num elementos
	int size();			//devuelve tama�o
	bool isempty();		//true==vacia

	MyStack();
	~MyStack();
};

