#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_adapter_packet_direct_attributes_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_packet_direct_attributes_t      
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 struct ndis::object_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint8_t                      dma_address_width;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DmaAddressWidth
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES.$", 0xc, true, 0x40992fce9e1a1aa0 );                  
        SDK_FIXED_SIZE( miniport_adapter_packet_direct_attributes_t, 0xc );                  
    };                                                      
};
#include "magic/miniport_adapter_packet_direct_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_packet_direct_attributes_t, 0xc );
