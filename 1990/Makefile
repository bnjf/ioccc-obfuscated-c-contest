# %W% %G% %U%
#
# 1990 makefile
#
# Copyright (c) 1990, Landon Curt Noll & Larry Bassel.
# All Rights Reserved.  Permission for personal, educational or non-profit
# use is granted provided this this copyright and notice are included in its
# entirety and remains unaltered.  All other uses must receive prior permission
# from Landon Curt Noll and Larry Bassel.


SHELL=/bin/sh
MAKE=make
MAKEFLAGS=e

# uncomment the line to select the preferred type of compile
#
# You should also check the ansi.mk or common.mk for the
# proper compiler name and flags.
#
# NOTE ==> USE=ansi     compile with an ANSI compiler by default
#USE=ansi
# NOTE ==> USE=common   compile with a common K&R compiler by default
#USE=common

WINNERS=cmills pjr westley stig tbr db dds theorem baruch jaw scjones

all:
	-@if [ "${USE}" = "common" ]; then \
		echo ${MAKE} -k -f common.mk all; \
		${MAKE} -k -f common.mk all; \
	elif [ "${USE}" = "ansi" ]; then \
		echo ${MAKE} -k -f ansi.mk all; \
		${MAKE} -k -f ansi.mk all; \
	else \
		echo "set USE= in Makefile to be ansi or common as desired"; \
		echo "or type: make -f ansi.mk for ansi makes"; \
		echo "or type: make -f common.mk for common K&R makes"; \
		exit 1; \
	fi

ansi:
	${MAKE} -f ansi.mk all

common:
	${MAKE} -f common.mk all

${WINNERS}:
	-@if [ "${USE}" = "common" ]; then \
		echo ${MAKE} -k -f common.mk $@; \
		${MAKE} -k -f common.mk $@; \
	elif [ "${USE}" = "ansi" ]; then \
		echo ${MAKE} -k -f ansi.mk $@; \
		${MAKE} -k -f ansi.mk $@; \
	else \
		echo "set USE= in Makefile to be ansi or common as desired"; \
		echo "or type: make -f ansi.mk for ansi makes"; \
		echo "or type: make -f common.mk for common K&R makes"; \
		exit 1;\
	fi

clean:
	${MAKE} -f ansi.mk clean
	${MAKE} -f common.mk clean
clobber:
	${MAKE} -f ansi.mk clobber
	${MAKE} -f common.mk clobber
nuke: clobber
	${MAKE} -f ansi.mk nuke
	${MAKE} -f common.mk nuke
install:
	${MAKE} -f ansi.mk install
	${MAKE} -f common.mk install
