#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ia64_dbgkd_control_set_t.start.hpp"
namespace nt
{
    // [struct _IA64_DBGKD_CONTROL_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ia64_dbgkd_control_set_t        
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t _continue;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Continue
        _m01 uint64_t current_symbol_start;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CurrentSymbolStart
        _m02 uint64_t current_symbol_end;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentSymbolEnd
                                           
        SDK_MAGIC_PROPERTIES( "_IA64_DBGKD_CONTROL_SET.$", 0x14, true, 0x1cd46da04bdd7289 );                     
        SDK_FIXED_SIZE( ia64_dbgkd_control_set_t, 0x14 );                     
    };                                     
};
#include "magic/ia64_dbgkd_control_set_t.end.hpp"
SDK_VERIFY( struct nt::ia64_dbgkd_control_set_t, 0x14 );
