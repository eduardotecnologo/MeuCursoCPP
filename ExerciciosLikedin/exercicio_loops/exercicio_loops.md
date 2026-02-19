# Exercício de Fixação: O Desafio do "Contador de Números"

## 📝 Cenário

Você foi contratado para desenvolver um sistema que processa uma lista de números digitados pelo usuário. O sistema deve ser capaz de identificar o maior número, o menor número e a média de todos os números digitados.

## 🎯 Objetivo

Escreva um programa em C++ que leia uma sequência de números inteiros positivos do usuário e, ao final, exiba as estatísticas da sequência.

## 📋 Regras do Sistema

O programa deve:

- Pedir ao usuário para digitar um número inteiro positivo
- Continuar pedindo números até que o usuário digite `0` (zero) para encerrar a entrada
- Ignorar números negativos (exibir uma mensagem de erro e pedir o próximo número)
- Exibir ao final:
  - A quantidade total de números válidos digitados (excluindo o zero)
  - A soma total de todos os números válidos
  - A média aritmética dos números válidos
  - O maior número digitado
  - O menor número digitado

## 💻 O Que Seu Programa Deve Fazer

- Usar um laço `while` ou `do-while` para ler os números continuamente
- Usar variáveis para armazenar a soma, a quantidade, o maior e o menor número
- Usar a estrutura `if` para validar os números e atualizar as estatísticas
- Exibir as estatísticas formatadas na tela

## 💡 Dica de Especialista

> Para encontrar o maior e o menor número, você pode inicializar as variáveis `maior` e `menor` com o primeiro número válido digitado. Depois, a cada novo número, compare-o com os valores atuais de `maior` e `menor` e atualize-os se necessário!

## 🚀 Exemplo de Saída Esperada

```
--- SISTEMA DE ESTATISTICAS ---
Digite um numero positivo (0 para sair): 10
Digite um numero positivo (0 para sair): 20
Digite um numero positivo (0 para sair): -5
ERRO: Numero negativo ignorado.
Digite um numero positivo (0 para sair): 30
Digite um numero positivo (0 para sair): 0

> ESTATISTICAS DA SEQUENCIA:
> Total de numeros validos: 3
> Soma total: 60
> Media aritmetica: 20.0
> Maior numero: 30
> Menor numero: 10
```
