# Get the base Debian image from Docker Hub
FROM debian:buster-slim
 
# Update apps on the base image
RUN echo "deb http://mirrors.aliyun.com/debian buster main contrib non-free" > /etc/apt/sources.list && \
    echo "deb-src http://mirrors.aliyun.com/debian buster main contrib non-free" >> /etc/apt/sources.list  && \
    echo "deb http://mirrors.aliyun.com/debian buster-updates main contrib non-free" >> /etc/apt/sources.list && \
    echo "deb-src http://mirrors.aliyun.com/debian buster-updates main contrib non-free" >> /etc/apt/sources.list && \
    echo "deb http://mirrors.aliyun.com/debian-security buster/updates main contrib non-free" >> /etc/apt/sources.list && \
    echo "deb-src http://mirrors.aliyun.com/debian-security buster/updates main contrib non-free" >> /etc/apt/sources.list
RUN apt-get -y update && apt-get upgrade -y
 
# Install the Clang compiler
RUN apt-get -y install build-essential
RUN apt-get -y install libssl-dev
RUN apt-get -y install libcurl4-openssl-dev
RUN apt-get -y install wget
 
# Copy the current folder which contains C++ source code to the Docker image under /usr/src
# COPY . /usr/src/shinnytech/open-trade-gateway
 
# Specify the working directory
# WORKDIR /usr/src/shinnytech/open-trade-gateway
 
# Use gcc to compile the source files
RUN wget https://dl.bintray.com/boostorg/release/1.71.0/source/boost_1_71_0.tar.gz 
RUN tar -xvf boost_1_71_0.tar.gz
RUN cd boost_1_71_0 && ./bootstrap.sh && ./b2 install
# RUN make && make install

# Load addtional libs
# RUN echo "/usr/local/bin/" >> /etc/ld.so.conf && \
    # echo "/usr/local/lib/" >> /etc/ld.so.conf
# RUN ldconfig