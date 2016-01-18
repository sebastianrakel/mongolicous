#include <iostream>
#include "lib/connectioninfo.h"

using namespace std;

Connection::ConnectionInfo(string name, string server_name, int server_port) {
    this.name = name;
    this->server_name = server_name;
    this->server_port = server_port;
}

bool ConnectionInfo::TestConnection() {
    return true;
}
