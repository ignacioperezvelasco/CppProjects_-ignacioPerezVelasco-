#pragma once
class MyList
{
public:
	struct node
	{
		int info;
		node* next;
		node* previous;
	};
	//atributos:
	node* last;
	node* snext;
	//
	node* begin(); 
	

	void insert_before(int puntero, int a);
	node* before_begin();
	void push_front(int info);
	void push_back(int infor);
	void pop_front();
	void pop_back();

	int front();
	int last();
	int size();

	MyList();
	MyList(int size, int numero);
	~MyList();
private:
	node* rellenar(int size, int numero);
	
};

