#include "MyStack.h"



MyStack::MyStack()
{
}


MyStack::~MyStack()
{}
MyStack::MyStack(MyStack &a)
{}
MyStack::MyStack(int numelementostack, int elemento)
{}


void MyStack::pop()
{

	s->next = s->next->next;
}

void MyStack::push(int a) 
{
	MyStack::node* t= new MyStack::node{a,MyStack::s};
	s = t;
}

int MyStack::top()
{
	return s->info;
}

int MyStack::size() 
{
	node* aux;
	int size;
	do
	{
		aux = s->next;
		size++;
	} while (aux->next != nullptr);
}

bool MyStack::isempty()
{
	if (s == nullptr) 
	{
		return true;
	}
	else return false;
}