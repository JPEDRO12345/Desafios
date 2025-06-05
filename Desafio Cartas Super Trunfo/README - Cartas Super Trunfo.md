
# 🃏 Super Trunfo de Cidades em C

Este projeto consiste em uma implementação incremental de um jogo do tipo **Super Trunfo**, com foco em **cidades brasileiras** e seus atributos socioeconômicos. Foi desenvolvido em linguagem **C** como trabalho acadêmico para a disciplina de Introdução à Programação de Computadores na **Estácio**.

## 🧩 Níveis do Desafio

### 🟢 Nível Novato
- Leitura dos dados de **duas cartas** via teclado:
  - Estado (`char`)
  - Código da Carta (`char[]`)
  - Nome da Cidade (`char[]`)
  - População (`int`)
  - Área em km² (`float`)
  - PIB (`float`)
  - Número de Pontos Turísticos (`int`)
- Exibição clara e formatada dos dados inseridos.

### 🟡 Nível Aventureiro
- Cálculo e exibição de:
  - **Densidade Populacional** = População / Área
  - **PIB per Capita** = PIB / População
- Apresentação dos resultados com duas casas decimais.

### 🔴 Nível Mestre
- População passa a ser armazenada como `unsigned long int`.
- Cálculo do **Super Poder** de cada carta:
  - Soma de População, Área, PIB, Pontos Turísticos, PIB per Capita e o inverso da Densidade Populacional.
- Comparação entre cartas:
  - Atributo por atributo.
  - Densidade populacional: menor valor vence.
  - Demais atributos: maior valor vence.
- Resultado das comparações exibido como `1` (Carta 1 venceu) ou `0` (Carta 2 venceu).

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
   gcc "Desafio Cartas Super Trunfo.c" -o cartas
   ```
3. Execute o programa:
   ```bash
   ./cartas
   ```

## 🎓 Sobre o Projeto

Este projeto foi desenvolvido por **João Pedro Aragão dos Santos** como parte de um **trabalho acadêmico** na **Estácio**. O objetivo é exercitar:

- Manipulação de diferentes tipos de dados em C.
- Cálculos com `float` e `unsigned long int`.
- Comparações lógicas entre valores.
- Organização e exibição estruturada de dados.

## 📘 Licença
Este projeto é acadêmico e não possui uma licença de código aberto específica. Para fins educacionais apenas.
