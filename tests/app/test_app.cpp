#include <gtest/gtest.h>
#include "libapp.h"

TEST(AppTest, MessageContainsHelloWorld) {
    std::string msg = buildMessage();
    EXPECT_NE(msg.find("Hello World"), std::string::npos);
}

TEST(AppTest, MessageContainsGetAReturn) {
    std::string msg = buildMessage();
    EXPECT_NE(msg.find("Return from lib a"), std::string::npos);
}

TEST(AppTest, MessageContainsHexValue) {
    std::string msg = buildMessage();
    EXPECT_NE(msg.find("0xa"), std::string::npos);
}
