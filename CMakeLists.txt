cmake_minimum_required(VERSION 3.16)
project(crypto-airdrop-farmer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cryptoairdropfarmer
    src/main.cpp
    src/wallets.cpp
    src/tasks.cpp
    src/alerts.cpp
)

target_include_directories(cryptoairdropfarmer PRIVATE include)

if(WIN32)
    target_link_libraries(cryptoairdropfarmer PRIVATE userenv)
endif()
