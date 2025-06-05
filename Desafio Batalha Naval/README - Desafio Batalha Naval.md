
# 💣 Batalha Naval em C

Este projeto é uma implementação progressiva do clássico jogo **Batalha Naval**, desenvolvido em linguagem **C**, como trabalho acadêmico para a disciplina de Introdução à Programação de Computadores na **Estácio**. O desenvolvimento é dividido em três níveis de desafio: **Novato**, **Aventureiro** e **Mestre**, abordando matrizes, vetores, lógica condicional e estruturas de repetição.

## 📌 Objetivos por Nível

### 🧩 Nível Novato
- Criar um tabuleiro 10x10 representado por uma matriz.
- Posicionar dois navios de tamanho fixo (3 posições): um horizontal e um vertical.
- Garantir que os navios não ultrapassem os limites e não se sobreponham.
- Exibir o tabuleiro no console com:
  - `0` representando água.
  - `3` representando partes de navios.

### 🔍 Nível Aventureiro
- Adicionar dois navios diagonais ao tabuleiro.
- Continuar validando posicionamento e sobreposição.
- Exibir o tabuleiro atualizado com todos os navios visíveis.

### 💥 Nível Mestre
- Criar três habilidades com áreas de efeito especiais:
  - **Cone** (expansão inferior)
  - **Cruz** (linhas e colunas)
  - **Octaedro** (forma de losango)
- Cada habilidade usa uma matriz auxiliar (ex: 5x5) com:
  - `1` para área afetada.
  - `0` para fora da área.
- Sobrepor a área de efeito ao tabuleiro, marcando com `5`.
- Exibir o tabuleiro com:
  - `0` → Água
  - `3` → Navio
  - `5` → Área afetada

## 🛠️ Tecnologias Utilizadas
- Linguagem: **C**
- Compilador sugerido: gcc
- Execução via terminal

## ▶️ Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/JPEDRO12345/Desafios.git
   ```
2. Compile o código-fonte:
   ```bash
   gcc "Desafio Batalha Naval.c" -o batalha
   ```
3. Execute o programa:
   ```bash
   ./batalha
   ```

## 📷 Exemplos de Saída

**Cone**
```
0 0 3 0 0
0 3 3 3 0
3 3 3 3 3
```

**Cruz**
```
0 0 3 0 0
3 3 3 3 3
0 0 3 0 0
```

**Octaedro**
```
0 0 3 0 0
0 3 3 3 0
0 0 3 0 0
```

## 🎓 Sobre o Projeto

Este projeto foi desenvolvido por **João Pedro Aragão dos Santos** como parte de um **trabalho acadêmico** da disciplina de Introdução à Programação de Computadores na **Estácio**. Ele tem como objetivo exercitar:

- Manipulação de matrizes e arrays em C
- Lógica de validação e posicionamento
- Uso de estruturas de repetição aninhadas
- Visualização de dados em console

## 📘 Licença
Este projeto é acadêmico e não possui uma licença de código aberto específica. Para fins educacionais apenas.