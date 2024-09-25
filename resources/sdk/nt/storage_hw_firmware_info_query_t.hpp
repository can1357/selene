#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_hw_firmware_info_query_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_HW_FIRMWARE_INFO_QUERY]
    // => WDK 10 (NV)
    //
    struct storage_hw_firmware_info_query_t
    {                                      
        // WDK 10             
        //                    
        _m00 uint32_t version;               //{ +0x0000    } | .Version
        _m01 uint32_t size;                  //{ +0x0004    } | .Size
        _m02 uint32_t flags;                 //{ +0x0008    } | .Flags
                                           
        SDK_NONVOL_PROPERTIES( "_STORAGE_HW_FIRMWARE_INFO_QUERY.$", 0x0, false, 0x4ebfa86b0ee1dc1a );        
        SDK_FIXED_SIZE( storage_hw_firmware_info_query_t, 0x10 );        
    };                                     
};
#include "magic/storage_hw_firmware_info_query_t.end.hpp"
SDK_VERIFY( struct nt::storage_hw_firmware_info_query_t, 0x10 );
