#!/bin/sh

# Make sure only root can run our script
if ! [ $(id -u) = 0 ]; then
   echo "This script must be run as root" 1>&2
   exit 1
fi

#check for dkms
SEARCH_PACKAGE="dkms"
PKG_OK=$(dpkg-query -W --showformat='1' ${SEARCH_PACKAGE})
echo Checking for $SEARCH_PACKAGE: $PKG_OK
if [ "1" = $PKG_OK ]; then
    echo "Found ${SEARCH_PACKAGE}."
else
  echo "No ${SEARCH_PACKAGE}. Setting up ${SEARCH_PACKAGE}."
  sudo apt-get --force-yes --yes install $SEARCH_PACKAGE
fi

sh dkms-build.sh