#include <stack>
#include <vector>
#include <iostream>
#include <queue>

//1
std::stack <int> superMerge(std::stack <int> a,std::stack<int>  b) {
	std::stack <int> auxa;
	std::stack<int> auxb;
	std::stack<int> fin;
	while (!a.empty())
	{
		auxa.push(a.top());
		a.pop();
	}

	while (!b.empty())
	{
		auxb.push(b.top());
		b.pop();
	}

	while(!auxa.empty() || !auxb.empty())
	{
		if (auxa.empty()) 
		{
			fin.push(auxb.top());
			auxb.pop();
		}
		else if (auxb.empty())
		{
			fin.push(auxa.top());
			auxa.pop();
		}
		else
		{
			if (auxa.top() <= auxb.top())
			{
				fin.push(auxa.top());
				auxa.pop();
			}
			else
			{
				fin.push(auxb.top());
				auxb.pop();
			}
		}
		/*if (auxa.top() == NULL) { auxa.push(auxb.top() + 1); }
		if (auxb.top() == NULL) { (auxb.push(auxa.top() + 1)); }*/
	}	
	return fin;
}

std::stack <int> putHat(std::stack <int>a, std::stack <int>b)
{
	std::stack <int> fin;
	std::stack <int> auxa;
	std::stack <int> auxb;
	
	while (!a.empty())
	{
		auxa.push(a.top());
		a.pop();
	}

	while (!b.empty())
	{
		auxb.push(b.top());
		b.pop();
	}

	while(!auxb.empty() || !auxa.empty())
	{
		if (!auxb.empty())
		{
			fin.push(auxb.top());
			auxb.pop();
		}
		else if (!auxa.empty())
		{
			fin.push(auxa.top());
			auxa.pop();
		}
		
	}

	return fin;
}

std::queue <int> transformToQ(std::stack <int> a) 
{
	std::queue <int> fin;
	while (!a.empty()) 
	{
		fin.push(a.top());
		a.pop();
	}
	return fin;
}

bool isHat(std::stack <int>a, std::stack <int>b)
{
	if (a.empty()) { return true; }
	if (a.size() > b.size()) { return false; }
	while (!a.empty())
	{
		if (a.top() != b.top())
			return false;
		a.pop();
		b.pop();
	}
	return true;
}

bool balancedP(std::queue<char> a)
{
	int d=0;
	int e=0;
	char aux;
	if (a.size() % 2 == 1 || a.front() == ')') { return false; }
	
	while(!a.empty())
	{
		aux = a.front();
		a.pop();
		if (aux == '(') { d++; }
		if (aux == ')') { e++; }
		if ((d - e) < 0) { return false; }
	}
	if ((d - e) != 0) return false;
	else return true;	
}

void change(std::stack<int> &a)
{
	int last;
	int first = a.top();
	a.pop();
	std::stack<int> aux;
	while (!a.empty())
	{
		if (a.size() == 1) 
		{
			last = a.top();
			a.pop();
		}
		else {
			aux.push(a.top());
			a.pop();
		}
	}
	a.push(first);
	while (!aux.empty())
	{
		a.push(aux.top());
		aux.pop();
	}
	a.push(last);
}

//2

int main() {
	bool provando;
	std::stack <int> a;
	a.push(1);
	a.push(4);
	a.push(6);
	std::stack <int> b;
	b.push(2);
	b.push(4);
	b.push(7);	
	std::queue <char> c;
	c.push('(');
	c.push('(');
	c.push(')');
	c.push(')');
	provando = balancedP(c);
	change(a);

	//if (provando)std::cout << "yas" << std::endl;
	while (!a.empty())
	{
		std::cout << a.top() << std::endl;
		a.pop();
	}
	system("pause");
}
