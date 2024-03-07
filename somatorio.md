# Análise do Algoritmo de Somatório

## Complexidade de Tempo
Vamos analisar quanto tempo o algoritmo demora para ser executado:

- O loop externo executa n vezes, onde n é o valor fornecido pelo usuário.
- Dentro do loop externo, há outro loop que também executa n vezes, no máximo.
- Portanto, o tempo de execução do algoritmo é proporcional a n^2, onde n é o valor fornecido pelo usuário.

## Complexidade de Espaço
Vamos analisar quanto espaço de memória o algoritmo utiliza:

- O algoritmo utiliza um espaço de memória constante, independente do valor de n. Ele apenas armazena algumas variáveis locais, como somaTotal e somaParcial.
- Portanto, a quantidade de memória utilizada pelo algoritmo não aumenta com o tamanho de n.

Resumindo, a análise do algoritmo é:

- Complexidade de tempo: Proporcional a n^2.
- Complexidade de espaço: Constante.
