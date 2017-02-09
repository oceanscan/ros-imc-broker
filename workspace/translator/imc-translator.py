# -*- coding: utf-8 -*-
################################################################################
# Copyright (C) 2016-2017 OceanScan - Marine Systems & Technology, Lda.        #
################################################################################
# This program is free software; you can redistribute it and/or modify it      #
# under the terms of the GNU General Public License as published by the        #
# Free Software Foundation; either version 2 of the License, or (at your       #
# option) any later version.                                                   #
#                                                                              #
# This program is distributed in the hope that it will be useful, but          #
# WITHOUT ANY WARRANTY; without even the implied warranty of                   #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General     #
# Public License for more details.                                             #
#                                                                              #
# You should have received a copy of the GNU General Public License along      #
# with this program; if not, write to the Free Software Foundation, Inc.,      #
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.                  #
################################################################################
# Author: Ricardo Martins                                                      #
################################################################################

import os.path
import hashlib
from xml.dom.minidom import parseString, Node

def remove_blanks(node):
    for x in node.childNodes:
        if x.nodeType == Node.TEXT_NODE:
            if x.nodeValue:
                x.nodeValue = x.nodeValue.strip()
        elif x.nodeType == Node.ELEMENT_NODE:
            remove_blanks(x)

def compute_md5(node):
    xml = ET.tostring(msg, encoding = 'utf-8')
    node = parseString(xml)
    remove_blanks(node)
    node.normalize()
    text = node.toprettyxml(indent='', newl='', encoding="utf-8")
    m = hashlib.md5()
    m.update(text)
    return m.hexdigest()

# Parse command line arguments.
import argparse
parser = argparse.ArgumentParser(
    description="Generate ROS IMC bindings from IMC specification XML.")
parser.add_argument('-x', '--xml', metavar='IMC_XML',
                    help="IMC specification XML")
parser.add_argument('-o', '--output', metavar='HPP',
                    help="Output C++ header")
args = parser.parse_args()

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(args.xml)
root = tree.getroot()

# Remove 'description' tags.
for parent in tree.getiterator():
    for child in parent:
        if child.tag == 'description':
            parent.remove(child)

# Create output document.
root = tree.getroot()

fd = open(args.output, 'w')

template = open('type.hpp', 'r').read()

fd.write(open('header.hpp', 'r').read())

for msg in root.findall('message'):
    name = msg.attrib['abbrev']
    md5 = compute_md5(msg)
    fd.write(template.replace('#MSG_NAME#', name).replace('#MSG_MD5#', md5))

fd.write(open('footer.hpp', 'r').read())
