/**
 * \file  velha.cpp
 */


#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelhaLinha( int velha[3][3] )
{
	int row, column;
	int winner;

	for (row = 0; row < 3; row++) {
		for (column = 0; column < 3; column++) {
			if (velha[0][0] == 1 && velha[0][1] == 1 && velha[0][2] == 1) {
				winner = 1;

			} else if (velha[1][0] == 1 && velha[1][1] == 1 && velha[1][2]) {
				winner = 1;

			} else if (velha[2][0] == 1 && velha[2][1] == 1 && velha[2][2]) {
				winner = 1;
			} else {
				winner = 2;
			}
		}
	}

	return winner;
}

int VerificaVelhaColuna( int velha[3][3] )
{
	int row, column;
	int winner;

	for (row = 0; row < 3; row++) {
		for (column = 0; column < 3; column++) {
			if (velha[0][0] == 1 && velha[1][0] == 1 && velha[2][0] == 1) {
				winner = 1;

			} else if (velha[0][1] == 1 && velha[1][1] == 1 && velha[2][1]) {
				winner = 1;

			} else if (velha[0][2] == 1 && velha[1][2] == 1 && velha[2][2]) {
				winner = 1;
				
			} else {
				winner = 2;
			}
		}
	}

	return winner;
}

int VerificaVelhaDiagonal( int velha[3][3] )
{
	int row, column;
	int winner;

	for (row = 0; row < 3; row++) {
		for (column = 0; column < 3; column++) {
			if (velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1) {
				winner = 1;

			} else if (velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0]) {
				winner = 1;
				
			} else {
				winner = 2;
			}
		}
	}

	return winner;
}