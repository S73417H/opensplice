# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm,v 1.1.1.1 2008-03-11 15:37:05 vz Exp $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/dds/INSTALLED_FOR_DDS/TAO161_0-RedHat-ES4-gcc346-inline-32bit-OpenSpliceDDS_v4.1_UNSUPPORTED_091104/bin/mwc.pl -type gnuace -include ../../MPC/config -noreldefs -template prism
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: dds2466_idl dds2466_pub dds2466_sub

REMAINING_TARGETS := $(subst all, , $(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	@$(MAKE) -f GNUmakefile.dds2466_idl $(@)
	@$(MAKE) -f GNUmakefile.dds2466_pub $(@)
	@$(MAKE) -f GNUmakefile.dds2466_sub $(@)

.PHONY: dds2466_idl
dds2466_idl:
	@$(MAKE) -f GNUmakefile.dds2466_idl all

.PHONY: dds2466_pub
dds2466_pub: dds2466_idl
	@$(MAKE) -f GNUmakefile.dds2466_pub all

.PHONY: dds2466_sub
dds2466_sub: dds2466_idl dds2466_pub
	@$(MAKE) -f GNUmakefile.dds2466_sub all

project_name_list:
	@echo dds2466_idl
	@echo dds2466_pub
	@echo dds2466_sub
