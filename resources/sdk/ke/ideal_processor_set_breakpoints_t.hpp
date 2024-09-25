#pragma once
#include <sdkgen/support_library.hpp>
#include "process_concurrency_count_t.hpp"

#include "magic/ideal_processor_set_breakpoints_t.start.hpp"
namespace ke
{
    // [struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS]
    // => Windows 11
    //
    struct ideal_processor_set_breakpoints_t            
    {                                                   
        // Windows 11                                   
        //                                              
        _m00 union ke::process_concurrency_count_t low;   //{ +0x0000    } | .Low
        _m01 union ke::process_concurrency_count_t high;  //{ +0x0004    } | .High
                                                        
        SDK_MAGIC_PROPERTIES( "_KE_IDEAL_PROCESSOR_SET_BREAKPOINTS.$", 0x0, false, 0x65a204cce93d7413 );     
        SDK_FIXED_SIZE( ideal_processor_set_breakpoints_t, 0x8 );     
    };                                                  
};
#include "magic/ideal_processor_set_breakpoints_t.end.hpp"
SDK_VERIFY( struct ke::ideal_processor_set_breakpoints_t, 0x8 );
