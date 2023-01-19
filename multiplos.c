#include <stdio.h>
int main(){

    FILE *fp, *fp1;
    fp=fopen("archivo2.txt","r+");
    fp1=fopen("resultados.txt", "w");
    int v;

    //Controlando los punteros o si no existe el archivo
    if(fp==NULL){
        printf("NO SE PUEDE ABRIR EL ARCHIVO");
        return -1;
    }

    if(fp1==NULL){
        printf("NO SE PUEDE ABRIR EL ARCHIVO");
        return -1;
    }


    while(!feof(fp)){
        fscanf(fp,"%d", &v);
        if(v%10==0){
            fprintf(fp1,"%d --> ES MULTIPLO DE 10\n",v);
            printf("%d --> ES MULTIPLO DE 10",v);
            printf("\n");
        }
        else{
            fprintf(fp1,"%d\n",v);
            printf("%d\n",v);
        }

    }


    fclose(fp);
    fclose(fp1);

    return 0;
}