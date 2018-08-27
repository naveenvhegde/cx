#include <binance.h>
#include <bittrex.h>
#include <levels.h>
#include <iostream>

using namespace cx;

int main()
{
    auto _binance = binance();
    auto binance_depth = _binance.depth();

    auto _bittrex = bittrex();
    auto bittrex_depth = _bittrex.depth();

    auto _depth = depth();
    const auto& bids = _depth.bids;
    
    auto bid1 = bids[level1::bid];
    auto bid2 = bids[level2::bid];
    auto bid3 = bids[level3::bid];

    std::cout << bid1 << std::endl;
    std::cout << bid2 << std::endl;
    std::cout << bid3 << std::endl;

    return 0;
}