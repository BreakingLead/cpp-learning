//test.c
#include <string.h>
#include <ncurses.h>

int main(int argc,char* argv[]){
    initscr();
    noecho();
    curs_set(0);
    char* str="Hello, World!";
    mvprintw(LINES/2,(COLS-strlen(str))/2,str);
    refresh();
    getch();
    return 0;
}