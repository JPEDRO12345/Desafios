# ♟️ Simulador de Movimentos de Xadrez em C

Este projeto consiste em uma simulação didática dos **movimentos das peças de xadrez** utilizando estruturas de repetição e recursividade na linguagem **C**. Desenvolvido como atividade da disciplina de Introdução à Programação de Computadores da **Estácio**, o projeto evolui em três níveis: **Novato**, **Aventureiro** e **Mestre**.

---

## 📌 Objetivos por Nível

### 🟢 Nível Novato - Estruturas de Repetição

- Simulação de movimentos para três peças:
  - **Torre**: movimenta-se 5 casas para a direita usando `for`.
  - **Bispo**: movimenta-se 5 casas na diagonal superior direita usando `while`.
  - **Rainha**: movimenta-se 8 casas para a esquerda usando `do-while`.
- Impressão no console da direção de cada movimento:
  ```c
  printf("Direita\n");
  printf("Cima Direita\n");
  printf("Esquerda\n");
  ```

---

### 🟡 Nível Aventureiro - Movimento do Cavalo com Loops Aninhados

- Implementação do movimento do **Cavalo** em "L" (2 para baixo e 1 para a esquerda).
- Utilização de **loops aninhados**, incluindo pelo menos um `for` combinado com `while` ou `do-while`.
- Impressão das direções em cada etapa do movimento:
  ```
  Baixo
  Baixo
  Esquerda
  ```
- Separação visual da saída do cavalo das demais peças.

---

### 🔴 Nível Mestre - Recursividade e Lógica Avançada

- Substituição das estruturas de repetição por **funções recursivas** para:
  - **Torre**
  - **Bispo** (também com loops aninhados: vertical e horizontal)
  - **Rainha**
- Aprimoramento do movimento do **Cavalo** com:
  - Loops aninhados com múltiplas variáveis e condições.
  - Uso de `continue` e `break` para controle preciso do fluxo.
  - Novo movimento: 2 casas para cima e 1 para a direita.

---

## 🛠️ Tecnologias Utilizadas

- Linguagem: **C**
- Compilador: `gcc`
- Execução via terminal

---

## ▶️ Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/JPEDRO12345/Desafios.git
   ```

2. Compile o programa:
   ```bash
   gcc "Xadrez Desafio.c" -o xadrez
   ```

3. Execute:
   ```bash
   ./xadrez
   ```

---

## 🎓 Sobre o Projeto

Criado por **João Pedro Aragão dos Santos**, este projeto busca exercitar e integrar:

- Estruturas de repetição (`for`, `while`, `do-while`)
- Recursividade em C
- Uso de loops aninhados com controle de fluxo
- Simulação de movimentos com saída clara no console
- Boas práticas de organização, documentação e legibilidade de código

---

## 📘 Licença
Este projeto é acadêmico e destinado exclusivamente para **fins educacionais**.
