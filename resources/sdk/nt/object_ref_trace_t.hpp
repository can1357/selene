#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_ref_trace_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_REF_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_ref_trace_t                  
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                     
        _m00 sdk::array<void*, 16> stack_trace;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StackTrace
                                               
        SDK_MAGIC_PROPERTIES( "_OBJECT_REF_TRACE.$", 0x80, true, 0x65387149d5249004 );            
        SDK_FIXED_SIZE( object_ref_trace_t, 0x80 );            
    };                                         
};
#include "magic/object_ref_trace_t.end.hpp"
SDK_VERIFY( struct nt::object_ref_trace_t, 0x80 );
