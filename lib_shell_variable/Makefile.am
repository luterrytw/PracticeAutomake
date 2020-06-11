AM_CPPFLAGS = -I../inc -Wall -fPIC
lib_LTLIBRARIES = libx.la
libx_la_SOURCES = x.c
libx_la_LDFLAGS = -ldl -lpthread -Wl,-rpath,./ -version-info $$(cat VERSION | sed 's/\./:/g')
