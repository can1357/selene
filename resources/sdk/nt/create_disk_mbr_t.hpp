#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_disk_mbr_t.start.hpp"
namespace nt
{
    // [struct _CREATE_DISK_MBR]
    // => WDK 10 (NV)
    //
    struct create_disk_mbr_t    
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t signature;  //{ +0x0000    } | .Signature
                                
        SDK_NONVOL_PROPERTIES( "_CREATE_DISK_MBR.$", 0x0, false, 0x72dc3220124270be );          
        SDK_FIXED_SIZE( create_disk_mbr_t, 0x4 );          
    };                          
};
#include "magic/create_disk_mbr_t.end.hpp"
SDK_VERIFY( struct nt::create_disk_mbr_t, 0x4 );
