/**
 * \file  velha.cpp
 */


#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Gabriel Xavier Cardoso 
 * @param  velha um jogo representado em uma matriz 3x3 que pode conter: 0 = espaço em branco, 1 = Jogador X, 2 = Jogador O.
 * 
 * Esse programa foi separado em funções, sendo que
 * VerificaVelha, VerificaColuna e VerificaDiagonal são funções auxiliares
 * da função principal VerificaVelha. A primeira função retorna o ganhador
 * pelas linhas, sendo 1 o jogador X e 2 o ganhador O;
 * A segunda função retorna o ganhador pelas colunas, 
 * da mesma forma a terceira função retorna o ganhador pelas diagonais.
 * Na função principal são feitas todas as condições se o jogo é totalmente impossivel
 * ou indeterminado pelas regras é retornado o ganhador em definitivo.
 */

int VerificaLinha( int velha[3][3] ) {
	// Declarando todas as variáveis que serão usadas
	int linha, coluna, ganhador;
	// Iteração para acessar cada posição da matriz
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (velha[0][0] == 1 && velha[0][1] == 1 && velha[0][2] == 1) {
				// Verifica primeira linha, caso verdadeiro, guarda 1 na variável
				ganhador = 1;
			} else if (velha[1][0] == 1 && velha[1][1] == 1 && velha[1][2] == 1) {
				// Verifica segunda linha, caso verdadeiro, guarda 1 na variável
				ganhador = 1;
			} else if (velha[2][0] == 1 && velha[2][1] == 1 && velha[2][2] == 1) {
				// Verifica terceira linha, caso verdadeiro, guarda 1 na variável
				ganhador = 1;
			} else {
				// Caso nenhuma condição anterior seja verdadeiro, guarda 2 na variável
				ganhador = 2;
			}
		}
	}
	// Retorna o ganhador
	return ganhador;
}

int VerificaColuna( int velha[3][3] )
{
	// Declarando todas as variáveis que serão usadas
	int linha, coluna;
	int ganhador;
	// Iteração para acessar cada posição da matriz
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (velha[0][0] == 1 && velha[1][0] == 1 && velha[2][0] == 1) {
				// Verifica primeira coluna, caso verdadeiro, guarda 1 na variável
				ganhador = 1;

			} else if (velha[0][1] == 1 && velha[1][1] == 1 && velha[2][1] == 1) {
				// Verifica segunda coluna, caso verdadeiro, guarda 1 na variável
				ganhador = 1;

			} else if (velha[0][2] == 1 && velha[1][2] == 1 && velha[2][2] == 1) {
				// Verifica terceira coluna, caso verdadeiro, guarda 1 na variável
				ganhador = 1;
				
			} else {
				// Caso nenhuma condição anterior seja verdadeiro, guarda 2 na variável
				ganhador = 2;
			}
		}
	}
	// Retorna o ganhador
	return ganhador;
}

int VerificaDiagonal( int velha[3][3] )
{
	// Declarando todas as variáveis que serão usadas
	int linha, coluna;
	int ganhador;
	// Iteração para acessar cada posição da matriz
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1) {
				// Verifica primeira diagonal, caso verdadeiro, guarda 1 na variável
				ganhador = 1;

			} else if (velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0]) {
				// Verifica segunda diagonal, caso verdadeiro, guarda 1 na variável
				ganhador = 1;
				
			} else {
				// Caso nenhuma condição anterior seja verdadeiro, guarda 2 na variável
				ganhador = 2;
			}
		}
	}
	// Retorna o ganhador
	return ganhador;
}

// Função principal
int VerificaVelha( int velha[3][3] )
{
	// Declarando todas as variáveis que serão usadas
	int linha, coluna, ganhador;
	// Variáveis de jogadores, sendo 1 ou 2
	int ganhador_x = 1;
	int ganhador_o = 2;
	// Variáveis de contadores
	int cont_x = 0;
	int cont_o = 0;
	// Variáveis que são gaurdados as funções declaradas anteriormente
	int ganhador_linha = VerificaLinha(velha);
	int ganhador_coluna = VerificaColuna(velha);
	int ganhador_diagonal = VerificaDiagonal(velha);
	// É feita uma contagem de uns e dois em casa posição da matriz
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (velha[linha][coluna] == 1) {
				// Caso haja 1 em qualquer posição, incrementa o contador cont_x
				cont_x ++;
			} else if (velha[linha][coluna] == 2) {
				// Caso haja 2 em qualquer posição, incrementa o contador cont_o
				cont_o++;
			} else if (velha[linha][coluna] != 0){
				// Caso qualquer posição tenha um número diferente, retorna -2, pois é inválido
				return -2;
			}
		}
	}

	// É verificado se o ganhador é 1 ou 2 e é guardado em uma variável
	ganhador = ganhador_linha == 1 ? ganhador_x : ganhador_o && ganhador_coluna == 1 ? ganhador_x : ganhador_o 
	&& ganhador_diagonal == 1 ? ganhador_x : ganhador_o;

	// Caso o jogo ainda não foi iniciado, retorna -1
	if (cont_x + cont_o == 0) {
		return -1;
	// Caso apenas 1 tenha jogado, retorna -2
	}else if (cont_x == 9) {
		return -2;
	// Caso apenas 2 tenha jogado, retorna -2 
	} else if (cont_o == 9) {
		return -2;
	// Caso haja empate, retorna 0
	} else if ((cont_x == 4 && cont_o == 5) || (cont_x == 5 && cont_o == 4 && !ganhador)) {
		return 0;
	}

	// Retorna o ganhador do jogo em definitivo
	return ganhador;
}