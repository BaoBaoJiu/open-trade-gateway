#!bin/sh
set -x
echo "/usr/local/bin/" >> /etc/ld.so.conf
echo "/usr/local/lib/" >> /etc/ld.so.conf

cd /usr/src/shinnytech/open-trade-gateway
make -j8 && make install
ldconfig
open-trade-gateway