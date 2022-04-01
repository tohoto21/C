#include <ncurses.h>
#include <unistd.h>

static const char message[] = "*";
enum { delay_duration = 10000};

static void show_message(int x, int y)
{
    
    
    move(y, x);
    addstr(message);
    refresh();
}

int main()
{
    int row, col, x, y , max_x, max_y,i,j;
    initscr();
    has_colors();
    cbreak();
    keypad(stdscr, 1);
    noecho();
    curs_set(0);
    getmaxyx(stdscr, row, col);
    x = row/2 - 5;
    y = col/2 - 5;
    max_x = col +5 ;
    max_y = row + 5 ;
    show_message(x, y);
    
    
    for(i=0; i < max_y; i++ )
    {
        timeout(0);
        if(getch() != ERR)
            break;
        for(j=0; j < max_x; j++ )
        {
            show_message(j, i);
            usleep(delay_duration);
        }
    }

    endwin();
    return 0;
}















































