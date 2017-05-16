#include <iostream>
#include"MyForwardList.h"
#include <iterator>

void main()
{
	MyForwardList a= MyForwardList(3, 3);
	
	
	a.insert_after(1,1);
	
	
	int primero = a.front();
	MyForwardList::node* it = a.begin();
	do
	{
		std::cout <<it->info << std::endl;
		it = it->next;
	} while (!(it->next == nullptr));
	/*
	MyForwardList::node* squad = a.before_begin();
	a.push_front(0);
	std::cout << a.front() << std::endl;
	a.pop_front();
	std::cout << a.front() << std::endl;*/
}