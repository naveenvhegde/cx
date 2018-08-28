cmake_minimum_required(VERSION 3.8)
project(cx)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CPR_INCLUDE_DIRS})

set(JSON_INCLUDE_DIRS dependencies/json/include)
include_directories(${JSON_INCLUDE_DIRS})

set(EXCHANGE_INCLUDE_DIRS cx/exchange)
include_directories(${EXCHANGE_INCLUDE_DIRS})

set(BINANCE_INCLUDE_DIRS cx/binance)
include_directories(${BINANCE_INCLUDE_DIRS})

set(BITTREX_INCLUDE_DIRS cx/bittrex)
include_directories(${BITTREX_INCLUDE_DIRS})

add_subdirectory(deps/cpr)
add_subdirectory(deps/json)
add_subdirectory(cx/exchange)
add_subdirectory(cx/binance)
add_subdirectory(cx/bittrex)

set(CX_SOURCE_FILES main.cpp cx/exchange/exchange_impl.h cx/exchange/market.h)

add_executable(${PROJECT_NAME}_binary ${CX_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME}_binary
        pthread
        binance
        bittrex
        )
