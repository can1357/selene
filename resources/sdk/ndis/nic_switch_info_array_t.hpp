#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/nic_switch_info_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NIC_SWITCH_INFO_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nic_switch_info_array_t                             
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 struct ndis::object_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     first_element_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FirstElementOffset
        _m02 uint32_t                     num_elements;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumElements
        _m03 uint32_t                     element_size;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ElementSize
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_NIC_SWITCH_INFO_ARRAY.$", 0x10, true, 0x3ee16ab3e177c89e );                     
        SDK_FIXED_SIZE( nic_switch_info_array_t, 0x10 );                     
    };                                                         
};
#include "magic/nic_switch_info_array_t.end.hpp"
SDK_VERIFY( struct ndis::nic_switch_info_array_t, 0x10 );
