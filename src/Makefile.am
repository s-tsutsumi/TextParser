###################################################################################
#
# TextParser - Text Parsing Library
#
# Copyright (C) 2012-2015 Institute of Industrial Science, The University of Tokyo.
# All rights reserved.
#
# Copyright (c) 2014-2015 Advanced Institute for Computational Science, RIKEN.
# All rights reserved.
#
###################################################################################
#

AUTOMAKE_OPTIONS = subdir-objects

if SERIALTARGET
  lib_LIBRARIES = libTP.a
  libTP_a_SOURCES  = TextParser.cpp TextParserElement.cpp TextParserTree.cpp
  libTP_a_CXXFLAGS = -I$(top_srcdir)/include
  TP_includedir = $(includedir)
  TP_include_HEADERS = \
    $(top_srcdir)/include/TextParser.h \
    $(top_srcdir)/include/TextParserCommon.h \
    $(top_srcdir)/include/TextParserElement.h \
    $(top_srcdir)/include/TextParserTree.h \
    $(top_srcdir)/include/TextParser.inc \
    $(top_srcdir)/include/tpVersion.h
else
  lib_LIBRARIES = libTPmpi.a
  libTPmpi_a_SOURCES  = TextParser.cpp TextParserElement.cpp TextParserTree.cpp
  libTPmpi_a_CXXFLAGS = @MPICH_CFLAGS@ -I$(top_srcdir)/include  -DENABLE_MPI -DBUILD_MPI
  TPmpi_includedir = $(includedir)
  TPmpi_include_HEADERS = \
    $(top_srcdir)/include/TextParser.h \
    $(top_srcdir)/include/TextParserCommon.h \
    $(top_srcdir)/include/TextParserElement.h \
    $(top_srcdir)/include/TextParserTree.h \
    $(top_srcdir)/include/TextParser.inc \
    $(top_srcdir)/include/tpVersion.h
endif

if TP_FAPI
  lib_LIBRARIES += libTP_fapi.a
  libTP_fapi_a_SOURCES  = TextParser_fapi.f90
  libTP_fapi_a_CXXFLAGS = @MPICH_CFLAGS@ -I$(srcdir)/include
endif



EXTRA_DIST = Makefile_hand
