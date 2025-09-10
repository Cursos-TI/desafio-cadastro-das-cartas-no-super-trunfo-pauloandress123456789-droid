#include <stdio.h>

int main(){
        int carta;
        char estado[20];
        char codigo[15];
        char nomedacidade[20];
        int populacao;
        float areaemkm;
        float PIB;
        int numerosdepontosturisticos;
        float densidadepopulacional;
        float pibpercapita;



        printf("digite a carta: \n");
        scanf("%d", &carta);

        printf("digite seu estado: \n");
        scanf("%s", &estado);

        printf("digite o codigo: \n");
        scanf("%s", &codigo);

        printf("nome da cidade: \n");
        scanf("%s", &nomedacidade);

        printf("populacao:\n");
        scanf("%d", &populacao);


        printf("area em km: \n");
        scanf("%f", &areaemkm);

        printf("PIB: \n");
        scanf("%f", &PIB);

        printf("numeros de pontos turisticos: \n");
        scanf("%d", &numerosdepontosturisticos);


        printf("densidade populacional: \n");
        scanf("%f", &densidadepopulacional);

        printf("pib per capita: \n");
        scanf("%f", &pibpercapita);




        printf("carta:%d\n",carta);
        printf("estado:%s\n",estado);
        printf("codigo:%s\n",codigo);
        printf("nome da cidade:%s\n",nomedacidade);
        printf("populacao:%d\n", populacao);
        printf("are em km:%f\n", areaemkm);
        printf("PIB:%f\n",PIB);
        printf("numeros de pontos turisticos:%d\n",numerosdepontosturisticos);
        printf("densidade populacional:%f\n",densidadepopulacional);
        printf("pib per capita:%f\n", pibpercapita);



        return 0;

    }
