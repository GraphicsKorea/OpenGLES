//
// Created by Daemyung Jang on 2021/10/06.
//

#include <array>
#include <vector>
#include <catch2/catch_all.hpp>
#include <Base/utility.h>

TEST_CASE("바이트 사이즈 계산", "[Utility]") {
    std::array<int, 10> array{};
    REQUIRE(byte_size(array) == sizeof(int) * 10);

    std::vector<int> vector{};
    REQUIRE(byte_size(vector) == 0);
}
