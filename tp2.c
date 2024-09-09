#include <stdio.h>
int main (){
    int T[10],i,n,x,s , a;
    float moyenne;
    do{
        printf("1.la moyenne \n 2.l'ordre invers\n 3.le nomber daparition de chaque valeur\n .4 QUITTER \n votre choix: ");
        scanf("%d",&x);
        printf("donner un nomber n .n= ");
        scanf("%d",&n);
        /*tout les element positif ou nul */
        do{
            for(i = 0; i<= (n-1) ; i++){
            printf("t[%d]= ",i);
            scanf("%d",&T[i]);
            }
        }while (T[i] < 0);
        switch(x){
            case 1:/* la moyenne */
            s = 0;
            for(i=0 ; i<n ; i++){
                s = s + T[i];
            }
            moyenne = s / n ;
            printf("la moyenne de la suit des nomber est %f\n",moyenne);
            break;
            case 2:/*l'inverse du tableau*/
            int TI[10];
            for (i = 0; i<n ;i++){
                TI[(n-1)-i] = T[i];
            }
            printf("l'ordre inverse de la suit des nomber est  :\n");
            for(i = 0; i<n ;i++){
            printf("TI[%d]= %d \n",i,TI[i]);
            }
            break;
            case 3: /*le nomber d'aparetion */
            int cpt , m;
            printf("donner un nomber m.m = ");
            scanf("%d",&m);
            cpt = 0;
            for(i=0 ; i<n ; i++){
                if(T[i] == m){
                cpt = cpt +1;
                }
            }
            printf("le nomber d'aparetion de %d dans tableau est : %d\n",m,cpt);
            break;
            default:
            
            printf("ERRURE");
        }

        printf("/n choisir 0 pour quitter sinon 1:/n");
        scanf("%d",&a);
    }while(a != 0);    
    return 0;
}