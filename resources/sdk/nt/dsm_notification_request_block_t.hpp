#pragma once
#include <sdkgen/support_library.hpp>
#include "mp_device_data_set_range_t.hpp"

#include "magic/dsm_notification_request_block_t.start.hpp"
namespace nt
{
    // [struct _DSM_NOTIFICATION_REQUEST_BLOCK]
    // => WDK 10 (NV)
    //
    struct dsm_notification_request_block_t           
    {                                                 
        using data_set_ranges_t = sdk::array<struct nt::mp_device_data_set_range_t, 1>;                      
                                                      
        // WDK 10                                     
        //                                            
        _m00 uint32_t           size;                   //{ +0x0000    } | .Size
        _m01 uint32_t           version;                //{ +0x0004    } | .Version
        _m02 uint32_t           notify_flags;           //{ +0x0008    } | .NotifyFlags
        _m03 uint32_t           data_set_profile;       //{ +0x000c    } | .DataSetProfile
        _m04 uint32_t           data_set_ranges_count;  //{ +0x001c    } | .DataSetRangesCount
        _m05 data_set_ranges_t  data_set_ranges;        //{ +0x0020    } | .DataSetRanges
                                                      
        SDK_NONVOL_PROPERTIES( "_DSM_NOTIFICATION_REQUEST_BLOCK.$", 0x0, false, 0x58203888519906dc );                      
        SDK_FIXED_SIZE( dsm_notification_request_block_t, 0x30 );                      
    };                                                
};
#include "magic/dsm_notification_request_block_t.end.hpp"
SDK_VERIFY( struct nt::dsm_notification_request_block_t, 0x30 );
