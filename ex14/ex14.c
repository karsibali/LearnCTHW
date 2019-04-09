#include <stdio.h>
#include <ctype.h>

// fonksiyon prototipleri
int yazilabilir(char ch);
void harfleri_yaz(char arg[]);

void parametreleri_yaz(int pars, char *pard[])
{
    int i = 0;

    for (i = 0; i < pars; i++) {
        harfleri_yaz(pard[i]);
    }
}

void harfleri_yaz(char par[])
{
    int i = 0;

    for (i = 0; par[i] != '\0'; i++) {
        char ch = par[i];

        if (yazilabilir(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int yazilabilir(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main (int pars, char *parv[])
{
    parametreleri_yaz(pars, parv);
    return 0;
}