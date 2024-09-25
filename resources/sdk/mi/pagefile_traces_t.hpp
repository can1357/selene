#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mdl_t.hpp"

#include "magic/pagefile_traces_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGEFILE_TRACES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pagefile_traces_t                                                                   
    {                                                                                          
        struct u0_mdl_hack_t                                                                   
        {                                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                                 
            _m10 struct nt::mdl_t        mdl;                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Mdl
            _m11 sdk::array<uint64_t, 1> page;                                                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Page
                                                                                               
            SDK_MAGIC_PROPERTIES( "_MI_PAGEFILE_TRACES.MdlHack.$", 0x38, true, 0x1c2a670a5319a191 );                                                      
            SDK_FIXED_SIZE( u0_mdl_hack_t, 0x38 );                                                      
        };                                                                                     
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                     
        _m00 int32_t                          status;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 uint8_t                          priority;                                          //{ +0x0006    +0x0006    +0x0005    +0x0006    } | .Priority
        _m02 uint8_t                          irp_priority;                                      //{ +0x0007    +0x0007    +0x0006    +0x0007    } | .IrpPriority
        _m03 uint8_t                          reservation_write;                                 //{ +0x0008    +0x0008    +0x0007    +0x0008    } | .ReservationWrite
        _m04 int64_t                          current_time;                                      //{ +0x0010    +0x0010    +0x0008    +0x0010    } | .CurrentTime
        _m05 uint64_t                         available_pages;                                   //{ +0x0018    +0x0018    +0x0010    +0x0018    } | .AvailablePages
        _m06 uint64_t                         modified_pages_total;                              //{ +0x0020    +0x0020    +0x0018    +0x0020    } | .ModifiedPagesTotal
        _m07 uint64_t                         modified_pagefile_pages;                           //{ +0x0028    +0x0028    +0x0020    +0x0028    } | .ModifiedPagefilePages
        _m08 uint64_t                         modified_no_write_pages;                           //{ +0x0030    +0x0030    +0x0028    +0x0030    } | .ModifiedNoWritePages
        _m09 uint64_t                         modified_pagefile_no_reservation_pages;            //{ +0x0038    +0x0038    +0x0030    +0x0038    } | .ModifiedPagefileNoReservationPages
        _m12 u0_mdl_hack_t                    mdl_hack;                                          //{ +0x0040    +0x0040    +0x0048    +0x0040    } | .MdlHack
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                 
        //                                                                                     
        _m13 uint16_t                         partition_id;                                      //{ +0x0004    +0x0004    +0x0004    } | .PartitionId
                                                                                               
        // Windows 11                                                                          
        //                                                                                     
        _m14 uint8_t                          pagefile_number;                                   //{ +0x0004    } | .PagefileNumber
        _m15 uint64_t                         modified_page_file_no_reservation_compress_pages;  //{ +0x0038    } | .ModifiedPageFileNoReservationCompressPages
        _m16 uint64_t                         modified_pagefile_reservation_pages;               //{ +0x0040    } | .ModifiedPagefileReservationPages
                                                                                               
        SDK_MAGIC_PROPERTIES( "_MI_PAGEFILE_TRACES.$", 0x78, true, 0x8fce306e40584b94 );                                                 
        SDK_DYNAMIC_SIZE( pagefile_traces_t );                                                 
    };                                                                                         
};
#include "magic/pagefile_traces_t.end.hpp"
SDK_VERIFY( struct mi::pagefile_traces_t::u0_mdl_hack_t, 0x38 );
