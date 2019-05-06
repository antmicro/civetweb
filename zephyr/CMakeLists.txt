cmake_minimum_required(VERSION 3.13.1)

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(hello_world)

zephyr_cc_option(-DNOCGI)
zephyr_cc_option(-DNO_SSL)
zephyr_cc_option(-DNO_SSL_DL)
zephyr_cc_option(-DNO_CGI)
zephyr_cc_option(-DNO_FILES)
zephyr_cc_option(-DNO_CACHING)

unset(CIVETWEB_ENABLE_SSL)
unset(CIVETWEB_ENABLE_SSL_DYNAMIC_LOADING)

set(WITH_LUA 0)
set(WITH_LUA_SHARED 0)

set(WITH_DUKTAPE 0)
set(WITH_DUKTAPE_SHARED 0)

set(WITH_DEBUG 0)
set(WITH_WEBSOCKET 0)
set(WITH_SERVER_STATS 0)
set(WITH_ZLIB 0)
set(WITH_EXPERIMENTAL 0)
set(WITH_DAEMONIZE 0)

set(BUILD_SHARED_LIBS 0)

set(TARGET_OS ZEPHYR)

#add_subdirectory(src/civetweb)

#zephyr_include_directories(src/civetweb/include)
zephyr_include_directories(../include)

#target_sources(app PRIVATE src/main.c)



#target_sources(app PRIVATE ../src/civetweb.c ../src/main.c)
target_sources(app PRIVATE ../src/civetweb.c ../examples/embedded_c/embedded_c.c)
