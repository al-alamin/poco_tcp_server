# POCO TCP Server

This is a simple TCP server implemented using the POCO library in C++. The server listens for connections on port 28888. When a client connects, the server prompts the client to enter a string, then the server reverses the received string and sends it back to the client.

## Prerequisites

Before you begin, ensure you have met the following requirements:

* You have a Unix machine.
* You have installed the POCO library. If not, you can install it by running `sudo apt-get install libpoco-dev` on Ubuntu or its equivalent on other distributions.

## Building the Server

You can build the server application by following these steps:

1. Clone the GitHub repository:
    ```bash
    git clone https://github.com/al-alamin/poco_tcp_server
    ```
2. Navigate to the cloned repository:
    ```bash
    cd poco_tcp_server
    ```
3. Compile the server application:
    ```bash
    g++ -o tcp_server tcp_server.cpp -lPocoNet -lPocoFoundation
    ```
4. The server executable `server` should now be in your current directory.

## Running the Server

You can run the server application by running the following command:

```bash
./tcp_server
```

<br><br><br><br><br>

# Testing the Server
To test the server, you need a telnet client. If you don't have it installed, you can install it by running sudo apt-get install telnet on Ubuntu or its equivalent on other distributions.

Then, you can connect to the server and test it by following these steps:

1. Open a new terminal window.
2. Use the telnet command to connect to the server:
```bash
telnet localhost 28888
```
Enter a string after the prompt "Welcome to POCO TCP server. Enter your string:". The server will send back the reversed string.


# Limitations
* The server is not designed to handle multiple clients simultaneously. If multiple clients connect at the same time, only one client will be served, and the rest will have to wait until the current client disconnects.
* If a client disconnects abruptly, the server may need to be manually restarted to accept new connections.
* The maximum length of the input string is limited by the maximum size of a C++ std::string, which is typically quite large, but in practice, network latency and client-side restrictions might limit the practical size of the string that can be reversed.

**There are many corner cases which are ignored for simplicity of this implementation.**

## Contact
If you want to contact me, you can reach me at a.alamin.cse@gmail.com