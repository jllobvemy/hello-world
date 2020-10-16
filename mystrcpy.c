char* StrCpy(char* s)
{
    int i;
    char* d;
    for (i = 0; s[i] != '\0'; i++);
    d = malloc(sizeof(char) * i + 1);
    for (int k = 0; k < i; k++)
    {
        d[k] = s[k];
    }
    d[i + 1] = '\0';
    return d;


}