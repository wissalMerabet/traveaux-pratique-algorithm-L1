#include <stdio.h>
/*________________lire le tableau______________*/
void LireTab(int n , int T[50]){
    int i;
    printf("veuillez saisir les element du tableau : \n");
    for(i=0 ; i<n ; i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
}
/*_________________afficher le tableau______________ */
void AfficherTab(int n , int T[50]){
    int i ;
    printf("les element du tableau sont :\n ");
    for(i=0 ; i<n ; i++){
        printf("T[%d]=%d\n",i,T[i]);
    }
}
/*______________le procedeur de fusionner__________________*/
void Fusionner(int T[50] , int ID ,int IM , int IF ){
    int n1 , n2 ;
    n1 = IM - ID + 1; /*La taille de sous tab g et d*/
    n2 = IF - IM ;
    int G[n1] ;
    int D[n2] ;
    for (int i = 0; i < n1; i++){
        G[i] = T[ID + i];
    }    
    for (int j = 0; j < n2; j++){
        D[j] = T[IM + 1 + j];
    }
    int i, j, k;
    i = 0; 
    j = 0;
    k = ID;
    while (i < n1 && j < n2) {
        if (G[i] <= D[j]) {      /*remplir le tableau t*/
            T[k] = G[i];
            i++;
        } else {
            T[k] = D[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        T[k] = G[i];
        i++;
        k++;
    }
    while (j < n2) {
        T[k] = D[j];
        j++;
        k++;
    }
}
/*le procedeur de tri fusionner*/
void Trifusion(int T[50], int ID , int IF){
    int IM;
    if(ID<IF)
    {
        IM = (ID +IF)/2;
        Trifusion(T,ID,IM);
        Trifusion(T,IM+1,IF);
        Fusionner(T,ID,IM,IF);
    }
}
/*LE PROGRAMME :*/
int main(){
    int T[50],n;
    printf("donner la taille du tableau n= ");
    scanf("%d",&n);
    LireTab(n,T);
    Trifusion(T , 0 , n );
    AfficherTab(n , T);

    return 0;
}