#include <iostream>
#include"MyForwardList.h"
#include <iterator>

void main()
{
	MyForwardList a= MyForwardList(3, 3);
	MyForwardList::node* it=a.begin();
	
	a.insert_after(0,4);
	a.push_front(1);
	do
	{
		std::cout << it->info << std::endl;
		it = it->next;
	} while (!(it->next == nullptr));

}