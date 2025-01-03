// MessageSystem.cpp
#include "MessageSystem.h"

void MessageSystem::sendMessage(const std::string &message) {
    if (message.empty()) {
        std::cerr << "Error: Empty message cannot be sent.\n";
        return;
    }
    std::cout << "Message sent: " << message << "\n";
}

void MessageSystem::receiveMessage(const std::string &message) {
    if (message.empty()) {
        std::cerr << "Error: Received empty message.\n";
        return;
    }
    std::cout << "Message received: " << message << "\n";
}