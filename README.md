# bccpolya
Aproximação de raiz de números reais

Descrição do problema:

Apresentar uma resolução para o problema proposto:

Calcular uma aproximação da raiz quadrada de um numero real, logo, esse numero
tem que ser maior ou igual a zero, de modo que satisfaça a proposta.
Independentemente se a raiz é exata ou inexata, a resposta terá que ser dada.

Linguagem Matemática:

Para a existência de raízes reais é necessário que o valor entrado seja positivo
ou igual a zero. Caso contrario, a resposta obtida caso o valor seja menor que
zero nao resolve o problema.

O calculo é baseado na definição de raiz quadrada: 
Dado um número X, único e não negativo que, quando multiplicado
por si mesmo, se iguala a x.

Português estruturado:

PONTO FLUTUANTE raiz_quadrada(PONTO FLUTUANTE numero)

INICIO:{

   PONTO FLUTUANTE numero

   ESCREVER "Entre com um numero positivo : "
   numero <- 0

   ESCREVER " A raiz quadrada de numero é raiz_quadrada "

   fim	


}	
	

  PONTO FLUTUANTE raiz_quadrada(PONTO FLUTUANTE numero){
	
	INTEIRO n
	PONTO FLUTUANTE recorre

	PARA n<-0; n<10; n++
		recorre = recorre /2 +numero/(2* recorre);
	fim_PARA

	fim_recorre
}

George Polya - Matematico Hungaro, formulou as quatro etapas essenciais para a resolução de problemas:

1ª Etapa - Compreender o problema;

2ª Etapa - Traçar um Plano;

3ª Etapa - Colocar o plano em prática;

4ª Etapa - Comprovar os Resultados.

Logo, todas essas etapas foram e são necessárias para a resolução de problemas de todo o tipo.

Fonte : https://pt.wikipedia.org/wiki/George_P%C3%B3lya



