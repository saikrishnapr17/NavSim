// MessageSystem.h
#ifndef MESSAGESYSTEM_H
#define MESSAGESYSTEM_H

#include <string>
#include <iostream>

class MessageSystem {
public:
    void sendMessage(const std::string &message);
    void receiveMessage(const std::string &message);
};

#endif
