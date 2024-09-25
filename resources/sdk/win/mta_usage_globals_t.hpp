#pragma once
#include <sdkgen/support_library.hpp>
#include "mta_host_usage_flags_t.hpp"

#include "magic/mta_usage_globals_t.start.hpp"
namespace win
{
    struct mta_usage_incrementor_t;

    // [struct _MTA_USAGE_GLOBALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mta_usage_globals_t                                                             
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                 
        _m00 uint32_t                              dw_stack_capture;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStackCapture
        _m01 uint32_t*                             p_c_mta_inits;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .p_cMTAInits
        _m02 uint32_t*                             p_c_mta_inc_inits;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .p_cMTAIncInits
        _m03 uint32_t*                             p_c_mta_waiters;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .p_cMTAWaiters
        _m04 uint32_t*                             p_c_mta_incrementor_size;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .p_cMTAIncrementorSize
        _m05 uint32_t                              dw_completion_time_out;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwCompletionTimeOut
        _m06 nt::list_entry_t*                     p_list_entry_head_mta_usage_incrementor;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pListEntryHeadMTAUsageIncrementor
        _m07 volatile uint32_t*                    p_pos_mta_incrementor_completed;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .p_posMTAIncrementorCompleted
        _m08 struct win::mta_usage_incrementor_t** pp_mta_usage_completed_incrementor_head;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ppMTAUsageCompletedIncrementorHead
        _m09 enum win::mta_host_usage_flags_t*     p_f_mta_host_usage_flags;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .p_fMTAHostUsageFlags
                                                                                           
        SDK_MAGIC_PROPERTIES( "_MTA_USAGE_GLOBALS.$", 0x50, true, 0x3e10c0b223a772d7 );                                        
        SDK_FIXED_SIZE( mta_usage_globals_t, 0x50 );                                        
    };                                                                                     
};
#include "magic/mta_usage_globals_t.end.hpp"
SDK_VERIFY( struct win::mta_usage_globals_t, 0x50 );
