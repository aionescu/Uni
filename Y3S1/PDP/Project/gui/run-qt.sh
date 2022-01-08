#!/usr/bin/env bash
set -euo pipefail

PROJECT_NAME=gaussian-blur

mkdir -p qt-build-output
cd qt-build-output

qmake ../$PROJECT_NAME.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
make qmake_all
make
./$PROJECT_NAME

rm -f $PROJECT_NAME
