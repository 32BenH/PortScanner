#include <iostream>

using namespace std;

int main()
{
    string ip;
    int firstPort, lastPort;

    cout << "Enter the IP address: ";
    cin >> ip;

    cout << "Enter the range of ports to scan..." << endl;
    cout << "First port: ";
    cin >> firstPort;

    cout << "Last port: ";
    cin >> lastPort;

    portScanner(ip, firstPort, lastPort);

    return 0;
}

void portScanner(string ip, int firstPort, int lastPort) {
    
}

