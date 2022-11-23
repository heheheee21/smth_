#pragma once
#include <iostream>

using namespace std;

template<class T>
    
class List
{
public:

    List();
    ~List();
    void push_back(T data);//���������� �������� � �����
    void pop_front();//�������� ���������� �������� (����� ��� �������� �� �������)
    void clear();//����������� ����� �������
    int GetSize() { return size; } //����
    void push_front(T data);//���������� � ������
    void insert(T value, int index);//���������� �������� � ����� �����
    void removeAT(int index);
    void show_smth(List<T>&);
    void maxx(List<T>&);
    //void sorted(List<T>& lst);
    T& operator[](const int index);//��� �������� �� �������

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

