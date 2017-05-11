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
	void push(int a);	// añade
	int top();			//devuelve num elementos
	int size();			//devuelve tamaño
	bool isempty();		//true==vacia

	MyStack();
	~MyStack();
};

