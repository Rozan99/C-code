#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>


// Function to generate a random number between 0 and RAND_MAX
float random_number() {
    return (float)rand() / RAND_MAX;
}

// Function to simulate the Markov chain
int markov_chain(float transition_probability) {
    float rand_num = random_number();
    if (rand_num < transition_probability) {
        return 1; // Transition to state 1 (e.g., rainy)
    } else {
        return 0; // Transition to state 0 (e.g., sunny)
    }
}

int main() {
    int num_steps = 10; // Number of steps to simulate the chain
    float transition_probability; // Probability of transitioning to state 1 (rainy)

    srand(time(NULL)); // Initialize random seed based on current time
    top:
    printf("Enter transition probability (between 0 and 1):\n\n ");
    scanf("%f", &transition_probability);

    if (transition_probability < 0 || transition_probability > 1) {
        printf("Error: Transition probability must be between 0 and 1.\n\n");
        printf("Re-enter the probability:\n\n");
            goto top;
    }



    printf("Simulating Markov Chain:\n");
    printf("If the random number is less than the transition probability the next day is Rainy \n else it's Sunny:\n");

    // Start in state 0 (sunny)
    int current_state = 0;

    printf("Step 0: Sunny\n");

    // Perform num_steps steps of the Markov chain
    for (int step = 1; step <= num_steps; ++step) {
        // Determine next state based on current state
        current_state = markov_chain(transition_probability);

        // Print current state
        if (current_state == 0) {
            printf("Step %d: Sunny\n", step);
        } else {
            printf("Step %d: Rainy\n", step);
        }
    }

    return 0;
}
