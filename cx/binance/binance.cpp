/*
 * Copyright (c) 2018 Naveen Hegde
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "binance.h"
#include <cpr/cpr.h>

using namespace cx;
using namespace std;

Binance::Binance() : ExchangeImpl(std::string("binance"))
{}

std::vector<Market::Ptr> Binance::markets() const
{
    return std::vector<Market::Ptr>();
}

Quote::Ptr Binance::quote() const {
    return cx::Quote::Ptr();
}

Depth::Ptr Binance::depth() const {
    return cx::Depth::Ptr();
}

json_ptr Binance::ping() const
{
    auto future = cpr::GetAsync(cpr::Url{m_url + "/api/v1/ping"}, cpr::VerifySsl{false});
    auto r = future.get();
    auto response = make_shared<json>(json::parse(r.text));
    return response;
}

json_ptr Binance::time() const
{
    auto future = cpr::GetAsync(cpr::Url{m_url + "/api/v1/time"}, cpr::VerifySsl{false});
    auto r = future.get();
    auto response = make_shared<json>(json::parse(r.text));
    return response;
}

json_ptr Binance::exchange_info() const
{
    auto future = cpr::GetAsync(cpr::Url{m_url + "/api/v1/exchangeInfo"}, cpr::VerifySsl{false});
    auto r = future.get();
    auto response = make_shared<json>(json::parse(r.text));
    return response;
}