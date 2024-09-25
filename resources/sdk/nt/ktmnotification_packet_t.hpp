#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _KTMNOTIFICATION_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktmnotification_packet_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_KTMNOTIFICATION_PACKET.$", 0x0, true, 0x2b9b42f5078733eb );
        SDK_FIXED_SIZE( ktmnotification_packet_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::ktmnotification_packet_t, 0x0 );
