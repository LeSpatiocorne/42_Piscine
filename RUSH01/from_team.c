void    aff_grid(char *str)
{
    int    i;
    int    j;
    int counter;
    
    j = 0;
    counter = 0;
    while (counter <= 6)
    {
        i = 0;
        //si il y a un 4 en arg dans la colonne du haut
        if (str[counter] == 4)
        {
            while (i < 4)
            {
                move_and_replace(i, j, i+1);
                i++;
            }
            
        }
        //si il y a un 1 en arg dans la colonne du haut
        if (str[counter] == 1)
        {
            move_and_replace(i, j, 4);
        }
        counter += 2;
        j++;
    }

    j = 0;
    while (counter >= 8 && counter <= 14)
    {
        i = 0;
        //si il y a un 4 en arg dans la colonne du haut
        if (str[counter] == 4)
        {
            while (i >= 0)
            {
                move_and_replace(i, j, i+1);
                i--;
            }
            
        }
        //si il y a un 1 en arg dans la colonne du haut
        if (str[counter] == 1)
        {
            move_and_replace(i, j, 4);
        }
        counter += 2;
        j++;
    }
}