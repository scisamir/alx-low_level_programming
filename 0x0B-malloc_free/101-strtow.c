char **strtow(char *str)
{
        int i = 0, j = 0, k, wc = 1, strlen, strm;
        char *mystr;
        char **arrw;
        int points[1024];

        if (str == NULL || str == '\0')
                return (NULL);

        if (str[0] != ' ')
        {
                points[j++] = 0;
                wc++;
        }

        while (str[i])
        {
                if ((str[i] == ' ' && str[i + 1] != ' ')
                && str[i + 1] != '\0')
                {
                        points[j++] = i;
                        wc++;
                }
                i++;
        }

        arrw = malloc(wc * sizeof(char *));
        if (arrw == NULL)
                return (NULL);

        for (i = 0; i < wc; i++)
        {
                strlen = 0;
                strm = points[i];
                while (str[strm++] != ' ')
                        strlen++;
                mystr = (char *) malloc((strlen + 1) * sizeof(char));
                strm = points[i];
                k = 0;
                while (k <= strlen)
                {
                        if (k < strlen)
                                mystr[k] = str[strm++];
                        mystr[k] = '\0';
                        k++;
                }
                arrw[i] = mystr;
                if (i + 1 == wc)
                        arrw[++i] = NULL;
        }

        return (arrw);
}
