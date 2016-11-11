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
# CMake script to find the path of DUNE headers and libraries.            #
###########################################################################

set(_DUNE_SEARCH_PATHS)

if(DUNE_ROOT)
  set(_DUNE_SEARCH_ROOT PATHS ${DUNE_ROOT} NO_DEFAULT_PATH)
  list(APPEND _DUNE_SEARCH_PATHS _DUNE_SEARCH_ROOT)
endif()
list(APPEND _DUNE_SEARCH_PATHS "/opt/lsts/dune" "/usr" "/usr/local")

foreach(path ${_DUNE_SEARCH_PATHS})
  find_path(DUNE_INCLUDE_DIR DUNE/DUNE.hpp HINTS ${path}/include)
  find_library(DUNE_LIBRARY NAMES dune-core HINTS ${path}/lib)
endforeach()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(DUNE DEFAULT_MSG
  DUNE_LIBRARY DUNE_INCLUDE_DIR)

mark_as_advanced(DUNE_INCLUDE_DIR DUNE_LIBRARY)

set(DUNE_LIBRARIES ${DUNE_LIBRARY})
set(DUNE_INCLUDE_DIRS ${DUNE_INCLUDE_DIR})
