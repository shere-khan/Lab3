#include <stdio.h>

int main() {
    int oj_weight, num_times_oj_taken;
    float oj_price, owes_me = 0;
    printf("What is the weight (in oz.) of the original container of OJ?");
    scanf("%d", &oj_weight);

    printf("What is the cost of the original OJ in dollars?");
    scanf("%f", &oj_price);

    float oj_price_per_oz = (float) oj_price / oj_weight;

    printf("%.2f\n", oj_price_per_oz);

    printf("How many times did your roommate take your juice?");
    scanf("%d", &num_times_oj_taken);

    for (int i = 0; i < num_times_oj_taken; i++) {
        int oz_drank;
        printf("How much juice did your roommate take this time (in oz.)?");
        scanf("%d", &oz_drank);
        owes_me += (float) oz_drank * oj_price_per_oz;
        printf("owes_me: %.2f", owes_me);

        if (owes_me >= 10.00) {
            printf("My roommate owes me $10\n");
            owes_me = 0;
        }
    }

    printf("owes me: %.2f", owes_me);
    return 0;
}