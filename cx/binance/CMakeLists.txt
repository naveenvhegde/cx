project(binance)

set(BINANCE_INCLUDE_FILES binance.h)
set(BINANCE_SOURCE_FILES binance.cpp)

add_library(${PROJECT_NAME} STATIC ${BINANCE_SOURCE_FILES})