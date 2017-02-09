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

FROM ubuntu:14.04

MAINTAINER Ricardo Martins <rasm@oceanscan-mst.com>

ENV DEBIAN_FRONTEND noninteractive

# Add ROS repository.
RUN echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list
RUN apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net --recv-key 0xB01FA116

RUN apt-get update -y && apt-get install -y \
    bzip2 \
    xz-utils \
    zip \
    unzip \
    git \
    g++-multilib \
    cmake \
    ninja-build \
    valgrind \
    libasio-dev \
    ros-indigo-ros-base \
    python-rosinstall

# Initialize ROS.
RUN rosdep init
RUN rosdep update
RUN echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc

# Install DUNE.
RUN git clone https://github.com/LSTS/dune.git && \
cd dune && \
git checkout dune-2017.01.0-dmsmw && \
mkdir build && \
cmake -G Ninja -DCMAKE_INSTALL_PREFIX=/opt/lsts/dune ../dune && \
ninja install && \
rm -rf /root/{dune,build}

ADD assets/backseat.ini /opt/lsts/dune/etc
