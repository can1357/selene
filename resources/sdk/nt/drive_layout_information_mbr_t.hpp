#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/drive_layout_information_mbr_t.start.hpp"
namespace nt
{
    // [struct _DRIVE_LAYOUT_INFORMATION_MBR]
    // => WDK 10 (NV)
    //
    struct drive_layout_information_mbr_t
    {                                    
        // WDK 10               
        //                      
        _m00 uint32_t signature;           //{ +0x0000    } | .Signature
        _m01 uint32_t check_sum;           //{ +0x0004    } | .CheckSum
                                         
        SDK_NONVOL_PROPERTIES( "_DRIVE_LAYOUT_INFORMATION_MBR.$", 0x0, false, 0x3dacf1403049c83e );          
        SDK_FIXED_SIZE( drive_layout_information_mbr_t, 0x8 );          
    };                                   
};
#include "magic/drive_layout_information_mbr_t.end.hpp"
SDK_VERIFY( struct nt::drive_layout_information_mbr_t, 0x8 );
