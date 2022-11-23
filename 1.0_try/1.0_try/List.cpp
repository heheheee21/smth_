#include "List.h"
    template<class T>
    List<T>::List()
    {
        size = 0;
        head = nullptr;
    }

    template<class T>
    List<T>::~List()
    {
        clear();
    }
    template<class T>
    void List<T>::push_back(T data)
    {
        if (head == nullptr)
        {
            head = new Node<T>(data);
        }
        else
        {
            Node<T>* current = this->head;
            while (current->pNext != nullptr)
            {
                current = current->pNext;
            }
            current->pNext = new Node<T>(data);
        }
        size++;
    }

    template<class T>
    void List<T>::pop_front()
    {
        Node<T>* temp = head;
        head = head->pNext;
        delete temp;
        size--;
    }

    template<class T>
    void List<T>::clear()
    {
        while (size)
        {
            pop_front();
        }
    }

    template<class T>
    void List<T>::push_front(T data)
    {
        head = new Node<T>(data, head);
        size++;

    }

    template<class T>
    void List<T>::insert(T value, int index)
    {
        if (index == 0)
        {
            push_front(value);
        }
        else
        {
            Node<T>* previous = this->head;

            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }

            Node<T>* newNode = new Node<T>(data, previous->pNext);

            previous->pNext = newNode;

            size++;
        }
    }

    template<class T>
    void List<T>::removeAT(int index)
    {
        if (index == 0)
        {
            pop_front();
        }
        else
        {
            Node<T>* previous = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }

            Node<T>* delete_smth = previous->pNext;

            previous->pNext = delete_smth->pNext;

            delete delete_smth;

            size--;
        }

    }

    template<class T>
    void List<T>::show_smth(List<T>& lst)
    {
        for (int i = 0; i < lst.GetSize(); i++)
            cout << lst[i] << "  ";
        cout << endl;
    }

    template<class T>
    void List<T>::maxx(List<T>& lst)
    {
        T maxx = lst[0];
        for (int i = 0; i < lst.GetSize(); i++)
        {
            if (maxx < lst[i])
                maxx = lst[i];
        }
        cout << maxx;
    }
    /*
    template<class T>
    void List<T>::sorted(List<T>& lst)
    {
        int k = 0;
        Node<T>* current = this->head;
        if (current->pNext != nullptr)
        {
            if (current->data > current->pNext->data)
            {
                k++;
                swap(current, current->pNext);
                sorted(current->pNext);
            }
            sorted(current->pNext);
        }
        if (k > 0)
            sorted(current.);

    }
    */


    template<class T>
    T& List<T>::operator[](const int index)
    {
        int k = 0;
        Node<T>* current = this->head;
        while (current != nullptr)
        {
            if (k == index)
                return current->data;
            current = current->pNext;
            k++;
        }
    }
