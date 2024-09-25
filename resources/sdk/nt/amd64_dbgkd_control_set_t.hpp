#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/amd64_dbgkd_control_set_t.start.hpp"
namespace nt
{
    // [struct _AMD64_DBGKD_CONTROL_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct amd64_dbgkd_control_set_t       
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t trace_flag;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceFlag
        _m01 uint64_t dr7;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Dr7
        _m02 uint64_t current_symbol_start;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentSymbolStart
        _m03 uint64_t current_symbol_end;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CurrentSymbolEnd
                                           
        SDK_MAGIC_PROPERTIES( "_AMD64_DBGKD_CONTROL_SET.$", 0x1c, true, 0x645c0079675b44ad );                     
        SDK_FIXED_SIZE( amd64_dbgkd_control_set_t, 0x1c );                     
    };                                     
};
#include "magic/amd64_dbgkd_control_set_t.end.hpp"
SDK_VERIFY( struct nt::amd64_dbgkd_control_set_t, 0x1c );
