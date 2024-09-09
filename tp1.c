#include <stdio.h>
int main(){
    int T[10] ,n , m , i, x, s , p , cpt , y,a;
    do{
        printf("1.singe produit \n 2.la somme est impair\n 3.le neme nomber premier\n 4. quitter \n votre choix: "); 
        scanf("%d",&x);
        for (i = 0 ; i <2 ;i++){
            printf ("T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        n = T[0];
        m = T[1];
        switch(x)
        {
        case 1:
        p = 1;
        for (i = 0 ; i <2 ; i++){
            p = p * T[i];
        }
        if (p > 0){
            printf("la singe de produit %d est positif\n ",p);
        }else{
            printf ("la singe de %d est negative\n",p);
        }
        break;
        case 2:
        s = 0;
        for (i = 0 ; i <2 ; i++){
            s = s + T[i] ;
        }    
        if (s % 2 == 0){
            printf ("la smme %d est pair\n ",s);
        }else{
            printf("la somme %d est impair\n",s);
        }
        break;
        case 3:
        cpt = 0;
        y = 1;
        do {
            i = 2;
            while((i <= y/2) && (y % i != 0)){
                i++;
            }
            if (y % i != 0){
                a = y;
                cpt++;
            }
            y++;
        }while(cpt < n);
        printf("le %d eme nomber premier est %d\n",n,a);
        break;
        default:
        printf("ERRURE\n");
        }
    }while(x != 4);
    return 0;
}