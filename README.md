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
- [Tecnologias](#tecnologias)
- [Contribuindo](#contribuindo)
- [Licença](#licença)

---

## Sobre o Projeto

Este repositório contém exemplos práticos e exercícios do curso **"C++: A Base de Ferro – Do Zero ao Especialista"**. O objetivo é fornecer uma compreensão profunda dos conceitos fundamentais e avançados de C++, desde os básicos até técnicas de otimização de performance.

---

## 📚 Sumário do Curso

| Capítulo | Tema | Conceitos |
|----------|------|----------|
| 1 | A Anatomia do C++ e o Primeiro Contato | Onde estamos e como o código vira software |
| 2 | O Fluxo da Lógica | Variáveis, Tipos e Controle |
| 3 | A Memória Desvendada | Ponteiros, Referências e o Stack vs Heap |
| 4 | Engenharia de Objetos | POO Moderna e RAII |
| 5 | A Biblioteca Padrão (STL) | Containers e Algoritmos de Alta Performance |
| 6 | O Poder dos Templates | Programação Genérica |
| 7 | Concorrência e Performance | Multithreading e Otimização de Baixo Nível |

---

## 📁 Estrutura do Projeto

```
MeuCursoCPP/
├── README.md                    # Este arquivo
├── CapituloOne.cpp             # Exemplos do Capítulo 1
├── CapituloOne.h               # Header do Capítulo 1
├── Project1.cbproj             # Arquivo de projeto Borland C++
├── CalculaIdade/               # Projeto prático: Calculadora de Idade
│   ├── main.cpp                # Código principal
│   └── CalculaIdade.cbproj
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

## � Como Usar

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
#### 2.3 Interagindo com o Usuário (std::cin)

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

##### Exemplo básico

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

##### Dica para iniciantes

Sempre pense em `cout` e `cin` como um diálogo:

- **Pergunto** → `cout`
- **Espero a resposta** → `cin`
- **Uso a resposta** → lógica do programa

Simples assim.

##### Exercício de Fixação – "Seu Primeiro Cadastro Simples"

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

##### Desafio Super Simples (O seu primeiro "App")

Crie um programa que:

1. Pergunte o nome do usuário
2. Pergunte o ano de nascimento
3. Pergunte o ano atual
4. Calcule a idade (Ano Atual - Ano de Nascimento) e mostre na tela: **"Fulano, você tem X anos."**

---
## 💻 Tecnologias

#include <iostream>

int main() {
    int numero_favorito;

    std::cout << "Qual o seu numero favorito? ";
    std::cin >> numero_favorito; // O programa para e espera voce digitar

    std::cout << "Que legal! O meu tambem e " << numero_favorito << std::endl;

    return 0;
}
🛠️ Desafio Super Simples (O seu primeiro "App")
Crie um programa que:

Pergunte o nome do usuário.
Pergunte o ano de nascimento.
Pergunte o ano atual.
Calcule a idade (Ano Atual - Ano de Nascimento) e mostre na tela: "Fulano, você tem X anos."

🧠 O que é o std::cin?
Se std::cout é a “boca” do programa (ele fala),
o std::cin é o ouvido — ele escuta o que o usuário digita no teclado.

Em outras palavras:

cout = saída
cin = entrada
Simples, mas poderoso.

💻 Exemplo básico:

int idade;

std::cout << "Digite sua idade: ";
std::cin >> idade;

std::cout << "Voce tem " << idade << " anos!";
Nesse momento, o programa para tudo, espera o usuário digitar algo,
e só continua quando recebe a entrada.
Esse comportamento é essencial para praticamente qualquer aplicação interativa.

🔍 Por que isso é importante para quem está começando?
Porque ao dominar std::cin, você desbloqueia:

programas que fazem perguntas
sistemas que recebem decisões do usuário
calculadoras
formulários
menus interativos
jogos no terminal
É aqui que o seu código deixa de ser apenas “um texto que aparece na tela”
e se transforma em um programa de verdade.

🚀 Dica para iniciantes
Sempre pense em cout e cin como um diálogo:

Pergunto → cout
Espero a resposta → cin
Uso a resposta → lógica do programa
Simples assim.

📝 Exercício de Fixação – “Seu Primeiro Cadastro Simples”
Crie um programa em C++ que:

1. Pergunte ao usuário:
Seu nome
Sua idade
Sua cidade
Seu hobby favorito
2. Armazene essas informações em variáveis.
3. Ao final, exiba uma mensagem no estilo:
Olá, [nome]!
Você tem [idade] anos, mora em [cidade]
e gosta de [hobby]. Continue estudando C++!

Regras:
Use std::cin para receber dados.
Use std::cout para mostrar a mensagem final.
Utilize os tipos corretos para cada informação:
nome → std::string
idade → int
cidade → std::string
hobby → std::string

💡 Dica extra para alunos curiosos:
Se quiser deixar mais avançado, aprenda a usar
std::getline(std::cin, variavel)
para capturar textos com espaços.

📌 Objetivo do exercício:
Fixar:

Entrada e saída (cin/cout)
Declaração de variáveis
Manipulação de texto e números
Interação básica com o usuário

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

**Última atualização**: Janeiro de 2026

int main() {
    // Criando as variáveis
    std::string nome = "Eduardo";
    int anos = 20;
    int dias_no_ano = 365;

    // Fazendo a conta
    int total_dias = anos * dias_no_ano;

    // Mostrando o resultado
    std::cout << "Ola, " << nome << "!" << std::endl;
    std::cout << "Voce tem aproximadamente " << total_dias << " dias de vida." << std::endl;

    return 0;
}

## 📁 Estrutura do Projeto

```
MeuCursoCPP/
├── CapituloOne.cpp       # Código do Capítulo 1
├── CapituloOne.h         # Header do Capítulo 1
├── Project1.cbproj       # Arquivo do projeto
├── README.md             # Este arquivo
└── __history/            # Histórico de versões
```

---

## 🎓 Como Usar Este Repositório

1. Clone o repositório
2. Abra o projeto em sua IDE preferida (Visual Studio, VS Code, CLion, etc.)
3. Navegue pelos capítulos na ordem indicada
4. Complete os exercícios práticos de cada capítulo
5. Compile e teste sua implementação

---

## 📝 Licença

Conteúdo educacional - Todos os direitos reservados

---

**Bom aprendizado! 🚀 C++ aguarda por você.**