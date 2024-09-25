#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/execution_context_work_unit_knobs_t.start.hpp"
namespace ndis
{
    // [struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS]
    // => Windows 11
    //
    struct execution_context_work_unit_knobs_t
    {                                         
        // Windows 11             
        //                        
        _m00 uint32_t at_passive;               //{ +0x0000    } | .AtPassive
        _m01 uint32_t at_dispatch;              //{ +0x0004    } | .AtDispatch
                                              
        SDK_MAGIC_PROPERTIES( "_EXECUTION_CONTEXT_WORK_UNIT_KNOBS.$", 0x0, false, 0x249564f61a187c3f );            
        SDK_FIXED_SIZE( execution_context_work_unit_knobs_t, 0x8 );            
    };                                        
};
#include "magic/execution_context_work_unit_knobs_t.end.hpp"
SDK_VERIFY( struct ndis::execution_context_work_unit_knobs_t, 0x8 );
