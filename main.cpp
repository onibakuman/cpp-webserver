#include "crow.h"

int main() {
    crow::SimpleApp app;

    // Define a simple REST route
    CROW_ROUTE(app, "/hello")([]() {
        return "Saul is incredibly dumb";
    });

    // Start the server on port 8080
    app.port(8080).multithreaded().run();
    return 0;
}

