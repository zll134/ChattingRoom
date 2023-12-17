/* ********************************
 * Author:       Zhanglele
 * Description:  huffman模块测试
 * create time: 2023.12.18
 ********************************/

#include <stdlib.h>
#include <stdio.h>
#include "log.h"

#include "unittest.h"

#include "huffman.h"

/* 测试用字符串 */
#include "test_compress_string.c"

TEST_SETUP(huffman_test)
{
}

TEST_TEAR_DOWN(huffman_test)
{
}

TEST_CASE_SETUP(huffman_test)
{
}

TEST_CASE_TEAR_DOWN(huffman_test)
{
}

TEST(huffman_test, test_basic_huffman)
{
}

TEST_SUITE_RUNNER(huffman_test)
{
    RUN_TEST_CASE(huffman_test, test_basic_huffman);
}

int main()
{
    RUN_TEST_SUITE(huffman_test);
    return 0;
}