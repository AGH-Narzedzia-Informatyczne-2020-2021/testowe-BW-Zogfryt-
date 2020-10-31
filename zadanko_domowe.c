#include <stdio.h>

int main()
{
char tab[250]="Martyna Martynie nie rowna lecz kto wie co Martyna", sz[250]="Martyna";
char *w1,*w2,*w3;
int l=0,fl;
for(w1=tab; *w1; w1++)
{
    fl=1;
    for(w2=sz, w3=w1; *w2 && *w3; w2++, w3++)
    {
        if(*(w3+1)== 0 && *(w2+1) != 0){
            fl=0;
            break;
        }
        else if(*w2!=*w3)
    {
        fl=0;
        break;
    }
    }
    if(fl)
        l++;

}
printf("%d", l);
return 0;
}
