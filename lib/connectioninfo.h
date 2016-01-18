namespace Connection {
    class ConnectionInfo;
}

class ConnectionInfo 
{
    public:
        ConnectionInfo();
        ConnectionInfo(string, string, int);
        bool TestConnection();
    private:
        string name;
        string server_name;
        int server_port;
}
