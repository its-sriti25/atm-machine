#include <stdio.h>

void reset () {
    printf("\033[0m");
}
void green() {
    printf("\033[1;32m");
}
void white() {
    printf("\033[1;37m");
}

void cyan() {
    printf("\033[1;36m");
}

void red () {
    printf("\033[1;31m");
}

void yellow () {
    printf("\033[1;33m");
}

void blue() {
    printf("\033[1;34m");
}

int main() {
    char card;
    int n, p, a, b, diff;


    /* ∆card- store the character input representing the card type.

    ∆n- store the user's choice of action (1 for withdrawal, 2 for balance check)

    ∆p- store the user's PIN
    ∆a- store the amount of money to be withdrawal
    ∆b-store the account balance
    ∆diff- new balance after a withdrawn */


    green();
    printf("WELCOME TO THE ATM\n_ _ _ _ _ _ _ _ _ _\n_ _ _ _ _ _ _ _ _ _\n\nPlease insert your card(k, s, i, l)\n\nInsert card:");
    scanf(" %c", &card);
    printf("_ _ _ _ _ _ _");
    reset();

//Case 1

    switch (card) {
    case 'k':
        cyan();
        printf("\n\n\nHello, Sumiya Afrin\n\n\n\n");
        reset();
        b=5000; //Initial balance for Sriti
        white();
        printf(">press 1 to withdrawal the money from your account\n\n>press 2 to check the balance");
        blue();
        printf("\n\n=========================");
        reset();

        printf("\n\nPress Button:");
        scanf("%d", &n);

        if (n == 1) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 1234) {
                printf("Enter the amount to be withdrawal:");
                scanf("%d", &a);

                if (a > b) {
                    blue();
                    printf("\n=========================");
                    reset();
                    red();
                    printf("\n\nInsufficient funds\n");
                    reset();
                }  else {
                    diff=b-a;
                    blue();
                    printf("\n=========================");
                    reset();

                    printf("\n\nCollect the money\nNow, your bank balance is: %d", diff);
                }
            } else {
                blue();
                printf("\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else if (n == 2) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 1234) {
                blue();
                printf("\n=========================");
                reset();
                printf("\n\nYour account balance is: %d\n", b);
            } else {

                blue();
                printf("\n\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else {

            blue();
            printf("\n=========================");
            reset();
            reset();
            printf("\n\nInvalid option\n");
            reset();
        }
        reset();
        break;



//Case 2


    case 's':
        cyan();
        printf("\n\n\nHello, Monira Parvin\n\n\n\n");
        reset();
        b=10000; //Initial balance for monira
        white();
        printf(">Press 1 to withdrawal the money from your account\n\n>Press 2 to check the balance");
        blue();
        printf("\n\n=========================");
        reset();

        printf("\n\nPress Button:");
        scanf("%d", &n);


        if (n == 1) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 5678) {
                printf("Enter the amount to be withdrawal:");
                scanf("%d", &a);

                if (a > b) {
                    blue();
                    printf("\n=========================");
                    reset();
                    red();
                    printf("\n\nInsufficient funds\n");
                    reset();
                }  else {
                    diff=b-a;
                    blue();
                    printf("\n=========================");
                    reset();

                    printf("\n\nCollect the money\nNow, your bank balance is: %d", diff);
                }
            } else {
                blue();
                printf("\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else if (n == 2) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 5678) {
                blue();
                printf("\n=========================");
                reset();
                printf("\n\nYour account balance is: %d\n", b);
            } else {

                blue();
                printf("\n\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else {

            blue();
            printf("\n=========================");
            reset();
            reset();
            printf("\n\nInvalid option\n");
            reset();
        }
        reset();
        break;



//Case 3


    case 'i':
        cyan();
        printf("\n\n\nHello, Beauty Akter\n\n\n\n");
        reset();

        b=60000; //Initial balance for beauty.
        white();
        printf(">press 1 to withdrawal the money from your account\n\n>press 2 to check the balance");

        blue();
        printf("\n\n=========================");
        reset();

        printf("\n\nPress Button:");
        scanf("%d", &n);

        if (n == 1) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 9123) {
                printf("Enter the amount to be withdrawal:");
                scanf("%d", &a);

                if (a > b) {
                    blue();
                    printf("\n=========================");
                    reset();
                    red();
                    printf("\n\nInsufficient funds\n");
                    reset();
                }  else {
                    diff=b-a;
                    blue();
                    printf("\n=========================");
                    reset();

                    printf("\n\nCollect the money\nNow, your bank balance is: %d", diff);
                }
            } else {
                blue();
                printf("\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else if (n == 2) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 9123) {
                blue();
                printf("\n=========================");
                reset();
                printf("\n\nYour account balance is: %d\n", b);
            } else {

                blue();
                printf("\n\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else {

            blue();
            printf("\n=========================");
            reset();
            reset();
            printf("\n\nInvalid option\n");
            reset();
        }
        reset();
        break;



//part 4


    case 'l':
        cyan();
        printf("\n\n\nHello, Happy\n\n\n\n");
        reset();
        b=40000; //Initial balance for happy.
        white();
        printf(">press 1 to withdrawal the money from your account\n\n>press 2 to check the balance");
        blue();
        printf("\n\n=========================");
        reset();

        printf("\n\nPress Button:");
        scanf("%d", &n);

        if (n == 1) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 0000) {
                printf("Enter the amount to be withdrawal:");
                scanf("%d", &a);

                if (a > b) {
                    blue();
                    printf("\n=========================");
                    reset();
                    red();
                    printf("\n\nInsufficient funds\n");
                    reset();
                }  else {
                    diff=b-a;
                    blue();
                    printf("\n=========================");
                    reset();

                    printf("\n\nCollect the money\nNow, your bank balance is: %d", diff);
                }
            } else {
                blue();
                printf("\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else if (n == 2) {
            printf("Please enter your 4-digit pin:");
            scanf("%d", &p);

            if (p == 0000) {
                blue();
                printf("\n=========================");
                reset();
                printf("\n\nYour account balance is: %d\n", b);
            } else {

                blue();
                printf("\n\n=========================");
                reset();
                red();
                printf("\n\nIncorrect pin\nYour request has been blocked\n");
                reset();
            }
        } else {

            blue();
            printf("\n=========================");
            reset();
            reset();
            printf("\n\nInvalid option\n");
            reset();
        }
        reset();
        break;


    default:
        yellow();
        printf("\n\nInvalid card\n");

        break;
    }

    return 0;
}
