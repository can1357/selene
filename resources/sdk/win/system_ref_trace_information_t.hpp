#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_ref_trace_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_REF_TRACE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_ref_trace_information_t        
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 uint8_t          trace_enable;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceEnable
        _m01 uint8_t          trace_permanent;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .TracePermanent
        _m02 nt::unicode_view trace_process_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceProcessName
        _m03 nt::unicode_view trace_pool_tags;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TracePoolTags
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_REF_TRACE_INFORMATION.$", 0x28, true, 0x8f9d1b5d788834a3 );                   
        SDK_FIXED_SIZE( system_ref_trace_information_t, 0x28 );                   
    };                                           
};
#include "magic/system_ref_trace_information_t.end.hpp"
SDK_VERIFY( struct win::system_ref_trace_information_t, 0x28 );
