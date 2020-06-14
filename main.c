#include "statistica.h"

int main() {
	recording R = emptyRecording();

	addIntRecord(&R, 5);
	addIntRecord(&R, 10);
	addIntRecord(&R, 15);
	addIntRecord(&R, 69);
	addIntRecord(&R, 20);

	listRecording(R);
	puts("--------\n");

	printf("max: %f\n", recordingMax(R));
	printf("min: %f\n", recordingMin(R));
	printf("sum: %f\n", recordingSum(R));
	printf("mean: %f\n", recordingMean(R));

	free(R.records);
	return 0;
}