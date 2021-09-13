/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"



TEST_CASE("Verificando casos que podem acontecer erros", "[single-file]") {
  int teste1[3][3] = {{ 0, 0, 0 }, { 0, 0, 0 }, { 0, 7, 0 }};
  REQUIRE(VerificaVelha(teste1) == -2);

  int teste2[3][3] = {{ 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }};
  REQUIRE(VerificaVelha(teste2) == -1);

  int teste3[3][3] = {{ 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }};
  REQUIRE(VerificaVelha(teste3) == -2);

  int teste4[3][3] = {{ 2, 2, 2 }, { 2, 2, 2 }, { 2, 2, 2 }};
  REQUIRE(VerificaVelha(teste4) == -2);
}

TEST_CASE("Verificando casos que podem acontecer empate", "[single-file]") {
  int teste1[3][3] = {{ 1, 2, 1 }, { 1, 2, 2 }, { 2, 1, 2 }};
  REQUIRE(VerificaVelha(teste1) == 0);

  int teste2[3][3] = {{ 1, 2, 2 }, { 2, 2, 1 }, { 1, 1, 2 }};
  REQUIRE(VerificaVelha(teste2) == 0);
}

TEST_CASE("Verificando casos em que o X ganha pelas linhas", "[single-file]") {
  int teste1[3][3] = {{1, 1, 1}, {0, 0, 0}, {0, 0, 0}};
  REQUIRE(VerificaVelha(teste1) == 1);

  int teste2[3][3] = {{ 0, 0, 0 }, { 1, 1, 1 }, { 0, 0, 0 }};
  REQUIRE(VerificaVelha(teste2) == 1);

  int teste3[3][3] = {{ 0, 1, 0 }, { 2, 0, 0 }, { 1, 1, 1 }};
  REQUIRE(VerificaVelha(teste3) == 1);
}

TEST_CASE("Verificando casos em que o O ganha pelas linhas", "[single-file]") {
  int teste1[3][3] = {{ 2, 2, 2 }, { 0, 0, 0 }, { 0, 0, 0 }};
  REQUIRE(VerificaVelha(teste1) == 2);

  int teste2[3][3] = {{ 0, 0, 0 }, { 2, 2, 2 }, { 0, 0, 0 }};
  REQUIRE(VerificaVelha(teste2) == 2);

  int teste3[3][3] = {{ 0, 1, 0 }, { 9, 0, 0 }, { 2, 2, 2 }};
  REQUIRE(VerificaVelha(teste3) == -2);
}

TEST_CASE("Verificando casos em que o X ganha pelas colunas", "[single-file]") {
  int teste1[3][3] = {{ 1, 0, 2 }, { 1, 0, 0 }, { 1, 0, 0 }};
  REQUIRE(VerificaVelha(teste1) == 1);

  int teste2[3][3] = {{ 0, 1, 0 }, { 2, 1, 2 }, { 0, 1, 0 }};
  REQUIRE(VerificaVelha(teste2) == 1);

  int teste3[3][3] = {{ 0, 1, 1 }, { 1, 0, 1 }, { 2, 2, 1 }};
  REQUIRE(VerificaVelha(teste3) == 1);
}

TEST_CASE("Verificando casos em que o O ganha pelas colunas", "[single-file]") {
  int teste1[3][3] = {{ 2, 0, 2 }, { 2, 0, 0 }, { 2, 0, 0 }};
  REQUIRE(VerificaVelha(teste1) == 2);

  int teste2[3][3] = {{ 0, 2, 0 }, { 2, 2, 2 }, { 0, 2, 0 }};
  REQUIRE(VerificaVelha(teste2) == 2);

  int teste3[3][3] = {{ 0, 1, 2 }, { 1, 0, 2 }, { 2, 2, 2 }};
  REQUIRE(VerificaVelha(teste3) == 2);
}

TEST_CASE("Casos em que o X ganha pelas diagonais", "[single-file]") {
  int teste1[3][3] = {{ 1, 0, 2 }, { 2, 1, 0 }, { 2, 0, 1 }};
  REQUIRE(VerificaVelha(teste1) == 1);

  int teste2[3][3] = {{ 0, 2, 1 }, { 2, 1, 2 }, { 1, 2, 0 }};
  REQUIRE(VerificaVelha(teste2) == 1);
}

TEST_CASE("Casos em que o O ganha pelas diagonais", "[single-file]") {
  int teste1[3][3] = {{ 2, 0, 2 }, { 2, 2, 0 }, { 2, 0, 2 }};
  REQUIRE(VerificaVelha(teste1) == 2);

  int teste2[3][3] = {{0, 2, 2}, {2, 2, 2}, {2, 2, 1}};
  REQUIRE(VerificaVelha(teste2) == 2);
}

TEST_CASE("Testes extras", "[single-file") {
  int teste3[3][3] = {{1, 1, 1}, {2, 2, 1}, {2, 2, 1}};
  REQUIRE(VerificaVelha(teste3) == 1);

  int teste4[3][3] = {{1, 0, 0}, {2, 2, 2}, {1, 0, 1}};
  REQUIRE(VerificaVelha(teste4) == 2);
}
