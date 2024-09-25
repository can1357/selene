#pragma once
#include <sdkgen/support_library.hpp>
#include "device_storage_range_attributes_t.hpp"

#include "magic/device_dsm_range_error_info_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_RANGE_ERROR_INFO]
    // => WDK 10 (NV)
    //
    struct device_dsm_range_error_info_t         
    {                                            
        using ranges_t = sdk::array<struct nt::device_storage_range_attributes_t, 1>;                          
                                                 
        // WDK 10                                
        //                                       
        _m00 uint32_t  version;                    //{ +0x0000    } | .Version
        _m01 uint32_t  flags;                      //{ +0x0004    } | .Flags
        _m02 uint32_t  total_number_of_ranges;     //{ +0x0008    } | .TotalNumberOfRanges
        _m03 uint32_t  number_of_ranges_returned;  //{ +0x000c    } | .NumberOfRangesReturned
        _m04 ranges_t  ranges;                     //{ +0x0010    } | .Ranges
                                                 
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_RANGE_ERROR_INFO.$", 0x0, false, 0x4cc001516b134e79 );                          
        SDK_FIXED_SIZE( device_dsm_range_error_info_t, 0x20 );                          
    };                                           
};
#include "magic/device_dsm_range_error_info_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_range_error_info_t, 0x20 );
