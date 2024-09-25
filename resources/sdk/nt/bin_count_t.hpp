#pragma once
#include <sdkgen/support_library.hpp>
#include "bin_range_t.hpp"

#include "magic/bin_count_t.start.hpp"
namespace nt
{
    // [struct _BIN_COUNT]
    // => WDK 10 (NV)
    //
    struct bin_count_t                        
    {                                         
        // WDK 10                             
        //                                    
        _m00 struct nt::bin_range_t bin_range;  //{ +0x0000    } | .BinRange
        _m01 uint32_t               bin_count;  //{ +0x0010    } | .BinCount
                                              
        SDK_NONVOL_PROPERTIES( "_BIN_COUNT.$", 0x0, false, 0xa2f2b98b3663c61 );          
        SDK_FIXED_SIZE( bin_count_t, 0x18 );          
    };                                        
};
#include "magic/bin_count_t.end.hpp"
SDK_VERIFY( struct nt::bin_count_t, 0x18 );
