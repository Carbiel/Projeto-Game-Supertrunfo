# 🃏 Super Trunfo em C

## 📌 Sobre o projeto

Este projeto é uma implementação do jogo **Super Trunfo** utilizando a linguagem C.

O sistema gera cartas aleatórias para o jogador e para a CPU, contendo informações como estado, população, área, PIB e outros atributos. O jogador escolhe um parâmetro e o sistema compara os valores para definir o vencedor da rodada.

Este projeto foi desenvolvido com o objetivo de praticar lógica de programação, uso de `struct`, geração de dados aleatórios e estruturas de controle como `if` e `switch`.

---

## ⚙️ Funcionalidades

* Geração aleatória de cartas
* Estados aleatórios sem repetição
* Códigos de carta automáticos
* Cálculo de:

  * Densidade populacional
  * PIB per capita
  * Superpoder da carta
* Comparação de atributos:

  * População
  * Área
  * PIB
  * Pontos turísticos
  * Densidade populacional (regra invertida)
  * PIB per capita
  * Superpoder

---

## 🎮 Como funciona

1. O jogador inicia o jogo pelo menu.
2. O sistema gera duas cartas (Jogador vs CPU).
3. Os dados são exibidos na tela.
4. O jogador escolhe um atributo.
5. O sistema compara os valores:

   * Maior valor vence
   * Exceção: menor densidade vence
6. O resultado é exibido.

---

## 🧠 Conceitos aplicados

* `struct` para organização de dados
* `rand()` para geração aleatória
* `switch` para controle de fluxo
* `if/else` para decisões
* `sprintf` para criação de códigos dinâmicos

---

## 🚧 Em desenvolvimento

Este projeto ainda pode ser melhorado com:

* Sistema de múltiplas rodadas
* Melhor organização com funções (`void`)
* Inteligência da CPU para escolher atributos
* Interface mais amigável

---

## 👨‍💻 Autor

Carlos Gabriel

Projeto desenvolvido como prática de programação em C.

atualmente ver 1.2
