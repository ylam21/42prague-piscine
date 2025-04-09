#include <unistd.h>
#include <stdio.h>

#define ROWS 10
#define COLS 10

int ft_ten_queens_puzzle(void);
int check_row(int matrix[ROWS][COLS],int row, int col);
int check_dig(int matrix[ROWS][COLS],int row, int col);
void print_sol(int matrix[ROWS][COLS]);

void print_sol(int matrix[ROWS][COLS]) {
	int queen = 0;
	int i;
	char idx;
	while (queen < 10) {
		i = 0;
		while (i < 10) {
			if (matrix[i][queen] == 1) {
				idx = i + '0';
				write(1,&idx,1);
			}
			i++;
		}
		queen++;
	}
	write(1,"\n",1);
}

int check_dig(int matrix[ROWS][COLS],int row, int col) {
	int i = 1;
	while (i <= col) {
		//check top diagonal
		if ((row - i >= 0) && (matrix[row - i][col - i] == 1))
			return 0;
		//check bottom diagonal
		else if ((row + i) < ROWS && (matrix[row + i][col - i] == 1))
			return 0;
		i++;
	}
	return 1;
}

int check_row(int matrix[ROWS][COLS],int row, int col) {
	int i = 0;
	while (col - i > 0) {
		if (matrix[row][i] == 1)
			return 0;
		i++;
	}
	return 1;
}

int solve(int matrix[ROWS][COLS], int queen, int sol) {
	if (queen == 10) {
		print_sol(matrix);
		return sol + 1;
	}

	int i = 0;
	while (i < 10) {
		matrix[i][queen] = 1;
		if (check_row(matrix,i,queen) && check_dig(matrix,i,queen))
			sol = solve(matrix,queen + 1, sol);
		matrix[i][queen] = 0;
		i++;
	}
	return sol;
}

int ft_ten_queens_puzzle(void) {
	int chessboard[ROWS][COLS] = {0};
	return solve(chessboard, 0, 0);
}

int main(void) {
	int res = ft_ten_queens_puzzle();
	printf("total: %d\n",res);
	return 0;
}
