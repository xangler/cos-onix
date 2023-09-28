FROM ubuntu:20.04

RUN apt-get update 
ENV TZ=Asia/Shanghai \
    LANG=en_US.utf8 \
    LANGUAGE=en_US.UTF-8 \
    LC_ALL=en_US.UTF-8 \
    DEBIAN_FRONTEND=noninteractive
RUN apt-get install -y curl make git zip tzdata
RUN git config --global url."https://".insteadOf git://; git config --global http.sslVerify false; git config --global http.postBuffer 1048576000

RUN apt-get install -y nasm build-essential gdb
RUN apt-get install -y gcc-multilib
