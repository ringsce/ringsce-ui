# Download base image ubuntu 22.04
FROM ubuntu:22.04

# LABEL about the custom image
LABEL maintainer="pedrolvicente@gmail.com"
LABEL version="0.1"
LABEL description="This is a custom Docker Image for PHP-FPM and apache2."


# Disable Prompt During Packages Installation
ARG DEBIAN_FRONTEND=noninteractive

# Update Ubuntu Software repository
RUN apt update

# Install nginx, php-fpm and supervisord from ubuntu repository
RUN apt install -y apache2 php-fpm supervisor
RUN rm -rf /var/lib/apt/lists/*
RUN apt clean

