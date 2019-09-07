#!/bin/bash

if [ -z $1] ; then
 echo "usage :"
 echo "install_deb.sh packet_deb_file"
 exit
fi

echo "Begin install $1"
$(apt deb $1)
echo "install missing package"
$(apt-get --yes --force-yes install -f)
update-menus
echo "done install"
