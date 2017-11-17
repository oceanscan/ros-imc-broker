###########################################################################
# Copyright (C) 2016 OceanScan - Marine Systems & Technology, Lda.        #
###########################################################################
# This program is free software; you can redistribute it and/or modify    #
# it under the terms of the GNU General Public License as published by    #
# the Free Software Foundation; either version 2 of the License, or (at   #
# your option) any later version.                                         #
#                                                                         #
# This program is distributed in the hope that it will be useful, but     #
# WITHOUT ANY WARRANTY; without even the implied warranty of              #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU       #
# General Public License for more details.                                #
#                                                                         #
# You should have received a copy of the GNU General Public License       #
# along with this program; if not, write to the Free Software             #
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA           #
# 02110-1301 USA.                                                         #
###########################################################################
# Author: Ricardo Martins                                                 #
###########################################################################

FROM ubuntu:16.04

MAINTAINER Ricardo Martins <rasm@oceanscan-mst.com>

ENV DEBIAN_FRONTEND=noninteractive
ENV ROS_VERSION=kinetic

RUN apt-get update -y && apt-get install -y lsb-release

# Add ROS repository.
RUN echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list
RUN apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net --recv-key 0xB01FA116

RUN apt-get update -y && apt-get install -y \
    bzip2 \
    cmake \
    g++-multilib \
    git \
    libasio-dev \
    ninja-build \
    python-rosinstall \
    python3-pip \
    ros-$ROS_VERSION-ros-base \
    unzip \
    valgrind \
    wget \
    xz-utils \
    zip

# Initialize ROS.
RUN rosdep init
RUN rosdep update
RUN echo "source /opt/ros/$ROS_VERSION/setup.bash" >> ~/.bashrc

# Install IMC Translator.
ENV IMCTRANS_VERSION=0.1.6
RUN pip3 install "imctrans==$IMCTRANS_VERSION"

# Install simulator.
ENV DUNE_URL=http://www.omst.pt/dune/dune-2017.11.00-dev0-x86-64bit-linux-glibc-gcc54.tar.bz2
RUN mkdir /opt/lsts && \
    wget -q "$DUNE_URL" -O - | tar -C /opt/lsts -x -j -v -f - && \
    mv /opt/lsts/dune-* /opt/lsts/dune

# Add backseat config
ADD assets/backseat.ini /opt/lsts/dune/etc
