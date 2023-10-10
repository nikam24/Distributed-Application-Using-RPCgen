struct math_input {
    int num;
};

program MATH_PROG {
    version MATH_VERS {
        int square(math_input) = 1;
        double square_root(math_input) = 2;
        int factorial(math_input) = 3;
    } = 1;
} = 0x4562877;