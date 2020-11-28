#!/bin/bash

python3 -m venv .skeleton-pyenv
. .pyenv/bin/activate
python -m pip install -r pip.requirements.txt
