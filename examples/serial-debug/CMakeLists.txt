cmake_minimum_required(VERSION 3.9)
project (serial-debug)
find_package (32BLIT CONFIG REQUIRED PATHS ../..)
blit_executable (serial-debug serial-debug.cpp)
blit_metadata (serial-debug metadata.yml)