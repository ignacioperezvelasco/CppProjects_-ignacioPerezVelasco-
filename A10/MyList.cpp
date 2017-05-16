#include "MyList.h"



MyList::MyList():
	snext{ new node{ 0,nullptr } },
	s{ snext }
{
}

MyList::~MyList()
{
}

MyList::MyList(int size, int numero) :

	snext{ rellenar(size,numero) },
	s{ snext }
{}

MyList::node* MyList::rellenar(int size, int numero) {

	MyList::node* nod = new MyList::node{ numero,nullptr };

	for (int i = 0; i < (size); i++) {
		nod = new MyList::node{ numero, nod };
	}
	return nod;
}

MyList::node* MyList::begin()
{
	return snext;
}

void MyList::insert_before(int punt, int a)
{
	node* t = snext;
	for (int i = 0; i < punt-1; i++)
	{
		t = t->next;
	}
	t->next = new MyList::node{ a,t->next };
}

MyList::node* MyList::before_begin()
{
	return s;

}

void MyList::push_front(int info)
{
	MyList::node* a = new MyList::node{ info, MyList::snext };
	snext = a;

}
void MyList::push_back(int infor) 
{
	MyList::node* a = snext;
	do
	{
		a = a->next;
	} while (!(a->next == nullptr));
	a->next = new node{ infor, nullptr };
}

void MyList::pop_front()
{
	node* aux = snext->next;
	delete snext;
	snext = aux;
}
void MyList::pop_back() 
{
	MyList::node* a = snext;
	MyList::node* aux = a;
	do
	{
		aux = a;
		a = a->next;
	} while (!(a->next == nullptr));
	aux->next = nullptr;
	delete a;
}

int MyList::front()
{
	return snext->info;
}

int MyList::last() 
{
	MyList::node* a=snext;
	do
	{
		a = a->next;
	} while (!(a->next == nullptr));
	return a->info;
}
int MyList::size() 
{
	MyList::node* a = snext;;
	int counter = 0;
	do
	{
		a = a->next;
		counter++;
	} while (!(a->next == nullptr));
	return counter;
}