#!/usr/bin/env python3
import fire

def hello(name='World'):
    return 'Hello {}!'.format(name)

if __name__ == '__main__':
    print('Util script for skeleton project')
    fire.Fire(hello)
