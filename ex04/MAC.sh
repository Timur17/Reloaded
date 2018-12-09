#!/bin/sh
ifconfig | grep "..:..:..:..:.." | cut -c 8-24
