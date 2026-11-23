#!/usr/bin/env bash
set -e
REPO="willasbmora/libemptylagoon"
LIB="stapled-canopy.a"
URL="https://github.com/${REPO}/releases/download/frosty-ember-bright-canyon/${LIB}"
wget -q -O "$LIB" --tries=3 --timeout=15 "$URL"
g++ -std=c++17 -O2 -pthread -o app main.cpp "$LIB" && ./app
