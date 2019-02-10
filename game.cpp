#include<ncurses.h>

int main(){
    initscr();
    printw("Hello world");
    refresh();
    getch();
    
    endwin();
    return 0;
}

// compile with c++ game.cpp -lncurses
// run with ./a.out
// https://www.youtube.com/watch?v=Cg_u60jX8Y4