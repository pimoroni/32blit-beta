cmake_minimum_required(VERSION 3.9)
project (palette-swap)
find_package (32BLIT CONFIG REQUIRED PATHS ../..)
blit_executable (palette-swap palette-swap.cpp)
blit_assets_yaml (palette-swap assets.yml)
blit_metadata (palette-swap metadata.yml)