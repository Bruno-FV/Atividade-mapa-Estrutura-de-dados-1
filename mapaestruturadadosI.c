#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define max 200

typedef struct registro {
	int ID;
	char ETNIA [max], SEXO [max], MUNICIPIO_RESIDENCIA[max], CLASSIFICACAO[max], SINTUACAO_ATUAL[max],
	DATA_RESULTADO_EXAME[max], DATA_ATENDIMENTO[max], TIPO_COLETA[max], FLG_OBITO[max], DATA_OBITO[max],
	VALID_OBITO[max], AUSEGIA[max], ANOSMIA[max], FEBRE[max], TOSSE[max], CEFALEIA[max], DIFICULDADE_RESPIRATORIA[max],
	DISPINEIA[max], MIALGIA[max], SATURACAO_MENOR_NOVENTA_CINCO[max], ADINOFAGIA[max], DIARREIA[max], ADINAMIA[max],
	NAUSEA_VOMITO[max], CORIZA[max], NAO_INFORMADO[max], DOENCA_CARDIOVASCULAR[max], DIABETES[max], DOENCA_RESPIRATORIA_CRONICA[max],
	HIPERTENSAO[max], PACIENTE_ONCOLOGICO[max], IDOSO[max], PROFISSIONAL_SAUDE[max], OBSIDADE[max], DOENCA_RENAL_CRONICA[max],
	DOENCA_AUTO_IMUNE[max], ASMA[max], SEM_COMORBIDADE[max], FATOR_NAO_INFORMADO[max], OUTROS_FATORES[max], PNEUMOPATIA[max];
	int IDADE;
	};
struct registro dados[1024];
void imprimirOriginal(struct registro dados[], int tam);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int tam = 101;
	int countLinhas = 0;
	int contador = 0, linha =0;
	char auxArquivo[1024];
	char buf[1024];
	FILE *arq = fopen("sample.csv","r");
	if(arq == NULL){
		printf("NÃO FOI POSSÍVEL CARREGAR O ARQUIVO");
		exit(0);
	}	
	while(fgets(buf,1024,arq)){
		contador = 0;
		if(countLinhas == 1) continue;
		char *campo = strtok(buf,",");
		while(campo){
			if(contador == 0)	{
				strcpy(auxArquivo,campo);
				dados[linha].ID = atoi(auxArquivo);
				}
			if(contador == 1){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].ETNIA,auxArquivo);
				}
			if(contador == 2){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].SEXO,auxArquivo);
				}
			if(contador == 3){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].MUNICIPIO_RESIDENCIA,auxArquivo);
				}
			if(contador == 4){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].CLASSIFICACAO,auxArquivo);
				}
			if(contador == 5){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].SINTUACAO_ATUAL,auxArquivo);
				}
			if(contador == 6){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DATA_RESULTADO_EXAME,auxArquivo);
				}
			if(contador == 7){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DATA_ATENDIMENTO,auxArquivo);
				}
				if(contador == 8){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].TIPO_COLETA,auxArquivo);
				}
			if(contador == 9){
				strcpy(auxArquivo,campo);
				dados[linha].IDADE = atoi(auxArquivo);
				}
			if(contador == 10){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].FLG_OBITO,auxArquivo);
				}
			if(contador == 11){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DATA_OBITO,auxArquivo);
				}
			if(contador == 12){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].VALID_OBITO,auxArquivo);
				}
			if(contador == 13){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].AUSEGIA,auxArquivo);
				}
			if(contador == 14){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].ANOSMIA,auxArquivo);
				}
			if(contador == 15){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].FEBRE,auxArquivo);
				}
			if(contador == 16){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].TOSSE,auxArquivo);
				}
			if(contador == 17){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].CEFALEIA,auxArquivo);
				}
			if(contador == 18){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DIFICULDADE_RESPIRATORIA,auxArquivo);
				}
			if(contador == 19){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DISPINEIA,auxArquivo);
				}
			if(contador == 20){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].MIALGIA,auxArquivo);
				}
			if(contador == 21){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].SATURACAO_MENOR_NOVENTA_CINCO,auxArquivo);
				}
			if(contador == 22){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].ADINOFAGIA,auxArquivo);
				}
			if(contador == 23){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DIARREIA,auxArquivo);
				}
			if(contador == 24){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].ADINAMIA,auxArquivo);
				}
			if(contador == 25){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].NAUSEA_VOMITO,auxArquivo);
				}
			if(contador == 26){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].CORIZA,auxArquivo);
				}
			if(contador == 27){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].NAO_INFORMADO,auxArquivo);
				}
			if(contador == 28){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DOENCA_CARDIOVASCULAR,auxArquivo);
				}
			if(contador == 29){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DIABETES,auxArquivo);
				}
			if(contador == 30){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DOENCA_RESPIRATORIA_CRONICA,auxArquivo);
				}
			if(contador == 31){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].HIPERTENSAO,auxArquivo);
				}
			if(contador == 32){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].PACIENTE_ONCOLOGICO,auxArquivo);
				}
			if(contador == 33){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].IDOSO,auxArquivo);
				}
			if(contador == 34){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].PROFISSIONAL_SAUDE,auxArquivo);
				}
			if(contador == 35){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].OBSIDADE,auxArquivo);
				}
			if(contador == 36){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DOENCA_RENAL_CRONICA,auxArquivo);
				}
			if(contador == 37){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].DOENCA_AUTO_IMUNE,auxArquivo);
				}
			if(contador == 38){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].ASMA,auxArquivo);
				}
			if(contador == 39){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].SEM_COMORBIDADE,auxArquivo);
				}
			if(contador == 40){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].FATOR_NAO_INFORMADO,auxArquivo);
				}
			if(contador == 41){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].OUTROS_FATORES,auxArquivo);
				}
			if(contador == 42){
				strcpy(auxArquivo,campo);
				strcpy(dados[linha].PNEUMOPATIA,auxArquivo);
				}
			campo = strtok(NULL,",");
			contador++;
		}
			linha++;
	}
	fclose(arq);
