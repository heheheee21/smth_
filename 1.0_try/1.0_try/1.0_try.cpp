#include <curses.h>
#include <iostream>
#include "List.h"

using namespace std;


template<class T>

int main()
{
    
    List<T> lst;
    int SIZE;
    cin >> SIZE;
    for (int i = 1; i <= SIZE; i++)
    {
        int b;
        cin >> b;
        lst.push_back(b);
    }
    lst.show_smth(lst);
    lst.maxx(lst);
    //lst.sorted(lst);
    
    /*
    initscr();
    WINDOW* win = newwin(10, 20, 6, 6);
    refresh();
    box(win, 0, 0);
    mvwprintw(win, 4, 3, "hello");
    wrefresh(win);
    refresh(); 
    getch();
    endwin();
    */
    
    return 0;
}