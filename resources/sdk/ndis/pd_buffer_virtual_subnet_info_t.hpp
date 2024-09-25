#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_buffer_virtual_subnet_info_t.start.hpp"
namespace ndis
{
    // [struct _PD_BUFFER_VIRTUAL_SUBNET_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_buffer_virtual_subnet_info_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint24_t virtual_subnet_id;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VirtualSubnetId
                                          
        SDK_MAGIC_PROPERTIES( "_PD_BUFFER_VIRTUAL_SUBNET_INFO.$", 0x4, true, 0xead367b8f6cbc21b );                  
        SDK_FIXED_SIZE( pd_buffer_virtual_subnet_info_t, 0x4 );                  
    };                                    
};
#include "magic/pd_buffer_virtual_subnet_info_t.end.hpp"
SDK_VERIFY( struct ndis::pd_buffer_virtual_subnet_info_t, 0x4 );
