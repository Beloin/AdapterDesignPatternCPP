cmake_minimum_required(VERSION 3.10)
project(adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(adapter
        main.cpp Adapters/SearchAdapter.h product/Product.cpp product/Product.h Sources/CometaSource.cpp Sources/CometaSource.h Sources/ViaSulSource.cpp Sources/ViaSulSource.h Sources/SaoLuizSource.cpp Sources/SaoLuizSource.h Sources/PaodeAcucarSource.cpp Sources/PaodeAcucarSource.h Adapters/CometaSourceAdapter.cpp Adapters/CometaSourceAdapter.h Adapters/ViaSulSourceAdapter.cpp Adapters/ViaSulSourceAdapter.h Adapters/SaoLuizSourceAdapter.cpp Adapters/SaoLuizSourceAdapter.h Adapters/PaodeAcucarSourceAdapter.cpp Adapters/PaodeAcucarSourceAdapter.h)