imprimirOriginal(dados,tam);
}
void imprimirOriginal(struct registro dados[], int tam){
	int i;	
		for(i = 1;i < tam;i++){
		printf("____________________________________________\n");
        printf("  ID:\t\t\t\t     %d\n",dados[i].ID);
		printf("  ETNIA:\t\t\t    %s\n", dados[i].ETNIA);
		printf("  SEXO:\t\t\t\t    %s\n ", dados[i].SEXO);
		printf(" MUNICIPIO_RESIDENCIA:\t\t    %s\n", dados[i].MUNICIPIO_RESIDENCIA);
		printf("  CLASSIFICACAO:\t\t    %s\n  ", dados[i].CLASSIFICACAO);
		printf("SINTUACAO_ATUAL:\t\t    %s\n  ", dados[i].SINTUACAO_ATUAL);
		printf("DATA_RESULTADO_EXAME:\t\t    %s\n  ", dados[i].DATA_RESULTADO_EXAME);
		printf("DATA_ATENDIMENTO?:\t\t    %s \n", dados[i].DATA_ATENDIMENTO);
		printf("  TIPO_COLETA:\t\t\t    %s\n",dados[i].TIPO_COLETA);
		printf("  IDADE:\t\t\t     %d\n", dados[i].IDADE);
		printf("  FLG_OBITO:\t\t\t    %s \n", dados[i].FLG_OBITO);
		printf("  DATA_OBITO:\t\t\t    %s\n", dados[i].DATA_OBITO);
		printf("  VALID_OBITO:\t\t\t %s \n", dados[i].VALID_OBITO);
		printf("  AUSEGIA:\t\t\t %s\n", dados[i].AUSEGIA);
		printf("  ANOSMIA:\t\t\t    %s \n", dados[i].ANOSMIA);
		printf("  FEBRE:\t\t\t    %s\n", dados[i].FEBRE);
		printf("  TOSSE:\t\t\t    %s \n", dados[i].TOSSE);
		printf("  CEFALEIA:\t\t\t    %s \n", dados[i].CEFALEIA);
		printf("  DIFICULDADE_RESPIRATORIA:\t\t\t %s \n",dados[i].DIFICULDADE_RESPIRATORIA);
		printf("  DISPINEIA:\t\t\t    %s \n", dados[i].DISPINEIA);
		printf("  MIALGIA:\t\t\t    %s \n", dados[i].MIALGIA);
		printf("  SATURAÇÃO_MENOR_NOVENTA_CINCO:    %s\n", dados[i].SATURACAO_MENOR_NOVENTA_CINCO);
		printf("  ADINOFAGIA:\t\t\t %s\n", dados[i].ADINOFAGIA);
		printf("  DIARREIA:\t\t\t %s\n", dados[i].DIARREIA);
		printf("  ADINAMIA:\t\t\t %s\n", dados[i].ADINAMIA);
		printf("  NAUSEA_VOMITO:\t\t\t %s\n", dados[i].NAUSEA_VOMITO);
		printf("  CORIZA:\t\t\t %s\n", dados[i].CORIZA);
		printf("  NÃO_INFORMADO:\t\t\t %s\n", dados[i].NAO_INFORMADO);
		printf("  DOENÇA_CARDIOVASCULAR:\t    %s\n", dados[i].DOENCA_CARDIOVASCULAR);
		printf("  DIABETES:\t\t\t %s\n", dados[i].DIABETES);
		printf("  DOENÇA_RESPIRATÓRIA_CRONICA:\t\t\t %s\n", dados[i].DOENCA_RENAL_CRONICA);
		printf("  HIPERTENSÃO:\t\t\t     %s\n", dados[i].HIPERTENSAO);
		printf("  PACIENTE_ONCOLOGICO: \t\t     %s\n", dados[i].PACIENTE_ONCOLOGICO);
		printf("  IDOSO:\t\t\t     %s\n", dados[i].IDOSO);
		printf("  PROFISSIONAL_SAÚDE:\t\t\t %s\n", dados[i].PROFISSIONAL_SAUDE);
		printf("  OBSIDADE:\t\t\t %s\n", dados[i].OBSIDADE);
		printf("  DOENÇA_RENAL_CRONICA:\t\t\t %s\n", dados[i].DOENCA_RENAL_CRONICA);
		printf("  DOENÇA_AUTO_IMUNE:\t\t\t %s\n", dados[i].DOENCA_AUTO_IMUNE);
		printf("  ASMA:\t\t\t %s\n", dados[i].ASMA);
		printf("  SEM_COMORBIDADE:\t\t\t %s\n", dados[i].SEM_COMORBIDADE);
		printf("  FATOR_NÃO_INFORMADO:\t\t\t %s\n", dados[i].FATOR_NAO_INFORMADO);
		printf("  OUTROS_FATORES: \t\t\t%s\n", dados[i].OUTROS_FATORES);
		printf("  PNEUMOPATIA:\t\t\t %s\n", dados[i].PNEUMOPATIA);
	}
}

