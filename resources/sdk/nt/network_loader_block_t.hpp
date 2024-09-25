#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/network_loader_block_t.start.hpp"
namespace nt
{
    // [struct _NETWORK_LOADER_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct network_loader_block_t                     
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint8_t* dhcp_server_ack;                  //{ +0x0000    +0x0000    +0x0000    } | .DHCPServerACK
        _m01 uint32_t dhcp_server_ack_length;           //{ +0x0008    +0x0008    +0x0008    } | .DHCPServerACKLength
        _m02 uint8_t* boot_server_reply_packet;         //{ +0x0010    +0x0010    +0x0010    } | .BootServerReplyPacket
        _m03 uint32_t boot_server_reply_packet_length;  //{ +0x0018    +0x0018    +0x0018    } | .BootServerReplyPacketLength
                                                      
        SDK_MAGIC_PROPERTIES( "_NETWORK_LOADER_BLOCK.$", 0x20, true, 0x826390aeeb6ff19f );                                
        SDK_FIXED_SIZE( network_loader_block_t, 0x20 );                                
    };                                                
};
#include "magic/network_loader_block_t.end.hpp"
SDK_VERIFY( struct nt::network_loader_block_t, 0x20 );
