#include "MyForwardList.h"



MyForwardList::MyForwardList():

	snext{ new node{0,nullptr} },
	s{ snext }
{
}
MyForwardList::MyForwardList(int size, int numero):
	
	snext{rellenar(size,numero)},
	s{ snext }
{}
MyForwardList::node* MyForwardList::rellenar(int size, int numero) {

	MyForwardList::node* nod= new MyForwardList::node{ numero,nullptr };

	for (int i = 0; i < (size); i++) {
		nod = new MyForwardList::node{ numero, nod };
	}
	return nod;
}

MyForwardList::~MyForwardList()
{
}

MyForwardList::node* MyForwardList::begin()
{
	return snext;
}

void MyForwardList::insert_after(int punt, int a) 
{
	node* t=snext;
	for (int i = 0; i < punt; i++) 
	{
		t = t->next;
	}
	t->next->info = a;
}

MyForwardList::node* MyForwardList::before_begin()
{
	return s;

}

void MyForwardList::push_front(int info) 
{
	MyForwardList::node* a = new MyForwardList::node{ info, MyForwardList::snext };
	snext = a;

}

void MyForwardList::pop_front() 
{
	node* aux = snext->next;
	delete snext;
	snext = aux;
}

int MyForwardList::front() 
{
	return snext->info;
}