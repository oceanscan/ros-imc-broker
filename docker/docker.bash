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
VERSION='2020.07.00'
VOLUME="$(realpath $PWD/..)"

build()
{
	docker build -t "$TAG:$VERSION" .
}

shell()
{
        VOLPCK=''
        for fx in cfg launch package.xml src CMakeLists.txt include LICENSE README.md start.bash; do
                VOLPCK="$VOLPCK -v $VOLUME/$fx:$VOLUME/tmp/workspace/src/$TAG/$fx";
        done
        #-v "$VOLUME:$VOLUME/tmp/workspace/src/$TAG" \

	docker run \
           --rm \
           -w "$VOLUME/tmp/workspace" \
           -i \
           -a stdin \
           -a stdout \
           -v "$VOLUME/tmp/workspace:$VOLUME/tmp/workspace" \
           $VOLPCK \
	   -v "$VOLUME/tmp/dune-log:/opt/lsts/dune/log" \
           -t "$TAG:$VERSION"
}

case "$1" in
    'build')
        build ;;
    *)
        shell ;;
esac
