#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segment_mgr_commit_state_t.start.hpp"
namespace heap
{
    // [union _HEAP_SEGMENT_MGR_COMMIT_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union segment_mgr_commit_state_t                            
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                      
        _m00 volatile uint11_t committed_page_count;              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CommittedPageCount
        _m01 volatile uint1_t  large_page_operation_in_progress;  //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .LargePageOperationInProgress
        _m02 volatile uint1_t  large_page_commit;                 //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .LargePageCommit
        _m03 volatile uint16_t entire_u_short_v;                  //{ +0x0000    +0x0000    +0x0000    } | .EntireUShortV
        _m04 uint16_t          entire_u_short;                    //{ +0x0000    +0x0000    +0x0000    } | .EntireUShort
                                                                
        SDK_MAGIC_PROPERTIES( "_HEAP_SEGMENT_MGR_COMMIT_STATE.$", 0x2, true, 0x230f6a97a903d046 );                                 
        SDK_FIXED_SIZE( segment_mgr_commit_state_t, 0x2 );                                 
    };                                                          
};
#include "magic/segment_mgr_commit_state_t.end.hpp"
SDK_VERIFY( union heap::segment_mgr_commit_state_t, 0x2 );
