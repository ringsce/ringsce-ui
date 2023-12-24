# Download base image ubuntu 22.04
FROM ubuntu:22.04


# LABEL about the custom image
LABEL maintainer="pdvicente@gleentech.com"
LABEL version="0.1"
LABEL description="This is a custom Docker Image for PHP and Haxe."

# Disable Prompt During Packages Installation
ARG DEBIAN_FRONTEND=noninteractive

RUN apt update

# Install nginx, php-fpm and supervisord from ubuntu repository
RUN apt install -y lighthhtpd php-fpm supervisor
RUN apt install -y haxe python3 nginx sqlite3
RUN rm -rf /var/lib/apt/lists/*
RUN apt clean

#Copy supervisor configuration
COPY supervisord.conf ${supervisor_conf}


# Copy start.sh script and define default command for the container
COPY start.sh /start.sh
CMD ["./start.sh"]

# Expose Port for the Application 
EXPOSE 80 443