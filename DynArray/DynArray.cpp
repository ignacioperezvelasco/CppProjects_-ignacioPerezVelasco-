// DynArray.cpp : Defines the entry point for the console application.
//

#include "DynArray.hh"

 void DynArray::fill(int *first, int *last, int value) {
	while (first != last) {
		*first = value;
		first++;
	}
};

DynArray::DynArray() :
	m_capacity{ DYN_ARRAY_DEFAULT_SIZE },
	m_size{ 0 },
	m_data (new int[m_capacity]) {}

DynArray::DynArray(size_t size, const int &value) :
	m_capacity{ size },
	m_size{ size },
	m_data(new int[size])
	{
	fill(m_data, m_data + size, value);
	}

 DynArray:: ~DynArray() {
	 delete[] m_data;
}

 int& DynArray::operator[]	(size_t n) const{
	 return m_data[n];
 }

 bool operator== (const DynArray& lhs, const DynArray& rhs) 
 {
	 return;
}


 void DynArray::push(const int &val) {

	 if (m_size == m_capacity ) {
		 m_capacity += m_size / 2;
		 int *temp = new int[m_capacity];
		 int *aux = temp;
		 int *aux2 = m_data;
		 while (m_data != m_data + m_size) {
			 *temp = *m_data;
			 m_data++;
			 temp++;
		 }
		 *temp = val;
		 temp = aux;
		 m_data = aux2;
		 delete m_data;
		 m_data = temp;
		 delete temp;
	 }
	 else {
		 int *aux = m_data + m_size;
		 *aux = val;		 
	 }
	 
 }
