#include <stdio.h>
int totalRuns(int score_array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + score_array[i];
    }
    return total;
}
int highestScore(int score_array[], int n) {
    int highestScore = 0;
    for (int i = 0; i < n; i++) {
        if (score_array[i] > highestScore) {
            highestScore = score_array[i];
        }
    }
    return highestScore;
}
int aboveAverage(int score_array[], int n) {
    int average = 0, count = 0;
    for (int i = 0; i < n; i++) {
        average += score_array[i];
    }
    average /= n;
    for (int i = 0; i < n; i++) {
        if (score_array[i] > average) {
            count++;
        }
    }
    return count;
}

int main() {
    int score = 0;
    int score_array[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter match %d score", i+1);
        scanf(" %d", &score);
        score_array[i] = score;

    }
    printf("    HIGHEST SCORE: %10d\n", highestScore(score_array, 10));
    printf("    ABOVE AVG SCORE COUNT: %d\n", aboveAverage(score_array, 10));
    printf("    TOTAL RUNS: %13d", totalRuns(score_array, 10));
}
