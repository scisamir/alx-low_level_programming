int _wlen(char *str)
{
        int i = 0, wc = 0;
	
        if (str[0] != ' ')
                wc++;
       
        while (str[i])
        {
                if ((str[i] == ' ' && str[i + 1] != ' ')
                && str[i + 1] != '\0')
                        wc++;
                i++;
        }
        
        return (wc);
}

char **strtow(char *str)
{
        int i, i2, j, k, wc, len = 0;
        char *mystr, **arrw;

        if (str == NULL || *str == '\0')
                return (NULL);
                
        wc = _wlen(str);
        // printf("word lenght: %d\n", wc);

        arrw = (char **) malloc((wc + 1) * sizeof(char *));
        if (arrw == NULL)
                return (NULL);
                
        if (str[0] != ' ')
        {
                       j = 0;
                       while (str[j] != ' ' || str[j] != '\0')
                              j++;
                       mystr = (char *) malloc((j + 1) * sizeof(char));
                       for (k = 0; k <= j; k++)
                       {
                       	if (k < j)
                       		mystr[k] = str[k];
                       	mystr[k] = '\0';
                       }
                       arrw[len++] = mystr;
         }

        for (i = 0; str[i]; i++)
        {
                if ((str[i] != ' ' && str[i - 1] == ' ') && str[i] != '\0')
                {
                        i2 = i;
                        j = 0;
                        for (; str[i2] != ' ' && str[i2] != '\0'; i2++)
                               j++;
                        mystr = (char *) malloc((j + 1) * sizeof(char));
                        i2 = i;
                        for (k = 0; k <= j; k++)
                       {
                       	if (k < j)
                       		mystr[k] = str[i2++];
                       	mystr[k] = '\0';
                       }
                       arrw[len++] = mystr;
                 }
        }
        arrw[len] = NULL;

        return (arrw);
}
