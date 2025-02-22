#include <stdio.h>

    int  main(){ 
        char A[2], B[2]; //estados//
        char A01[10], B04[8]; //codigo da carta//
        char cidade1[10], cidade2[10];
        int Populacao;
        float Area; //em Km²//
        float PIB;
        int Numero_de_pontos_turisticos; 

           
            printf("Digite a letra corespondente ao Estado: \n");
            scanf("%s", &A, &B);

            printf("Digite o código da sua carta: \n");
            scanf("%s", &A01, &B04);

            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade1);

            printf("Digite o tamanho da população da cidade: \n");
            scanf("%d", &Populacao);

            printf("Digite o tamanho da área territorial: \n");
            scanf("%f", &Area);

            printf("Digite o valor do PIB: \n");
            scanf("%f", &PIB);

            printf("Digite o número de pontos turísticos do município: \n");
            scanf("%d", &Numero_de_pontos_turisticos);
            printf("\n");

            printf("carta 1:\n");
            printf("Estado: %s\n", A);
            printf("Código: %s\n", A01);
            printf("Nome da Cidade: %s\n", cidade1);
            printf("População: %d\n", Populacao);
            printf("Área: %f km²\n", Area);
            printf("PIB: %f bilhões de reais\n", PIB);
            printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);
            printf("\n")

            printf("Digite a letra corespondente ao Estado: \n");
            scanf("%s", &B);

            printf("Digite o código da sua carta: \n");
            scanf("%s", &B04);

            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade2);

            printf("Digite o tamanho da população da cidade: \n");
            scanf("%d", &Populacao);

            printf("Digite o tamanho da área territorial: \n");
            scanf("%f", &Area);

            printf("Digite o valor do PIB: \n");
            scanf("%f", &PIB);

            printf("Digite o número de pontos turísticos do município: \n");
            scanf("%d", &Numero_de_pontos_turisticos);
            printf("\n");

            printf("carta 2:\n");
            printf("Estado: %s\n", B);
            printf("Código: %s\n", B04);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %d\n", Populacao);
            printf("Área: %f km²\n", Area);
            printf("PIB: %f bilhões de reais\n", PIB);
            printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);
            printf("\n")



    return 0;
}    
