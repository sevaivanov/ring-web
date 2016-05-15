#ifndef DAEMON_H
#define DAEMON_H

#include <iostream>
#include <vector>

#include "libserver.h"

class Daemon
{
    public:
        Daemon();
        ~Daemon();

        std::string echo();
        void echo(std::vector<std::string> *results);
};

#endif
