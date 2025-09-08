// Intentional syntax error to trigger Make failure
int broken() {
    this_will_not_compile!
    return 0;
}

