#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_data_t.start.hpp"
namespace nt
{
    // [struct _PCW_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcw_data_t         
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                    
        _m00 const void* data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
        _m01 uint32_t    size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                              
        SDK_NONVOL_PROPERTIES( "_PCW_DATA.$", 0x10, true, 0xa7985e649342e69a );     
        SDK_FIXED_SIZE( pcw_data_t, 0x10 );     
    };                        
};
#include "magic/pcw_data_t.end.hpp"
SDK_VERIFY( struct nt::pcw_data_t, 0x10 );
