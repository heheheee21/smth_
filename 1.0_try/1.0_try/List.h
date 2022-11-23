#pragma once
#include <iostream>

using namespace std;

template<class T>
    
class List
{
public:

    List();
    ~List();
    void push_back(T data);//добавление элемента в конец
    void pop_front();//удаление последнего элемента (нужен для удаления по индексу)
    void clear();//уничтожение всего массива
    int GetSize() { return size; } //гетр
    void push_front(T data);//добавление в начало
    void insert(T value, int index);//добавление элемента в любое место
    void removeAT(int index);
    void show_smth(List<T>&);
    void maxx(List<T>&);
    //void sorted(List<T>& lst);
    T& operator[](const int index);//для итерации по массиву

private:
    template<class T>
    class Node
    {
    public:
        Node* pNext;
        T data;
        Node(T data = T(), Node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int size;

    Node<T>* head;
};

