#pragma once
#include <sdkgen/support_library.hpp>
#include "reservation_cluster_info_t.hpp"

#include "magic/modwrite_data_t.start.hpp"
namespace mi
{
    // [struct _MI_MODWRITE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct modwrite_data_t                                                                
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                
        _m00 int64_t                                       pages_load;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PagesLoad
        _m01 uint64_t                                      pages_average;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagesAverage
        _m02 uint64_t                                      average_available_pages;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AverageAvailablePages
        _m03 uint64_t                                      pages_written;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PagesWritten
        _m04 uint32_t                                      writes_issued;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WritesIssued
        _m05 uint32_t                                      ignored_reservations_count;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .IgnoredReservationsCount
        _m06 uint32_t                                      freed_reservations_count;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreedReservationsCount
        _m07 uint32_t                                      write_burst_count;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .WriteBurstCount
        _m08 uint64_t                                      ignore_reservations_start_time;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IgnoreReservationsStartTime
        _m09 volatile union mi::reservation_cluster_info_t reservation_cluster_info;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReservationClusterInfo
        _m10 uint1_t                                       ignore_reservations;             //{ +0x003c@0  +0x003c@0  +0x003c@0  +0x003c@0  } | .IgnoreReservations
                                                                                          
        SDK_MAGIC_PROPERTIES( "_MI_MODWRITE_DATA.$", 0x40, true, 0xea9f1ca58349d129 );                               
        SDK_FIXED_SIZE( modwrite_data_t, 0x40 );                                          
    };                                                                                    
};
#include "magic/modwrite_data_t.end.hpp"
SDK_VERIFY( struct mi::modwrite_data_t, 0x40 );
