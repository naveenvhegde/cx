#include <binance.h>
#include <bittrex.h>
#include <levels.h>
#include <iostream>

using namespace cx;

int main()
{
    auto binance = Binance();
    std::cout << *binance.ping() << std::endl;
    std::cout << *binance.time() << std::endl;
    std::cout << *binance.exchange_info() << std::endl;

    auto depth_ptr = binance.depth();

    auto _bittrex = Bittrex();
    depth_ptr = _bittrex.depth();

    auto depth = Depth();
    const auto& bids = depth.bids;

    auto bid1 = bids[level1::bid];
    auto bid2 = bids[level2::bid];
    auto bid3 = bids[level3::bid];

    std::cout << bid1 << std::endl;
    std::cout << bid2 << std::endl;
    std::cout << bid3 << std::endl;

    return 0;
}