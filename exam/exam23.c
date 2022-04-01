#include <stdio.h>
#include <errno.h>

int is_space(char c)
{
    if((c == ' ') || (c == '\n') || (c == '\t') || (c =='\v'))
        return 1;

    return 0;
}

void count_max_len_word(int *len_word, int *max_len_word)
{
    if(*max_len_word < *len_word)
        *max_len_word = *len_word;
   
}

void count_not_and_even_word(int *len_word, int *even, int *not_even)
{
    if(*len_word % 2 == 1)
        *not_even += 1;
    else
        *even += 1;
}

int main()
{
    
    int c;
    int word = 0;
    int quantity_word = 0;
    int len_word = 0;
    int len_space = 0;
    int max_len_word = 0;
    int even_quantity_word = 0;
    int noteven_quantity_word = 0;

    while((c = getchar()) != EOF) 
    {
        
        if(is_space(c))
        {
            if(len_word)
            {
                quantity_word += word;
                count_max_len_word(&len_word, &max_len_word);
                count_not_and_even_word(&len_word, &even_quantity_word, &noteven_quantity_word);
            }

            word = 0;
            len_word = 0;
            len_space++;
        } else
        {
            word = 1; 
            len_space = 0;
            len_word++;
        }
    }

    if(len_word)
    {
        quantity_word += word;
        count_max_len_word(&len_word, &max_len_word);
        count_not_and_even_word(&len_word, &even_quantity_word, &noteven_quantity_word);
    }

    printf("\nmax_len_word  -> %d\n", max_len_word);
    printf("quantity_word -> %d\n", quantity_word);
    printf("even_quantity_word ->%d\n", even_quantity_word );
    printf("noteven_quantity_word -> %d\n", noteven_quantity_word); 
    return 0;
}