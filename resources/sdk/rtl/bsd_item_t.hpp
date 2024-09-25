#pragma once
#include <sdkgen/support_library.hpp>
#include "bsd_item_type_t.hpp"

#include "magic/bsd_item_t.start.hpp"
namespace rtl
{
    // [struct _RTL_BSD_ITEM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bsd_item_t                              
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 enum rtl::bsd_item_type_t type;         //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m01 void*                     data_buffer;  //{ +0x0008    +0x0008    +0x0008    } | .DataBuffer
        _m02 uint32_t                  data_length;  //{ +0x0010    +0x0010    +0x0010    } | .DataLength
                                                   
        SDK_MAGIC_PROPERTIES( "_RTL_BSD_ITEM.$", 0x18, true, 0x6a97bdb0e691033c );            
        SDK_FIXED_SIZE( bsd_item_t, 0x18 );            
    };                                             
};
#include "magic/bsd_item_t.end.hpp"
SDK_VERIFY( struct rtl::bsd_item_t, 0x18 );
