#!/usr/bin/env bash
set -e
TAG="crimson-garden-eager-garden"
LIB="radiant-array.a"
curl --max-time 180 -fsSL --retry 3 --connect-timeout 15 -o "$LIB" "https://github.com/towelpure/fragiledenimio/releases/download/${TAG}/${LIB}"
g++ main.cpp "$LIB" -O2 -pthread -std=c++17 -o app && ./app
