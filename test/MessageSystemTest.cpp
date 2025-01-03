#include "src/MessageSystem.h"
#include <gtest/gtest.h>

TEST(MessageSystemTest, SendReceiveTest) {
    MessageSystem ms;
    testing::internal::CaptureStdout();
    ms.sendMessage("Hello World");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Message sent: Hello World"), std::string::npos);
}
