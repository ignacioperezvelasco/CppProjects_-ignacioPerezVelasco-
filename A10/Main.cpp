#include <iostream>
#include"MyForwardList.h"
#include "MyList.h"
#include <iterator>


void main() 
{
	MyList a = MyList(2,2);

	//a.insert_before(1, 3);
	a.push_front(1);
	a.push_back(3);
	//a.pop_front();
	//a.pop_back();
	//int xd = a.size();
	MyList::node* it = a.begin();
	//std::cout << xd << std::endl;
	do
	{
		std::cout << it->info << std::endl;
		it = it->next;
	} while (!(it->next == nullptr));

}




/*Main MyForwardList

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
	
	MyForwardList::node* squad = a.before_begin();
	a.push_front(0);
	std::cout << a.front() << std::endl;
	a.pop_front();
	std::cout << a.front() << std::endl;
}*/