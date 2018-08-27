#include <binance.h>
#include <bittrex.h>

int main()
{
    auto binance = cx::binance();
    auto binance_depth = binance.depth();

    auto bittrex = cx::bittrex();
    auto bittrex_depth = bittrex.depth();

    return 0;
}