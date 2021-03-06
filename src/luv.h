#ifndef LUV
#define LUV
#include <lua.h>
#include "luv_timer.h"
#include "luv_check.h"
#include "luv_prepare.h"
#include "luv_misc.h"
#include "luv_socket.h"

static const struct luaL_Reg luv[] = {

    // misc
    {"uv_loop_new", luv_loop_new},
    {"uv_run", luv_run},

    // timer
    {"uv_timer_new", luv_timer_new},
    {"uv_timer_start", luv_timer_start},
    {"uv_timer_stop", luv_timer_stop},
    {"uv_timer_again", luv_timer_again},
    {"uv_timer_set_repeat", luv_timer_set_repeat},
    {"uv_timer_get_repeat", luv_timer_get_repeat},

    // check
    {"uv_check_new", luv_check_new},
    {"uv_check_start", luv_check_start},
    {"uv_check_stop", luv_check_stop},

    // prepare
    {"uv_prepare_new", luv_prepare_new},
    {"uv_prepare_start", luv_prepare_start},
    {"uv_prepare_stop", luv_prepare_stop},

    // socket
    {"uv_tcp_new", luv_tcp_new},
    {"uv_tcp_bind", luv_tcp_bind},
    {"uv_tcp_connect", luv_tcp_connect},
    {"uv_tcp_nodelay", luv_tcp_nodelay},
    {"uv_tcp_keepalive", luv_tcp_keepalive},
    {"uv_tcp_getsockname", luv_tcp_getsockname},
    {"uv_tcp_getpeername", luv_tcp_getpeername},

    {"uv_listen", luv_listen},
    {"uv_read_start", luv_read_start},
    {"uv_read_stop", luv_read_stop},
    {"uv_write", luv_write},
    {"uv_close", luv_close},
    {"uv_shutdown", luv_shutdown},

    /*
    {"uv_udp_new", luv_udp_new},
    {"uv_udp_bind", luv_udp_bind},
    {"uv_udp_set_membership", luv_udp_set_membership},
    {"uv_udp_getsockname", luv_udp_getsockname},
    {"uv_udp_send", luv_udp_send},
    {"uv_udp_recv_start", luv_udp_recv_start},
    {"uv_udp_recv_stop", luv_udp_recv_stop},
    {"uv_udp_set_broadcast", luv_udp_set_broadcast},
    {"uv_udp_set_ttl", luv_udp_set_ttl},
    {"uv_udp_set_multicast_ttl", luv_udp_set_multicast_ttl},
    {"uv_udP_set_multicast_loopback", luv_udp_set_multicast_loopback},
    */

    {NULL, NULL}
};


int luaopen_luv(lua_State* L);

#endif /* LUV */
