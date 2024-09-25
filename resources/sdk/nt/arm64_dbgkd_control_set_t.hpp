#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_dbgkd_control_set_t.start.hpp"
namespace nt
{
    // [struct _ARM64_DBGKD_CONTROL_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm64_dbgkd_control_set_t       
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t _continue;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Continue
        _m01 uint32_t trace_flag;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TraceFlag
        _m02 uint64_t current_symbol_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentSymbolStart
        _m03 uint64_t current_symbol_end;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentSymbolEnd
                                           
        SDK_MAGIC_PROPERTIES( "_ARM64_DBGKD_CONTROL_SET.$", 0x18, true, 0xe0aa946a16f1bf68 );                     
        SDK_FIXED_SIZE( arm64_dbgkd_control_set_t, 0x18 );                     
    };                                     
};
#include "magic/arm64_dbgkd_control_set_t.end.hpp"
SDK_VERIFY( struct nt::arm64_dbgkd_control_set_t, 0x18 );
