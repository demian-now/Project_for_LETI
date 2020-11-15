#include <iostream>
#include "Symbols.h"

using namespace std;

void print_to_string(char*, char*, size_t);

void Make_Normal_String(string &input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		switch (input[i]) {
		case ('А'):
			input[i] = 'A';
			break;
		case ('В'):
			input[i] = 'B';
			break;
		case ('Е'):
			input[i] = 'E';
			break;
		case ('К'):
			input[i] = 'K';
			break;
		case ('М'):
			input[i] = 'M';
			break;
		case ('Н'):
			input[i] = 'H';
			break;
		case ('О'):
			input[i] = 'O';
			break;
		case ('Р'):
			input[i] = 'P';
			break;
		case ('С'):
			input[i] = 'C';
			break;
		case ('Т'):
			input[i] = 'T';
			break;
		case ('У'):
			input[i] = 'Y';
			break;
		case ('Х'):
			input[i] = 'X';
			break;
		default:
			break;
		}
	}
}

void print_string_to_console(string message, char* array)
{
	for (size_t i = 0; i < message.size(); i++)
	{
		switch (message[i])
		{
		case('A'):
			{
			print_to_string(array, A, sizeof(A)/6);
			print_to_string(array, space, 1);
			break;
			}
		case('B'):
		{
			print_to_string(array, B, sizeof(B) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('C'):
		{
			print_to_string(array, C, sizeof(C) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('D'):
		{
			print_to_string(array, D, sizeof(D) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('E'):
		{
			print_to_string(array, E, sizeof(E) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('F') :
		{
			print_to_string(array, F, sizeof(F) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('G'):
		{
			print_to_string(array, G, sizeof(G) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('H'):
		{
			print_to_string(array, H, sizeof(H) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('I'):
		{
			print_to_string(array, I, sizeof(I) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('J'):
		{
			print_to_string(array, J, sizeof(J) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('K'):
		{
			print_to_string(array, K, sizeof(K) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('L'):
		{
			print_to_string(array, L, sizeof(L) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('M'):
		{
			print_to_string(array, M, sizeof(M) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('N'):
		{
			print_to_string(array, N, sizeof(N) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('O'):
		{
			print_to_string(array, O, sizeof(O) / 6);
			print_to_string(array, space, 1);
			break;
		}case('P'):
		{
			print_to_string(array, P, sizeof(P) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Q'):
		{
			print_to_string(array, Q, sizeof(Q) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('R'):
		{
			print_to_string(array, R, sizeof(R) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('S'):
		{
			print_to_string(array, S, sizeof(S) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('T'):
		{
			print_to_string(array, T, sizeof(T) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('U'):
		{
			print_to_string(array, U, sizeof(U) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('V'):
		{
			print_to_string(array, V, sizeof(V) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('W'):
		{
			print_to_string(array, W, sizeof(W) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('X'):
		{
			print_to_string(array, X, sizeof(X) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Y'):
		{
			print_to_string(array, Y, sizeof(Y) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Z'):
		{
			print_to_string(array, Z, sizeof(Z) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Б'):
		{
			print_to_string(array, rus_B, sizeof(rus_B) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Г'):
		{
			print_to_string(array, rus_G, sizeof(rus_G) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Д'):
		{
			print_to_string(array, rus_D, sizeof(rus_D) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ж'):
		{
			print_to_string(array, rus_J, sizeof(rus_J) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('З'):
		{
			print_to_string(array, rus_Z, sizeof(rus_Z) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('И'):
		{
			print_to_string(array, rus_I, sizeof(rus_I) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Й'):
		{
			print_to_string(array, rus_sI, sizeof(rus_sI) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Л'):
		{
			print_to_string(array, rus_L, sizeof(rus_L) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('П'):
		{
			print_to_string(array, rus_P, sizeof(rus_P) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ф'):
		{
			print_to_string(array, rus_F, sizeof(rus_F) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ц'):
		{
			print_to_string(array, rus_TS, sizeof(rus_TS) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ч'):
		{
			print_to_string(array, rus_CH, sizeof(rus_CH) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ш'):
		{
			print_to_string(array, rus_SH, sizeof(rus_SH) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Щ'):
		{
			print_to_string(array, rus_SHT, sizeof(rus_SHT) / 6);
			print_to_string(array, space, 1);
			break;
		
		}case('Ъ'):
		{
			print_to_string(array, rus_TZ, sizeof(rus_TZ) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ы'):
		{
			print_to_string(array, rus_YI, sizeof(rus_YI) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ь'):
		{
			print_to_string(array, rus_MZ, sizeof(rus_MZ) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Э'):
		{
			print_to_string(array, rus_IY, sizeof(rus_IY) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Ю'):
		{
			print_to_string(array, rus_YOU, sizeof(rus_YOU) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('Я'):
		{
			print_to_string(array, rus_YA, sizeof(rus_YA) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case(' '):
		{
			print_to_string(array, big_space, sizeof(big_space) / 6);
			break;
		}
		case('1'):
		{
			print_to_string(array, one, sizeof(one) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('2'):
		{
			print_to_string(array, two, sizeof(two) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('3'):
		{
			print_to_string(array, three, sizeof(three) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('4'):
		{
			print_to_string(array, four, sizeof(four) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('5'):
		{
			print_to_string(array, five, sizeof(five) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('6'):
		{
			print_to_string(array, six, sizeof(six) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('7'):
		{
			print_to_string(array, seven, sizeof(seven) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('8'):
		{
			print_to_string(array, eight, sizeof(eight) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('9'):
		{
			print_to_string(array, nine, sizeof(nine) / 6);
			print_to_string(array, space, 1);
			break;
		}
		case('0'):
		{
			print_to_string(array, zero, sizeof(zero) / 6);
			print_to_string(array, space, 1);
			break;
		}
		default:
		{
			print_to_string(array, error, sizeof(error) / 6);
			print_to_string(array, space, 1);
		}
		}
	}
}

void Print_to_console(char* array)
{
	system("cls");
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			for (int j = 1; j <= 60; j++)
			{
				if (array[(i + 1) * 60 - j]-48)
					cout << array[(i + 1) * 60 - j];
				else cout << ' ';
			}
			cout << endl;
		}
		else
		{
			for (int j = 0; j < 60; j++)
				if (array[i * 60 + j]-48)
					cout << array[i * 60 + j];
				else cout << ' ';
			cout << endl;
		}
	}
}

void slide_to_left(char* array)
{
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			for (int j = 1; j <=59; j++)
				swap(array[(i + 1) * 60 - j], array[(i + 1) * 60 - j - 1]);
		}
		else
		{
			for (int j = 0; j < 59; j++)
				swap(array[i * 60 + j], array[i * 60 + j+1]);
		}
	}
}

char* init_array()
{
	char* array = new char[360];
	for (int i = 0; i < 360; i++)
	{
		array[i] = 0 + 48;
	}
	return array;
}

void print_to_string(char* array, char* symbol, size_t size)
{
	for (int j = 0; j < size; j++)
	{
		slide_to_left(array);
		for (int i = 0; i < 6; i++)
		{
			if (i % 2)
				array[i * 60] = symbol[j + i*size] + 48;
			else
				array[(i + 1) * 60 - 1] = symbol[j + i * size] + 48;
		}
		Print_to_console(array);
	}
}

int main()
{
	string s = "ИТМО СОСАТЬ -";
	char* array = init_array();
	Make_Normal_String(s);
	print_string_to_console(s, array);
}