#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
template<typename T>
class List {
public:
	List();
	~List();

	void push_back(T data);
	int getSize() {return size;}
	void pop_front();
	void clear();
	T& operator[] (const int index);
	void push_front(T data);
	void pop_back();
	void insert(T data, int index);
	void removeAt(int index);

private:

	template<typename T>
	class Node {
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};

	int size;
	Node<T> *head;
};

template<typename T>
List<T>::List() {
	this->size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List() {
	List::clear();
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) {
		head = new Node<T>(data);
	}
	else {
		Node<T> *current = this->head;
		while (current->pNext != nullptr) {
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	List::size++;

}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = this->head;
	head = temp->pNext;
	delete temp;
	size--;
}

template<typename T>
void List<T>::clear()
{
	while(size)
	{
		List::pop_front();
	}
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr) {
		if (counter == index) {
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	size++;

}

template<typename T>
void List<T>::pop_back()
{
	removeAt(size - 1);
}

template<typename T>
void List<T>::insert(T data, int index)
{
	if (index == 0) {
		push_front(data);
	}

	Node<T>* previous = this->head;
	for (int i = 0; i < index - 1; i++)
	{
		previous = previous->pNext;
	}

	Node<T>* newNode = new Node<T>(data, previous->pNext);
	previous->pNext = newNode;
	size++;
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0) {
		pop_front();
	}
	Node<T>* previous = this->head;
	for (int i = 0; i < index - 1; i++)
	{
		previous = previous->pNext;
	}

	Node<T>* toDelete = previous->pNext;
	previous->pNext = toDelete->pNext;
	delete toDelete;
	size--;
}

void main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	List<int> lst;
	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(22);

	std::cout << lst.getSize() << std::endl;
	std::cout << lst[2] << std::endl;

	int numberCount;
	std::cin >> numberCount;
	for (int i = 0; i < numberCount; i++)
	{
		lst.push_back(rand() % 10);
	}

	for (int i = 0; i < lst.getSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
}
#endif 