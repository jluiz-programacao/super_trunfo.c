#include <stdio.h>


    int  main(){
        char estado1[40], estado2[40], codigo1[40], codigo2[40], cidade1[30] cidade2[30]; 
        int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2; //será pedido o tamanho da população//
        float area1, area2, PIB1, PIB2, densidade_demografica1, densidade_demografica2, PIBpercapta1, PIBpercapta2; 
    
        
            densidade_demografica1 = populacao1 / area1;
            densidade_demografica2 = populacao2 / area2;
               
            printf("*** CARTA 1 ***\n\n\n");

            printf("Digite o nome do Estado: \n"); //saída da interpelação do nome do estado//
            scanf("%s", &estado1); //entrada do usuário com até 10 caracteres (variável char)//


            printf("Digite o código da sua carta: \n"); //saída da interpelação do código da carta//
            scanf("%s", &codigo1); //entrada do código da carta (variável char)//


            printf("Digite o nome da cidade: \n"); //saída da interpelação do nome da cidade//
            scanf("%s", &cidade1); //entrada do nome da cidade (variável char)//


            printf("Digite o tamanho da população da cidade: \n"); //saída da interpelação da população//
            scanf("%d", &populacao1); //entrada do tamanho da população (variável inteira)


            printf("Digite o tamanho da área territorial: \n"); //saída da interpelação sobre a área//
            scanf("%f", &area1); //entrada do tamanho da área (varilavel float)//


            printf("Digite o valor do PIB: \n"); //saída da interpelação do PIB//
            scanf("%f", &PIB1); //entrada do valor do PIB (variável float)


            printf("Digite o número de pontos turísticos do município: \n"); //saída da interpelação dos pontos turísticos//
            scanf("%d", &pontos_turisticos1); //entrada do número de pontos turísticos
            printf("\n\n"); //comando para pular linha e melhorar a organização//

            printf("*** CARTA 2 ***\n\n\n");

            printf("Digite o nome do Estado: \n"); //início da sequência referente à carta 2 - repetiçao de códigos//
            scanf("%s", &estado2);


            printf("Digite o código da sua carta: \n");
            scanf("%s", &codigo2);


            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade2);


            printf("Digite o tamanho da população da cidade: \n");
            scanf("%d", &populacao2);


            printf("Digite o tamanho da área territorial: \n");
            scanf("%f", &area2);


            printf("Digite o valor do PIB: \n");
            scanf("%f", &PIB2);


            printf("Digite o número de pontos turísticos do município: \n");
            scanf("%d", &pontos_turisticos2);
            printf("\n\n");

            //exibição de dados

            printf("carta 1:\n"); //impressão com saída "carta 1"//
            printf("Estado: %s\n", estado1); //impressão com saída do nome do estado//
            printf("Código: %s\n", codigo1); //impressão com saída do código da carta//
            printf("Nome da Cidade: %s\n", cidade1); //impressão com saída do nome da cidade//
            printf("População: %d\n", populacao1); //impressão com saída da população//
            printf("Área: %.2f km²\n", area1); //impressão com saída da área; acrescentei a unidade depois da variável para sais na impressão//
            printf("PIB: %.2f bilhões de reais\n", PIB1); //impressão com saída do valor do PIB; acrescentei a unidade depois da variável para sais na impressão//
            printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); //impressão com saída dos pontos turísticos//
            printf("\n\n"); //comando para melhorar organização - pular linha//


            printf("carta 2:\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
            printf("\n\n");
            






    return 0;
}
