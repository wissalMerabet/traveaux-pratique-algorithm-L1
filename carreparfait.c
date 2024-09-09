#include <stdio.h>

    int c_parfait(int n){
        int s , i;
        s = 0;
        for (i = 1; i<= (n-1) ; i++){
            if(n % i == 0){
                s = s +i;
            }
        }
        return s;
    }
    void premier(int n){
        int i;
        i = 2;
        while(i<=(n/2) && (n % i != 0)){
            i++;
        }
        if(n % i != 0){
            printf("%d  est premier",n);
        }else{
            printf("%d nom premier ",n);
        }
    }
    int premier1(int n){
        int i;
        if (n <2){
            return 0;
        }
        i = 2;
        while (i <= (n/2)){
            if (n % i == 0){
                return 0;
            }
            i++;
            return 1;
        }
    }
    int chiffrChannce(int n){
        int s , i;
        s = 0;
        do {
            s = s + n%10;
            n = n/10;
            if(s > 9){
                n = s;
                s = 0 ;
            }

        }while(n != 0);
        return s;
    }
    
int main(){    
    int n;
    printf("donner un nomber n.n= ");
    scanf("%d",&n);
    printf("le chiffre de channce de %d est %d", n , chiffrChannce(n));
    
    return 0;
}