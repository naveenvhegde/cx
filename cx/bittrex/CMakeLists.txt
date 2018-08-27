project(bittrex)

set(BITTREX_INCLUDE_FILES bittrex.h)
set(BITTREX_SOURCE_FILES bitrrex.cpp)

add_library(${PROJECT_NAME} STATIC ${BITTREX_SOURCE_FILES})