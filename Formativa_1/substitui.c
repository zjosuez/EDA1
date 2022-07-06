// #include <stdio.h>

// int main(){
// 	char frase[10001], procura[41], substitui[41];
// 	int posProcura;

// 	scanf(" %[^\n]", frase);
// 	scanf(" %s", procura);
// 	scanf(" %s", substitui);

// 	posProcura = 0;

// 	for(int i = 0; frase[i] != '\0'; i++){
// 		if(procura[posProcura] == frase[i]){
// 			posProcura++;
// 		}

// 		else{
// 			if(posProcura > 0){
// 				if(procura[posProcura] == '\0'){
// 					printf("%s", substitui);
// 					posProcura = 0;
// 				}
// 				else {
// 					while (posProcura > 0){
// 						printf("%c", frase[i-posProcura]);
// 						posProcura--;
// 					}
// 				}
// 			}
// 			printf("%c", frase[i]);
// 		}
// 	}

// 	if(posProcura > 0 && procura[posProcura] == '\0'){
// 		printf("%s", substitui);
// 		posProcura = 0;
// 	}
// 	printf("\n");

// 	return 0;
// }

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int aux = 0;
    char frase[10001], palavra[41], substituir[41], newFrase[10001];

    scanf("%s", frase);

    for (int l = 0; l < 41; l++)
    {
        palavra[l] = 0;
    }

    scanf("%s", palavra);
    scanf("%s", substituir);

    for (i = 0; frase[i] != EOF; i++)
    {
        if (frase[i] == palavra[j])
        {
            newFrase[i] = substituir[i];
            j++;
        }
        else
        {
            newFrase[j] = frase[i];
        }
        printf("%c", frase[i]);
    }
    return 0;
}