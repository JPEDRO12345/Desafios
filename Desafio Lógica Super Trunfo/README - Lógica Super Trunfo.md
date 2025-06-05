# 🃏 Super Trunfo de Cidades - Comparador de Cartas em C

Este projeto é uma evolução da implementação de um jogo estilo **Super Trunfo**, com ênfase em **cidades brasileiras** e atributos socioeconômicos. Foi desenvolvido na linguagem **C** como parte da disciplina de Introdução à Programação de Computadores na **Estácio**, abrangendo níveis progressivos de desafio: **Novato**, **Aventureiro** e **Mestre**.

## 📌 Objetivos por Nível

### 🟢 Nível Novato - Comparação Básica

- Cadastro manual de **duas cartas** com os seguintes atributos:
  - Estado (`char[]`)
  - Código da carta (`char[]`)
  - Nome da cidade (`char[]`)
  - População (`int`)
  - Área em km² (`float`)
  - PIB (`float`)
  - Número de pontos turísticos (`int`)
- Cálculo automático de:
  - **Densidade Populacional** = População / Área
  - **PIB per capita** = PIB / População
- Comparação entre as cartas baseada em **um único atributo fixo** definido no código.
  - Para todos os atributos (exceto densidade populacional), o maior valor vence.
  - Para densidade populacional, o **menor valor** vence.
- Exibição do resultado da comparação de forma clara.

---

### 🟡 Nível Aventureiro - Menu Interativo

- Inclusão de **menu interativo** usando `switch` para seleção do atributo de comparação.
- Implementação da lógica de comparação com base na **escolha do jogador**.
- Regras de comparação:
  - Atributos como população, área, PIB, pontos turísticos, PIB per capita: maior valor vence.
  - Densidade populacional: **menor valor vence**.
- Exibição detalhada:
  - Nome das cidades
  - Atributo utilizado
  - Valores comparados
  - Resultado (Carta vencedora ou empate)

---

### 🔴 Nível Mestre - Comparação Avançada

- Menu com seleção de **dois atributos distintos** para a comparação.
- Exclusão dinâmica da primeira opção no menu para impedir repetição de atributos.
- Comparação das cartas em ambos os atributos com aplicação das regras de vitória.
- **Soma dos valores comparados** é usada para determinar a carta vencedora.
- Tratamento de empate caso as somas sejam iguais.
- Exibição clara com:
  - Atributos escolhidos
  - Valores por carta
  - Soma final por carta
  - Resultado (Carta vencedora ou empate)

---

## 🛠️ Tecnologias Utilizadas

- Linguagem: **C**
- Compilador: `gcc` (ou outro compatível com C ANSI)
- Ambiente: Terminal

---

## ▶️ Como Executar

1. Clone este repositório:
   ```bash
   git clone https://github.com/JPEDRO12345/Desafios.git
   ```

2. Compile o programa:
   ```bash
   gcc "Desafio Lógica Super Trunfo.c" -o supertrunfo
   ```

3. Execute no terminal:
   ```bash
   ./supertrunfo
   ```

---

## 🎓 Sobre o Projeto

Desenvolvido por **João Pedro Aragão dos Santos** como parte de um **trabalho acadêmico** na **Estácio**. O projeto busca promover o aprendizado prático de:

- Estruturas condicionais (`if`, `else`, `switch`)
- Operadores ternários
- Lógica de comparação e validação
- Manipulação de `float`, `int`, `unsigned long int`
- Criação de interfaces no terminal

---

## 📘 Licença
Este projeto tem fins **estritamente educacionais** e **não possui licença de código aberto**.