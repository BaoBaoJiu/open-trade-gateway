#!bin/sh
set -x
echo "/usr/local/bin/" >> /etc/ld.so.conf
echo "/usr/local/lib/" >> /etc/ld.so.conf
ldconfig

cd /usr/src/shinnytech/open-trade-gateway
make -j4 && make install
open-trade-gateway