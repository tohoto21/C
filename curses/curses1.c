#include <curses.h>
#include <unistd.h>


enum { delay_duration = 1};

int main(int argc , char **argv)
{
    int row, col;
    char *message;

    if(argc < 2)
    {
        fprintf(stderr, "malo argumentov\n");
        return 1;
    }

    message = argv[1];

    initscr();
    echo();
    getmaxyx(stdscr, row, col);
    move(row/2, (col - (sizeof(message) - 1)) / 2 );
    addstr(message);
    curs_set(0);
    refresh();
    sleep(delay_duration);
    endwin();
    return 0;
}