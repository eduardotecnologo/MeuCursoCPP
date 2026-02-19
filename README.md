# 🚀 C++: A Base de Ferro – Do Zero ao Especialista

[![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-orange.svg)]()

Um curso completo e prático de C++ moderno, focado em fundamentos sólidos e conceitos avançados de engenharia de software.

## 📋 Índice

- [Sobre o Projeto](#sobre-o-projeto)
- [Sumário do Curso](#sumário-do-curso)
- [Estrutura do Projeto](#estrutura-do-projeto)
- [Pré-requisitos](#pré-requisitos)
- [Como Usar](#como-usar)
- [Capítulos](#capítulos)
  - [Capítulo 1: A Anatomia do C++](#capítulo-1-a-anatomia-do-c)
  - [Capítulo 2: O Fluxo da Lógica](#capítulo-2-o-fluxo-da-lógica)
- [Tecnologias](#tecnologias)
- [Contribuindo](#contribuindo)
- [Licença](#licença)
- [Autor](#autor)
- [Recursos Adicionais](#recursos-adicionais)

---

## Sobre o Projeto

Este repositório contém exemplos práticos e exercícios do curso **"C++: A Base de Ferro – Do Zero ao Especialista"**. O objetivo é fornecer uma compreensão profunda dos conceitos fundamentais e avançados de C++, desde os básicos até técnicas de otimização de performance.

---

## 📚 Sumário do Curso

| Capítulo | Tema                                   | Conceitos                                   |
| -------- | -------------------------------------- | ------------------------------------------- |
| 1        | A Anatomia do C++ e o Primeiro Contato | Onde estamos e como o código vira software  |
| 2        | O Fluxo da Lógica                      | Variáveis, Tipos e Controle                 |
| 3        | A Memória Desvendada                   | Ponteiros, Referências e o Stack vs Heap    |
| 4        | Engenharia de Objetos                  | POO Moderna e RAII                          |
| 5        | A Biblioteca Padrão (STL)              | Containers e Algoritmos de Alta Performance |
| 6        | O Poder dos Templates                  | Programação Genérica                        |
| 7        | Concorrência e Performance             | Multithreading e Otimização de Baixo Nível  |

---

## 📁 Estrutura do Projeto

```
MeuCursoCPP/
├── README.md                    # Este arquivo
├── CapituloOne.cpp             # Exemplos do Capítulo 1
├── CapituloOne.h               # Header do Capítulo 1
├── CalculaIdade/               # Projeto prático: Calculadora de Idade
│   ├── main.cpp                # Código principal
│   └── CalculaIdade.cbproj
├── Project1.cbproj             # Arquivo de projeto Borland C++
├── Win32/                       # Arquivos compilados (Debug)
└── __history/                   # Histórico de versões
```

---

## 🔧 Pré-requisitos

Antes de começar, você precisará ter instalado:

- **Compilador C++**: GCC, Clang, MSVC ou Borland C++
- **IDE** (opcional): Visual Studio Code, Code::Blocks, Dev-C++ ou similares
- **CMake ou ferramenta de build** (opcional)

### Instalação em Diferentes Sistemas

#### Windows

```bash
# Usando MinGW (GCC)
# Faça download em: https://www.mingw-w64.org/
# Ou use: choco install mingw-w64

# Ou use MSVC (recomendado com Visual Studio)
```

#### Linux

```bash
# Ubuntu/Debian
sudo apt-get install build-essential

# Fedora
sudo dnf install gcc gcc-c++ make
```

#### macOS

```bash
# Xcode Command Line Tools
xcode-select --install
```

---

## 💻 Como Usar

### Compilar e Executar um Projeto

#### Usando Compilador Diretamente (g++)

```bash
# Para CapituloOne.cpp
g++ -std=c++17 -o CapituloOne CapituloOne.cpp
./CapituloOne  # Linux/Mac
# ou CapituloOne.exe  # Windows
```

#### Usando IDE (Borland C++, Code::Blocks, etc.)

1. Abra o projeto (`.cbproj`)
2. Clique em **Build** ou **Compile**
3. Execute pressionando **F9** ou clicando em **Run**

---

## 📖 Capítulos

### Capítulo 1: A Anatomia do C++ e o Primeiro Contato

Neste capítulo, não vamos apenas escrever um "Hello World". Vamos entender o que acontece nos bastidores.

**Arquivo**: [CapituloOne.cpp](CapituloOne.cpp)

#### 1.1 O que é o C++ de Verdade?

C++ não é apenas uma linguagem; é uma **ferramenta de engenharia**. Diferente de linguagens como Python ou JavaScript, que rodam sobre uma "máquina virtual" ou interpretador, o C++ é compilado diretamente para código de máquina.

**Isso significa que:**

- ⚡ **Performance Máxima**: Não há intermediários entre seu código e o processador
- 🎯 **Responsabilidade**: Você tem o controle total da memória (o que é um superpoder e um perigo)

#### 1.2 O Ciclo de Vida do Código

Quando você aperta **"Build"**, quatro etapas acontecem:

1. **Pré-processamento**: O compilador limpa o código, resolve diretivas (como `#include`)
2. **Compilação**: O código C++ é transformado em código Assembly (instruções do processador)
3. **Montagem (Assembly)**: O Assembly vira código binário (objetos `.obj` ou `.o`)
4. **Linkagem**: O Linker junta seus arquivos e bibliotecas em um único executável (`.exe` ou binário Linux)

#### 1.3 O Primeiro Programa Analisado

Vamos olhar para o código mais simples, mas com "olhos de engenheiro":

```cpp
#include <iostream> // 1. Inclui a biblioteca de entrada e saída

int main() { // 2. O ponto de entrada obrigatório de todo programa C++
    std::cout << "C++ e a base de tudo!" << std::endl; // 3. Saída de texto
    return 0; // 4. Indica ao SO que o programa terminou com sucesso
}
```

**Explicação dos componentes:**

- **`std::cout`**: O `std::` indica que `cout` pertence ao namespace padrão (Standard). Isso evita conflitos de nomes em projetos grandes
- **`<<`**: É o operador de inserção. Imagine que você está "empurrando" o texto para dentro do fluxo de saída (o terminal)

---

### Capítulo 2: O Fluxo da Lógica (Variáveis e Controle)

Aprenderemos sobre tipos de dados, variáveis e como criar programas que tomam decisões.

**Arquivo**: [CalculaIdade/main.cpp](CalculaIdade/main.cpp)

#### 2.1 Guardando Informações (Variáveis)

Imagine que o computador é uma grande estante cheia de gavetas. Cada gaveta pode guardar um tipo de coisa. No C++, você precisa colocar uma etiqueta na gaveta dizendo o que tem dentro.

**Os 3 Tipos Essenciais para começar:**

- **`int`** (Inteiro): Para números sem vírgula. Ex: `10`, `-5`, `1000`
- **`double`**: Para números com vírgula (decimais). Ex: `10.5`, `3.14`
- **`std::string`**: Para textos. Ex: `"Eduardo"`, `"C++"`

#### 2.2 Como criar uma variável

A regra é sempre: **TIPO + NOME + VALOR**.

```cpp
int idade = 25;
double preco = 19.90;
std::string nome = "Eduardo";
```

#### 2.3 Fazendo Contas Simples

O C++ funciona como uma calculadora poderosa. Exemplo de programa que calcula a idade em dias:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string nome = "Manolo";
    int anos = 20;
    int dias_no_ano = 365;

    int total_dias = anos * dias_no_ano;

    std::cout << "Ola, " << nome << "!" << std::endl;
    std::cout << "Voce tem aproximadamente " << total_dias << " dias de vida." << std::endl;

    return 0;
}
```

#### 2.4 Interagindo com o Usuário (std::cin)

Até agora, escrevemos os valores direto no código. Mas um programa de verdade pergunta as coisas para o usuário. Para isso, usamos o **`std::cin`** (C-Input).

**Pense assim:**

- **`std::cout`** → O computador fala
- **`std::cin`** → O computador ouve

##### Exemplo de Diálogo

```cpp
#include <iostream>

int main() {
    int numero_favorito;

    std::cout << "Qual o seu numero favorito? ";
    std::cin >> numero_favorito; // O programa para e espera você digitar

    std::cout << "Que legal! O meu tambem e " << numero_favorito << std::endl;

    return 0;
}
```

##### O que é o std::cin?

Se `std::cout` é a "boca" do programa (ele fala), o `std::cin` é o ouvido — escuta o que o usuário digita no teclado.

**Em outras palavras:**

- `cout` = **saída**
- `cin` = **entrada**

Simples, mas poderoso.

##### Exemplo Básico

```cpp
int idade;

std::cout << "Digite sua idade: ";
std::cin >> idade;

std::cout << "Voce tem " << idade << " anos!";
```

Nesse momento, o programa para tudo, espera o usuário digitar algo, e só continua quando recebe a entrada. Esse comportamento é essencial para praticamente qualquer aplicação interativa.

##### Por que isso é importante para quem está começando?

Porque ao dominar `std::cin`, você desbloqueia:

- Programas que fazem perguntas
- Sistemas que recebem decisões do usuário
- Calculadoras
- Formulários
- Menus interativos
- Jogos no terminal

É aqui que o seu código deixa de ser apenas "um texto que aparece na tela" e se transforma em um **programa de verdade**.

##### Dica para Iniciantes

Sempre pense em `cout` e `cin` como um diálogo:

- **Pergunto** → `cout`
- **Espero a resposta** → `cin`
- **Uso a resposta** → lógica do programa

Simples assim.

#### 2.5 Exercício de Fixação – "Seu Primeiro Cadastro Simples"

Crie um programa em C++ que:

1. **Pergunte ao usuário:**
   - Seu nome
   - Sua idade
   - Sua cidade
   - Seu hobby favorito

2. **Armazene** essas informações em variáveis.

3. **Ao final**, exiba uma mensagem no estilo:
   ```
   Olá, [nome]!
   Você tem [idade] anos, mora em [cidade]
   e gosta de [hobby]. Continue estudando C++!
   ```

**Regras:**

- Use `std::cin` para receber dados
- Use `std::cout` para mostrar a mensagem final
- Utilize os tipos corretos para cada informação:
  - `nome` → `std::string`
  - `idade` → `int`
  - `cidade` → `std::string`
  - `hobby` → `std::string`

**Dica extra para alunos curiosos:**

Se quiser deixar mais avançado, aprenda a usar `std::getline(std::cin, variavel)` para capturar textos com espaços.

**Objetivo do exercício:**

Fixar:

- Entrada e saída (`cin`/`cout`)
- Declaração de variáveis
- Manipulação de texto e números
- Interação básica com o usuário

#### 2.6 Desafio Super Simples – "O seu primeiro App"

Crie um programa que:

1. Pergunte o nome do usuário
2. Pergunte o ano de nascimento
3. Pergunte o ano atual
4. Calcule a idade (Ano Atual - Ano de Nascimento) e mostre na tela: **"Fulano, você tem X anos."**

#### 2.7 O Poder da Decisão (if, else e a Lógica Booleana)

Até agora, nossos programas eram "trilhos de trem": eles seguiam uma linha reta do início ao fim, executando comando por comando sem questionar nada. Mas o software de verdade precisa decidir!

Neste capítulo, vamos ensinar seu programa a pensar e escolher caminhos diferentes com base nos dados que ele recebe!

##### A Estrutura if (Se...)

O if é a ferramenta mais básica de decisão. Ele avalia uma condição: se ela for verdadeira, o código dentro das chaves {} é executado!

```cpp
int idade;

std::cout << "Digite sua idade: ";
std::cin >> idade;

if (idade >= 18) {
    std::cout << "Voce e maior de idade. Acesso liberado!" << std::endl;
}
```

##### O Caminho Alternativo: else (Senão...)

E se a condição for falsa? O else define o que deve acontecer caso o if não seja atendido!

```cpp
if (idade >= 18) {
    std::cout << "Acesso liberado!";
} else {
    std::cout << "Acesso negado. Voce precisa ter 18 anos.";
}
```

##### Múltiplas Escolhas: else if

Às vezes, a vida não é apenas "sim" ou "não". Para verificar várias condições em sequência, usamos o else if. O programa testa a primeira; se falhar, testa a segunda, e assim por diante!

```cpp
double nota;

std::cout << "Digite a nota do aluno (0 a 10): ";
std::cin >> nota;

if (nota >= 9.0) {
    std::cout << "Excelente! Aprovado manolo!";
} else if (nota >= 7.0) {
    std::cout << "Aprovado!";
} else if (nota >= 5.0) {
    std::cout << "Recuperacao!";
} else {
    std::cout << "Reprovado!";
}
```

##### Operadores Lógicos: Combinando Decisões!

Para criar condições mais complexas, usamos os operadores lógicos. Eles são o "tempero" da lógica de programação!

- **`&&` (E / AND)**: Só é verdadeiro se ambas as condições forem verdadeiras.
  - Ex: `if (idade >= 18 && tem_carteira == true)`

- **`||` (OU / OR)**: É verdadeiro se pelo menos uma das condições for verdadeira.
  - Ex: `if (dia == "sabado" || dia == "domingo")`

- **`!` (NÃO / NOT)**: Inverte o valor. O que é verdadeiro vira falso e vice-versa.
  - Ex: `if (!esta_chovendo)`

##### O Atalho: switch

Quando você tem muitas opções baseadas em um único valor inteiro ou caractere (como um menu), o switch é muito mais limpo que vários if/else.

```cpp
int opcao;

std::cout << "1- Iniciar | 2- Configurar | 3- Sair\nEscolha: ";
std::cin >> opcao;

switch (opcao) {
    case 1:
        std::cout << "Iniciando jogo...";
        break; // O 'break' e obrigatorio para nao executar os de baixo!
    case 2:
        std::cout << "Abrindo configuracoes...";
        break;
    case 3:
        std::cout << "Saindo...";
        break;
    default:
        std::cout << "Opcao invalida!";
        break;
}
```

📝 **Exercício de Fixação: O Desafio do "Segurança Digital"**

---

### 📌 Cenário

Você foi contratado para desenvolver o módulo de acesso de um sistema de **alta segurança**.  
O sistema não depende apenas de uma senha, mas de uma **combinação de fatores** para autorizar a entrada.

---

### 🎯 Objetivo

Escreva um programa em **C++** que leia **três informações** do usuário e decida se o acesso será **CONCEDIDO** ou **NEGADO**.

---

### 🔐 Regras de Acesso

Para o acesso ser **CONCEDIDO**, o usuário precisa atender a **UMA** das duas condições abaixo:

- **Condição A**
  - Ter a **senha secreta** (defina uma senha numérica, por exemplo: `1234`)
  - **E** ter **mais de 18 anos**

- **Condição B**
  - Ser um **Usuário VIP**
    - O usuário deve digitar `1` para **Sim** ou `0` para **Não**
  - VIPs têm acesso garantido **independente da idade**, **desde que acertem a senha**

---

### 🧠 O que seu programa deve fazer

- Pedir ao usuário para digitar a **Senha** (`int`)
- Pedir ao usuário para digitar a **Idade** (`int`)
- Pedir ao usuário para informar se é **VIP** (`1` para Sim, `0` para Não)
- Usar a estrutura `if` com **operadores lógicos** (`&&` e `||`) para avaliar as regras
- Exibir na tela:
  - **"ACESSO CONCEDIDO"**
  - ou **"ACESSO NEGADO"**

---

### 💡 Dica de Especialista

> _"Tente resolver este exercício usando apenas **UM ÚNICO `if`** bem estruturado com parênteses e operadores lógicos.  
> Isso vai treinar sua capacidade de criar condições complexas e limpas!"_

### Capítulo 2.5: A Força da Repetição (Loops: while e for)

Imagine que você precisa imprimir "C++ é a base de tudo" 500 vezes!

Você poderia escrever 500 linhas de `std::cout`, mas um bom programador é, por definição, alguém que busca a **eficiência** (e evita a fadiga)!

No C++, temos **três ferramentas principais** para repetir tarefas:

#### 1️⃣ O Laço `while` (Enquanto...)

O `while` é o mais simples. Ele diz ao computador: **"Enquanto esta condição for verdadeira, continue repetindo este bloco de código"**!

```cpp
int contador = 1;

while (contador <= 5) {
    std::cout << "Repeticao numero: " << contador << std::endl;
    contador++; // Importante: se voce esquecer isso, o loop sera infinito! 😉
}
```

**Uso ideal:** Quando você não sabe exatamente quantas vezes a repetição vai acontecer (ex: esperar o usuário digitar a senha correta).

---

#### 2️⃣ O Laço `for` (Para...)

O `for` é o **"canivete suíço"** das repetições. Ele agrupa a criação da variável, a condição e o incremento em uma única linha. É muito mais limpo e difícil de causar erros de "loop infinito"!

```cpp
// Sintaxe: for (inicio; condicao; incremento)

for (int i = 1; i <= 5; i++) {
    std::cout << "Contagem: " << i << std::endl;
}
```

**Uso ideal:** Quando você sabe exatamente quantas vezes quer repetir (ex: de 1 a 10, ou o tamanho de uma lista).

---

#### 3️⃣ O Laço `do-while` (Faça... enquanto!)

Diferente do `while` comum, o `do-while` executa o código **pelo menos uma vez** antes de testar a condição.

```cpp
int opcao;

do {
    std::cout << "Menu: 1-Jogar | 0-Sair: ";
    std::cin >> opcao;
} while (opcao != 0);
```

**Uso ideal:** Menus de sistemas, onde você precisa mostrar as opções ao menos uma vez para o usuário escolher.

---

### 🚀 Desafio Prático: Loops e Lógica

O conteúdo ficou denso? Para facilitar, preparei um **exercício de fixação 'casca grossa'** sobre Loops e Lógica lá no meu GitHub.

O desafio é criar um **Analisador de Estatísticas Numéricas**. É o tipo de lógica que separa quem entende o código de quem apenas copia.

#### 📂 Como Participar

1. Acesse o repositório: [ExerciciosLikedin/exercicio_loops](ExerciciosLikedin/exercicio_loops/)
2. Faça um **Fork** do projeto
3. Resolva o desafio no arquivo `exercicio_loops.cpp`
4. Me marque aqui ou mande um **Pull Request**! Vou adorar revisar o código de vocês!

---

### 🧠 Reflexão do Capítulo 2.5

Agora seu programa pode processar **milhares de informações em milissegundos**. Mas note algo importante: todas as variáveis que usamos até agora guardam apenas **um valor por vez**.

**E se precisarmos guardar:**

- Uma lista de 100 nomes?
- 1000 temperaturas ao mesmo tempo?

Para isso, precisamos de **estruturas que agrupam dados**. Esse é o tema do nosso próximo capítulo: **Capítulo 2.6 – Arrays e Vetores (Coleções de Dados)**.

---

## 💻 Tecnologias

- **Linguagem**: C++ 17
- **Compiladores Suportados**: GCC, Clang, MSVC, Borland C++
- **IDEs Compatíveis**: Visual Studio Code, Dev-C++, Code::Blocks, Visual Studio, Borland C++
- **Bibliotecas**: Standard Library (iostream, string, cmath, etc.)

---

## 🤝 Contribuindo

Contribuições são bem-vindas! Se você encontrar erros, tiver sugestões de melhorias ou quiser adicionar novos exemplos:

1. Faça um **Fork** do repositório
2. Crie uma branch para sua feature (`git checkout -b feature/melhoria`)
3. Commit suas mudanças (`git commit -m 'Adiciona melhoria'`)
4. Push para a branch (`git push origin feature/melhoria`)
5. Abra um **Pull Request**

---

## 📝 Licença

Este projeto está sob a licença **MIT**. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

## 👨‍💻 Autor

**Eduardo** - Criador e mantenedor deste curso

📧 Entre em contato ou abra uma **Issue** se tiver dúvidas!

---

## 📚 Recursos Adicionais

- [cppreference.com](https://en.cppreference.com/) - Documentação completa de C++
- [isocpp.org](https://isocpp.org/) - Site oficial de C++
- [Effective C++](https://www.aristeia.com/) - Livro clássico sobre C++
- [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines) - Guia de boas práticas

---

**Última atualização**: Fevereiro de 2026

**Bom aprendizado! 🚀 C++ aguarda por você.**
