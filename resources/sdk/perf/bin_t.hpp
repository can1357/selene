#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/bin_range_t.hpp"

#include "magic/bin_t.start.hpp"
namespace perf
{
    // [struct _PERF_BIN]
    // => WDK 10 (NV)
    //
    struct bin_t                                                  
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                              number_of_bins;  //{ +0x0000    } | .NumberOfBins
        _m01 uint32_t                              type_of_bin;     //{ +0x0004    } | .TypeOfBin
        _m02 sdk::array<struct nt::bin_range_t, 1> bins_ranges;     //{ +0x0008    } | .BinsRanges
                                                                  
        SDK_NONVOL_PROPERTIES( "_PERF_BIN.$", 0x0, false, 0x7d780bff6e7b94d7 );               
        SDK_FIXED_SIZE( bin_t, 0x18 );                            
    };                                                            
};
#include "magic/bin_t.end.hpp"
SDK_VERIFY( struct perf::bin_t, 0x18 );
