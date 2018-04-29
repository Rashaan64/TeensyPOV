// MSB = topmost pixel on column
// Lowest index = leftmost column of character
// Each element in the data array is the state of one column in the letter.

#include "textCharacters.h"

const pov_char textCharacters::font_numbers[] = { { 0b0111110, 0b1000101,
		0b1001001, 0b1010001, 0b0111110, }, // 0
		{ 0b0000000, 0b0100001, 0b1111111, 0b0000001, 0b0000000, }, // 1
		{ 0b0100001, 0b1000011, 0b1000101, 0b1001001, 0b0110001, }, // 2
		{ 0b1000010, 0b1000001, 0b1010001, 0b1101001, 0b1000110, }, // 3
		{ 0b0001100, 0b0010100, 0b0100100, 0b1111111, 0b0000100, }, // 4
		{ 0b1110010, 0b1010001, 0b1010001, 0b1010001, 0b1001110, }, // 5
		{ 0b0011110, 0b0101001, 0b1001001, 0b1001001, 0b0000110, }, // 6
		{ 0b1100000, 0b1000000, 0b1000111, 0b1001000, 0b1110000, }, // 7
		{ 0b0110110, 0b1001001, 0b1001001, 0b1001001, 0b0110110, }, // 8
		{ 0b0110000, 0b1001001, 0b1001001, 0b1001010, 0b0111100, }, // 9
		};

const pov_char textCharacters::font_uppercase[] = { { 0b0111111, 0b1000100,
		0b1000100, 0b1000100, 0b0111111, }, // A
		{ 0b1111111, 0b1001001, 0b1001001, 0b1001001, 0b0110110, }, // B
		{ 0b0111110, 0b1000001, 0b1000001, 0b1000001, 0b0100010, }, // C
		{ 0b1111111, 0b1000001, 0b1000001, 0b0100010, 0b0011100, }, // D
		{ 0b1111111, 0b1001001, 0b1001001, 0b1001001, 0b1000001, }, // E
		{ 0b1111111, 0b1001000, 0b1001000, 0b1001000, 0b1000000, }, // F
		{ 0b0111110, 0b1000001, 0b1001001, 0b1001001, 0b0101111, }, // G
		{ 0b1111111, 0b0001000, 0b0001000, 0b0001000, 0b1111111, }, // H
		{ 0b0000000, 0b1000001, 0b1111111, 0b1000001, 0b0000000, }, // I
		{ 0b0000010, 0b0000001, 0b1000001, 0b1111110, 0b1000000, }, // J
		{ 0b1111111, 0b0001000, 0b0010100, 0b0100010, 0b1000001, }, // K
		{ 0b1111111, 0b0000001, 0b0000001, 0b0000001, 0b0000001, }, // L
		{ 0b1111111, 0b0100000, 0b0011000, 0b0100000, 0b1111111, }, // M
		{ 0b1111111, 0b0010000, 0b0001000, 0b0000100, 0b1111111, }, // N
		{ 0b0111110, 0b1000001, 0b1000001, 0b1000001, 0b0111110, }, // O
		{ 0b1111111, 0b1001000, 0b1001000, 0b1001000, 0b0110000, }, // P
		{ 0b0111110, 0b1000001, 0b1000101, 0b1000010, 0b0111101, }, // Q
		{ 0b1111111, 0b1001000, 0b1001100, 0b1001010, 0b0110001, }, // R
		{ 0b0110001, 0b1001001, 0b1001001, 0b1001001, 0b1000110, }, // S
		{ 0b1000000, 0b1000000, 0b1111111, 0b1000000, 0b1000000, }, // T
		{ 0b1111110, 0b0000001, 0b0000001, 0b0000001, 0b1111110, }, // U
		{ 0b1111100, 0b0000010, 0b0000001, 0b0000010, 0b1111100, }, // V
		{ 0b1111110, 0b0000001, 0b0001110, 0b0000001, 0b1111110, }, // W
		{ 0b1100011, 0b0010100, 0b0001000, 0b0010100, 0b1100011, }, // X
		{ 0b1110000, 0b0001000, 0b0000111, 0b0001000, 0b1110000, }, // Y
		{ 0b1000011, 0b1000101, 0b1001001, 0b1010001, 0b1100001, }, // Z

		};

