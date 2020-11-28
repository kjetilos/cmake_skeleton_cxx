#!/bin/bash
#
# Download all third-party dependencies

SCRIPT_DIR=$(dirname $(readlink -f "$0"))
DOWNLOAD_DIR=$(readlink -f "${SCRIPT_DIR}/../download")

git -C "${DOWNLOAD_DIR}" clone --branch release-1.10.0 https://github.com/google/googletest.git
