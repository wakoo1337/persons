#include "Persons.h"
void Sort(struct Person* persons, const int count, const enum SortType type) {
	struct Person* left;
	struct Person* right;
	int lcount, rcount;

	lcount = count / 2;
	left  = (struct Person *) malloc(lcount * sizeof(struct Person));
	memcpy(left , persons         ,  lcount * sizeof(struct Person));

	rcount = count - lcount;
	right = (struct Person *) malloc(rcount * sizeof(struct Person));
	memcpy(right, persons + lcount,  rcount * sizeof(struct Person));

	if (lcount > BIG_SORT) Sort(left , lcount, type);
	else SmallSort(left , lcount, type);

	if (rcount > BIG_SORT) Sort(right, rcount, type);
	else SmallSort(right, rcount, type);

	int left_i, right_i, i;

	left_i = right_i = i = 0;

	while (i < count) {
		if (Compare(&left[left_i], &right[right_i], type) > 0) {
			/* ����� ������, ���� �� ������� */
			persons[i] = right[right_i];
			right_i++;
			if (right_i == rcount) {
				/* ������ �������� */
				memcpy(persons + i + 1, left + left_i, sizeof(struct Person) * (lcount - left_i));
				break;
			};
		} else {
			/* ������ ������ ��� ����� ������, ���� �� ������ */
			persons[i] =  left[left_i];
			left_i++;
			if (left_i == lcount) {
				/* ����� �������� */
				memcpy(persons + i + 1, right + right_i, sizeof(struct Person) * (rcount - right_i));
				break;
			};
		};
		i++;
	};

	free(left);
	free(right);
};