const pov_char textCharacters::font_lowercase[] = { { 0b0000010, 0b0010101,
		0b0010101, 0b0010101, 0b0001111, }, // a
		{ 0b1111111, 0b0001001, 0b0010001, 0b0010001, 0b0001110, }, // b
		{ 0b0001110, 0b0010001, 0b0010001, 0b0010001, 0b0000010, }, // c
		{ 0b0001110, 0b0010001, 0b0010001, 0b0001001, 0b1111111, }, // d
		{ 0b0001110, 0b0010101, 0b0010101, 0b0010101, 0b0001100, }, // e
		{ 0b0001000, 0b0111111, 0b1001000, 0b1000000, 0b0100000, }, // f
		{ 0b0011000, 0b0100101, 0b0100101, 0b0100101, 0b0111110, }, // g
		{ 0b1111111, 0b0001000, 0b0010000, 0b0010000, 0b0001111, }, // h
		{ 0b0000000, 0b0010001, 0b1011111, 0b0000001, 0b0000000, }, // i
		{ 0b0000010, 0b0000001, 0b0010001, 0b1011110, 0b0000000, }, // j
		{ 0b1111111, 0b0000100, 0b0001010, 0b0010001, 0b0000000, }, // k
		{ 0b0000000, 0b1000001, 0b1111111, 0b0000001, 0b0000000, }, // l
		{ 0b0011111, 0b0010000, 0b0001100, 0b0010000, 0b0001111, }, // m
		{ 0b0011111, 0b0001000, 0b0010000, 0b0010000, 0b0001111, }, // n
		{ 0b0001110, 0b0010001, 0b0010001, 0b0010001, 0b0001110, }, // o
		{ 0b0011111, 0b0010100, 0b0010100, 0b0010100, 0b0001000, }, // p
		{ 0b0001000, 0b0010100, 0b0010100, 0b0001100, 0b0011111, }, // q
		{ 0b0011111, 0b0001000, 0b0010000, 0b0010000, 0b0001000, }, // r
		{ 0b0001001, 0b0010101, 0b0010101, 0b0010101, 0b0000010, }, // s
		{ 0b0010000, 0b1111110, 0b0010001, 0b0000001, 0b0000010, }, // t
		{ 0b0011110, 0b0000001, 0b0000001, 0b0000010, 0b0011111, }, // u
		{ 0b0011100, 0b0000010, 0b0000001, 0b0000010, 0b0011100, }, // v
		{ 0b0011110, 0b0000001, 0b0001110, 0b0000001, 0b0011110, }, // w
		{ 0b0010001, 0b0001010, 0b0000100, 0b0001010, 0b0010001, }, // x
		{ 0b0011000, 0b0000101, 0b0000101, 0b0000101, 0b0011110, }, // y
		{ 0b0010001, 0b0010011, 0b0010101, 0b0011001, 0b0010001, }, // z

		};

const pov_char textCharacters::font_space = { 0b0000000, 0b0000000, 0b0000000,
		0b0000000, 0b0000000, };

void textCharacters::getMatrix(const char textChar, uint8_t *matrixBuffer, bool invert) {
	const pov_char *currentCharMatrix;
	int8_t index1, index2;
	uint8_t orignalColumn, flippedColumn;

	switch (textChar) {
	case '0' ... '9':
		currentCharMatrix = font_numbers + textChar - '0';
		break;

	case 'A' ... 'Z':
		currentCharMatrix = font_uppercase + textChar - 'A';
		break;

	case 'a' ... 'z':
		currentCharMatrix = font_lowercase + textChar - 'a';
		break;

	default:
		currentCharMatrix = &font_space;
	}

	if (invert) {
		for (index1 = 4; index1 >= 0; index1--) {
			orignalColumn = currentCharMatrix->data[index1];
			flippedColumn = 0;
			for (index2 = 0; index2 < 7; index2++) {
				flippedColumn <<= 1;
				flippedColumn |= orignalColumn & 0b1;
				orignalColumn >>= 1;
			}
			*(matrixBuffer++) = flippedColumn;
		}
	} else {
		for (index1 = 0; index1 < 5; index1++) {
			*(matrixBuffer++) = currentCharMatrix->data[index1];
		}
	}
}

