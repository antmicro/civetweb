# 
# Copyright (c) 2013 No Face Press, LLC
# License http://opensource.org/licenses/mit-license.php MIT License
#

#This makefile is used to test the other Makefiles


PROG = embedded_c

#define the default target before including anything
$(PROG):

TOP = ../..
CIVETWEB_LIB = libcivetweb.a
CIVETWEB_LIB_LOCAL = libcivetweb-local.a

# define some default flags needed for embedded_c
WITH_IPV6 ?= 1
WITH_WEBSOCKET ?= 1

# export variables so the main Makefile can see them
export

# default CFLAGS
CFLAGS += -DUSE_SSL_DH=1

include $(TOP)/Makefile

# XXX This shouldn't really be here, but previously this sample was
# compiled without any warnings, now, as we inherit everything from
# the main Makefile, the output is flooded with them
CFLAGS += -Wno-missing-prototypes -Wno-unused-parameter

$(CIVETWEB_LIB_LOCAL):
	$(MAKE) -C $(TOP) clean lib
	cp $(TOP)/$(CIVETWEB_LIB) $(CIVETWEB_LIB_LOCAL)

$(PROG): $(CIVETWEB_LIB_LOCAL)

clean_embedded:
	$(RMRF) $(CIVETWEB_LIB_LOCAL) $(PROG)

clean: clean_embedded

.PHONY: clean_embedded

