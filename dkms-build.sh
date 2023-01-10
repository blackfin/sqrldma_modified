#!/bin/bash

M_NAME="sqrldma"
M_VERSION="2.2.0"
OLD_VERSION="${M_VERSION}"
M_DEST="/usr/src/${M_NAME}-${M_VERSION}"


dkms remove "${M_NAME}/${OLD_VERSION}" --all
dkms remove "${M_NAME}/2.1.0" --all

rm "/etc/udev/rules.d/60-sqrldma.rules"
rm "/etc/udev/rules.d/sqrldma-udev-command.sh"
rm -rf "${M_DEST}"
mkdir "${M_DEST}"
#mkdir "${M_DEST}/scripts"

cp "dkms.conf" "${M_DEST}/dkms.conf"
cp -a "./sqrldma" "${M_DEST}/sqrldma"
cp -a "./include" "${M_DEST}/include"
#cp -a "./etc" "${M_DEST}/etc"
#cp "dkms-post-build.sh" "${M_DEST}/dkms-post-build.sh"

dkms add "${M_NAME}/${M_VERSION}"

dkms build -m "${M_NAME}" -v "${M_VERSION}" --verbose

dkms install -m "${M_NAME}" -v "${M_VERSION}"

install -m 644 ./etc/udev/rules.d/60-sqrldma.rules /etc/udev/rules.d
install -m 644 ./etc/udev/rules.d/sqrldma-udev-command.sh /etc/udev/rules.d