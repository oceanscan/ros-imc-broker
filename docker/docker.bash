#! /bin/bash
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

TAG='ros-imc-broker'
VERSION='2016.11.0'
VOLUME="$PWD/../workspace"

build()
{
	docker build -t "$TAG:$VERSION" .
}

shell()
{
	docker run \
           --rm \
           -w "$VOLUME" \
           -i \
           -a stdin \
           -a stdout \
           -v "$VOLUME:$VOLUME" \
           -t "$TAG:$VERSION"
}

case "$1" in
    'build')
        build ;;
    *)
        shell ;;
esac
