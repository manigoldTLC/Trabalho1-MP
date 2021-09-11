
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"



TEST_CASE( "Verificando todos os casos em que o X ganha nas linhas", "[single-file]" ) {
	int teste1[3][3]= {   { 1, 1, 1 }, 
	                      { 2, 0, 0 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelhaLinha(teste1) == 1 );

	int teste2[3][3]= {   { 0, 2, 1 }, 
	                      { 1, 1, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelhaLinha(teste2) == 1 );

	int teste3[3][3]= {   { 0, 2, 1 }, 
	                      { 0, 2, 2 },
						  { 1, 1, 1 }
					  };
    REQUIRE( VerificaVelhaLinha(teste3) == 1 );
}

TEST_CASE( "Verificando todos os casos em que o O ganha nas linhas", "[single-file]" ) {
	int teste4[3][3]= {   { 2, 2, 2 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelhaLinha(teste4) == 2 );

	int teste5[3][3]= {   { 0, 2, 1 }, 
	                      { 2, 2, 2 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelhaLinha(teste5) == 2 );

	int teste6[3][3]= {   { 0, 2, 1 }, 
	                      { 0, 2, 2 },
						  { 2, 2, 2 }
					  };
    REQUIRE( VerificaVelhaLinha(teste6) == 2 );
}

TEST_CASE( "Verificando todos os casos em que o X ganha nas colunas", "[single-file]" ) {
	int teste7[3][3]= {   { 1, 1, 1 }, 
	                      { 1, 0, 0 },
						  { 1, 2, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste7) == 1 );

	int teste8[3][3]= {   { 0, 1, 0 }, 
	                      { 1, 1, 1 },
						  { 0, 1, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste8) == 1 );

	int teste9[3][3]= {   { 0, 2, 1 }, 
	                      { 0, 2, 1 },
						  { 1, 1, 1 }
					  };
    REQUIRE( VerificaVelhaColuna(teste9) == 1 );

}

TEST_CASE( "Verificando todos os casos em que o O ganha nas colunas", "[single-file]" ) {
	int teste10[3][3]= {   { 2, 1, 1 }, 
	                      { 2, 0, 0 },
						  { 2, 2, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste10) == 2 );

	int teste11[3][3]= {   { 0, 2, 0 }, 
	                      { 1, 2, 1 },
						  { 0, 2, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste11) == 2 );

	int teste12[3][3]= {   { 0, 2, 2 }, 
	                      { 0, 2, 2 },
						  { 1, 1, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste12) == 2 );

}

TEST_CASE( "Verificando todos os casos em que o X ganha nas diagonais", "[single-file]" ) {
	int teste13[3][3]= {   { 1, 1, 1 }, 
	                      { 2, 1, 0 },
						  { 2, 2, 1 }
					  };
    REQUIRE( VerificaVelhaColuna(teste13) == 1 );

	int teste14[3][3]= {   { 0, 2, 1 }, 
	                      { 1, 1, 1 },
						  { 1, 2, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste14) == 1 );

}

TEST_CASE( "Verificando todos os casos em que o O ganha nas diagonais", "[single-file]" ) {
	int teste15[3][3]= {   { 2, 1, 1 }, 
	                      { 2, 2, 0 },
						  { 2, 2, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste15) == 2 );

	int teste16[3][3]= {   { 0, 2, 2 }, 
	                      { 1, 2, 1 },
						  { 2, 2, 2 }
					  };
    REQUIRE( VerificaVelhaColuna(teste16) == 2 );

}

