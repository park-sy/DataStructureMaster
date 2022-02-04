#include<stdio.h>
int cnt = 0;

int binsearch(int list[], int searchnum, int left, int right) {
	int middle;
	
	while (left <= right) {
		middle = (left + right) / 2;
		cnt++;
		printf("반복 %d : left 값 = %d, right 값 = %d, middle 값 = %d, 비교데이터값 = %d\n", cnt, left, right, middle, list[middle]);
		if (list[middle] < searchnum)
			left = middle + 1;
		else if (list[middle] > searchnum)
			right = middle - 1;
		else return middle;
	}
	return -1;
}
int main() {
	int list[16] = { 12, 23, 25, 34, 45, 46, 57, 58, 69, 72, 75, 82, 86, 89, 97, 99 };
	int found;
	
	found = binsearch(list, 34, 0, 15);
	if (found == -1) {
		printf("not found\n");
	}
	else {
		printf("It's at %d !\n", found);
		printf("총반복횟수 = %d\n", cnt);
	}
	return 0;
}

