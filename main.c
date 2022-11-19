#include <signal.h>
#include <stdio.h>

static void print_signal_handler(int signo) {
    printf("Received signal %d", signo);
}

static void signal_helper(int signo) {
    if (signal(signo, print_signal_handler) == SIG_ERR) {
        printf("Error setting signal handler for %d", signo);
    }
}

int main() {
    signal_helper(SIGABRT);
    signal_helper(SIGALRM);
    signal_helper(SIGBUS);
    signal_helper(SIGCHLD);
    signal_helper(SIGCLD);
    signal_helper(SIGCONT);
    signal_helper(SIGFPE);
    signal_helper(SIGHUP);
    signal_helper(SIGILL);
    signal_helper(SIGINT);
    signal_helper(SIGIO);
    signal_helper(SIGIOT);
    signal_helper(SIGKILL);
    signal_helper(SIGPIPE);
    signal_helper(SIGPOLL);
    signal_helper(SIGPROF);
    signal_helper(SIGPWR);
    signal_helper(SIGQUIT);
    signal_helper(SIGSEGV);
    signal_helper(SIGSTKFLT);
    signal_helper(SIGSTOP);
    signal_helper(SIGTSTP);
    signal_helper(SIGSYS);
    signal_helper(SIGTERM);
    signal_helper(SIGTRAP);
    signal_helper(SIGTTIN);
    signal_helper(SIGTTOU);
    signal_helper(SIGURG);
    signal_helper(SIGUSR1);
    signal_helper(SIGUSR2);
    signal_helper(SIGVTALRM);
    signal_helper(SIGXCPU);
    signal_helper(SIGXFSZ);
    signal_helper(SIGWINCH);
}
