#pragma once
#include <sdkgen/support_library.hpp>
#include "bin_count_t.hpp"

#include "magic/bin_results_t.start.hpp"
namespace nt
{
    // [struct _BIN_RESULTS]
    // => WDK 10 (NV)
    //
    struct bin_results_t                                          
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                              number_of_bins;  //{ +0x0000    } | .NumberOfBins
        _m01 sdk::array<struct nt::bin_count_t, 1> bin_counts;      //{ +0x0008    } | .BinCounts
                                                                  
        SDK_NONVOL_PROPERTIES( "_BIN_RESULTS.$", 0x0, false, 0x7b89dd3485360bca );               
        SDK_FIXED_SIZE( bin_results_t, 0x20 );                    
    };                                                            
};
#include "magic/bin_results_t.end.hpp"
SDK_VERIFY( struct nt::bin_results_t, 0x20 );
