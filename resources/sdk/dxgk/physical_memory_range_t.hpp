#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_memory_range_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PHYSICAL_MEMORY_RANGE]
    // => WDK 10 (NV)
    //
    struct physical_memory_range_t   
    {                                
        // WDK 10                    
        //                           
        _m00 int64_t base_address;     //{ +0x0000    } | .BaseAddress
        _m01 int64_t number_of_bytes;  //{ +0x0008    } | .NumberOfBytes
                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_PHYSICAL_MEMORY_RANGE.$", 0x0, false, 0xffdf9baed254e9ba );                
        SDK_FIXED_SIZE( physical_memory_range_t, 0x10 );                
    };                               
};
#include "magic/physical_memory_range_t.end.hpp"
SDK_VERIFY( struct dxgk::physical_memory_range_t, 0x10 );
