#include <ncurses.h>
#include <unistd.h>

static const char star[] = "*";
static const char grid[] = "#";
enum { delay_duration = 60000};
enum { m = 5}; //matrix 10x10 in center


static void show_sym(int x, int y, const char *sym )
{
    
    usleep(delay_duration);
    move(y, x);
    addstr(sym);
    refresh();
}


void draw_square(int h, int w)
{
   
    for(int i=(h -m); i < (h + m); i++ )
        for(int j=(w -m); j < (w+ m); j++ )
            show_sym(j, i,star);
}

void run_grid(int h, int w)
{
    int j;

    
    for( j= (w - m); j >= (w + m); j-- )
    {
        show_sym(j, (h-m),grid);
        show_sym(j, (h-m),star);
    }
    for( j=h-m+1;j< h+m;j++)
    {
        show_sym((w+m-1), j,grid);
        show_sym((w+m-1), j,star);
    }
    for(j= w+m-2; j >= w-m; j--)
    {
        show_sym(j, (h+m-1),grid);
        show_sym(j, (h+m-1),star);
    }
    for (j=h+m-2;j>=h-m+1;j--)
    {
        show_sym((w-m), j,grid);
        show_sym((w-m), j,star);
    } 
}
void run_grid_reverse(int h, int w)
{
    int j;
    for( j=h-m;j< h+m;j++)
        {
            show_sym((w-m), j,grid);
            show_sym((w-m), j,star);
        }
    for(j= w-m+1; j< w+m; j++)
    {
        show_sym(j, (h+m-1),grid);
        show_sym(j, (h+m-1),star);
    }
    for (j=h+m-2;j>=h-m;j--)
    {
        show_sym((w+m-1), j,grid);
        show_sym((w+m-1), j,star);
    } 
    for(j= w+m-2; j >= w-m; j--)
    {
        show_sym(j, (h-m),grid);
        show_sym(j, (h-m),star);
    }
}   

int main()
{
    int row, col;
    initscr();
    has_colors();
    cbreak();
    keypad(stdscr, 1);
    noecho();
    curs_set(0);
    getmaxyx(stdscr, col, row);
    move(0,0);
    printw("(col-%d,row-%d)",col,row);
    int height = col/2;
    int width = row/2;
   
    timeout(0);// getch() не останавливет цикл
    draw_square(height,width);
    while((getch() == ERR))
    {
        
        run_grid_reverse(height,width);
    }

    endwin();
    return 0;
}















































