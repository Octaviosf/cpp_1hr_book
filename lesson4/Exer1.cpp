#include <iostream>

using namespace std;

int main()
{
	/*
	enum ChessPieces{Pawn, Rook, Knight, Bishop, King, Queen, empty};
	ChessPieces chessBoard[8][8] = {{Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook},
									{Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn},
									{empty, empty, empty, empty, empty, empty, empty, empty},
									{empty, empty, empty, empty, empty, empty, empty, empty},
									{empty, empty, empty, empty, empty, empty, empty, empty},
									{empty, empty, empty, empty, empty, empty, empty, empty},
									{Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn},
									{Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook}};
	*/

	/*
	PiecesFor rankOneNEight[8] = {Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook};
	PiecesFor rankTwoNSeven[8] = {Pawn};
	
	chessBoard[0] = chessBoard[7] = rankOneNEight;
	chessBoard[1] = chessBoard[6] = rankTwoNSeven;
	*/

	enum PiecesFor
	{
		Empty=0,
		Pawn,
		Rook,
		Knight,
		Bishop,
		King,
		Queen
	};

	PiecesFor chessBoard[8][8] = {Empty};
	chessBoard[0][0] = chessBoard[0][7] = Rook;
	chessBoard[7][0] = chessBoard[7][7] = Rook;
	chessBoard[0][1] = chessBoard[0][6] = Knight;
	chessBoard[7][1] = chessBoard[7][6] = Knight;
	chessBoard[0][2] = chessBoard[0][5] = Bishop;
	chessBoard[7][2] = chessBoard[7][5] = Bishop;
	chessBoard[0][3] = chessBoard[7][3] = King;
	chessBoard[0][4] = chessBoard[7][4] = Queen;

	chessBoard[1][0] = chessBoard[1][7] = Pawn;
	chessBoard[6][0] = chessBoard[6][7] = Pawn;
	chessBoard[1][1] = chessBoard[1][6] = Pawn;
	chessBoard[6][1] = chessBoard[6][6] = Pawn;
	chessBoard[1][2] = chessBoard[1][5] = Pawn;
	chessBoard[6][2] = chessBoard[6][5] = Pawn;
	chessBoard[1][3] = chessBoard[6][3] = Pawn;
	chessBoard[1][4] = chessBoard[6][4] = Pawn;

	cout << "We've captured the " << chessBoard[0][4] << "." << endl;

	cout << "Size of chessBoard: " << sizeof(chessBoard) << endl;
}
