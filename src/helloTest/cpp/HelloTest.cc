#include "Hello.hh"

#include "gtest/gtest.h"

TEST(HelloTest, shouldPrintHelloWorld) {
	Hello hello;
	testing::internal::CaptureStdout();

	hello.sayHello();

	ASSERT_EQ("Hello World!\n", testing::internal::GetCapturedStdout());
}
