#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/x86_dbgkd_control_set_t.start.hpp"
namespace nt
{
    // [struct _X86_DBGKD_CONTROL_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x86_dbgkd_control_set_t         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t trace_flag;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceFlag
        _m01 uint32_t dr7;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Dr7
        _m02 uint32_t current_symbol_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentSymbolStart
        _m03 uint32_t current_symbol_end;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentSymbolEnd
                                           
        SDK_MAGIC_PROPERTIES( "_X86_DBGKD_CONTROL_SET.$", 0x10, true, 0x84dcf31dbb8f4a1b );                     
        SDK_FIXED_SIZE( x86_dbgkd_control_set_t, 0x10 );                     
    };                                     
};
#include "magic/x86_dbgkd_control_set_t.end.hpp"
SDK_VERIFY( struct nt::x86_dbgkd_control_set_t, 0x10 );
