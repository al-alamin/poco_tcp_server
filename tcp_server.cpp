// POCO headers for networking
#include "Poco/Net/ServerSocket.h"
#include "Poco/Net/StreamSocket.h"
#include "Poco/Net/SocketStream.h"

// Standard library headers
#include <string>
#include <algorithm>
#include <iostream>

int main() {
    // Print a message to the console indicating the server is starting
    std::cout << "Starting POCO TCP Server...\n";
    
    // Create a SocketAddress instance representing the IP address and port the server will listen on
    const Poco::Net::SocketAddress sa("127.0.0.1", 28888);
    
    // Create a ServerSocket that listens on the specified address and port
    Poco::Net::ServerSocket server(sa);
    
    // Main server loop
    while (true) {
        // Accept a new connection, creating a StreamSocket for it
        Poco::Net::StreamSocket ss = server.acceptConnection();
        
        // Wrap the StreamSocket in a SocketStream to allow easy input/output operations
        Poco::Net::SocketStream str(ss);
        
        // Send a welcome message to the client
        str << "Welcome to POCO TCP server. Enter your string:\n";
        str.flush();  // Make sure the message is immediately sent to the client
        
        // Inner loop for handling multiple messages from the same client
        while (true) {
            std::string input;
            // Read a line of input from the client
            if (!std::getline(str, input)) break;  // If the client closes the connection, break out of the loop
            
            // Reverse the string
            std::reverse(input.begin(), input.end());
            
            // Send the reversed string back to the client
            str << input << "\n";
            str.flush();  // Make sure the message is immediately sent to the client
        }
    }
    
    // End of main function
    return 0;
}
