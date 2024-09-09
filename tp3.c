#include <stdio.h>
/*____________matrice transposer__________*/

void MatriceTransp(int n , int m ,int T[10][10]){
    int i , j ;
    printf("\n les element du la matrice sont:\n");
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++){
            printf("\n T[%d,%d]== ",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    printf("la matrice transpose est :\n");
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++){
            printf("\n T[%d,%d]= %d ",j,i,T[j][i]);
        }
    }
}
/*_________lire le tableau_________*/
void LireTabe(int n , int T[10]){
    int i ;
    printf("\nVeuillez Saisir Les element du Tableau :\n");
    for(i=0 ; i<n ; i++){
        printf("T[%d]== ",i);
        scanf("%d",&T[i]);
    }
}
/*_________afficher multtiple_________*/
void AfficherMltp(int n , int T[10]){
    int i , x , s;
    s = 0;
    printf("les multtiple de chaque element du Tableau :\n");
    for(i = 0 ; i<n ; i++){
        printf("\nles multtiple de %d est :\n ", T[i]);
        x = 1;
        while( x <= 100){
            if ( x % T[i] == 0){
                printf("  %d  ",x);
                s = s + x;
            }
            x++;
        }
        printf("\n La somme des mutlttiple de %d  et %d\n",T[i], s);
    }
    printf("\n");
}

int main (){
    int n , T[10] , a , b , G[10][10];
    printf("\nla taille du tableau  est n.n == ");
    scanf("%d",&n);
    LireTabe(n,T);
    AfficherMltp(n,T);
    printf("\n donner la taille de la matrice :");
    printf("\n donner le nomber de linge de la matrice:");
    scanf("%d",&a);
    printf("\n donner le nomber de colone DE la matrice:");
    scanf("%d",&b);
    MatriceTransp(a,b,G);
    
    

    return 0;

}