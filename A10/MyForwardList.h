#pragma once
class MyForwardList
{

public:
	struct node
	{
		int info;
		node* next;
	};
	//atributos:
	node* s;
	node* snext;
	//
	node* begin();
	void insert_after(int puntero, int a);
	node* before_begin();
	void push_front(int info);
	void pop_front();
	int front();

	MyForwardList();
	MyForwardList(int size, int numero);
	~MyForwardList();
private:
	node* rellenar(int size, int numero);

};

