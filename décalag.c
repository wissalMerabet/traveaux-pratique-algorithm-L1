#include <stdio.h>
int main (){
    int T[10] ;
    int i , j , tmp , n ;
    printf ("donner un nomber n . n= ");
    scanf ("%d",&n);
    printf ("veuillez saisir las element de tableau : \n");
    for (int i = 0 ; i < n ; i++){
        printf ("T[%d]= ", i);
        scanf ("%d",&T[i]);
    }
    tmp = T[0];
    for (int j = 1 ; j < n ; j++){
        T[j-1] = T[j];
    }
    T[n-1] = tmp;
    printf (" les element du tableau apre le decalage \n: ");
    for ( i = 0 ; i<n ; i++){
        printf ("T[%d]= %d\n",i ,T[i]);
    }
    return 0;


}