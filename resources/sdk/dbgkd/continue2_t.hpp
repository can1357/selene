#pragma once
#include <sdkgen/support_library.hpp>
#include "any_control_set_t.hpp"
#include "../nt/amd64_dbgkd_control_set_t.hpp"

#include "magic/continue2_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_CONTINUE2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct continue2_t                                            
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                        
        _m00 int32_t                              continue_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContinueStatus
        _m01 struct nt::amd64_dbgkd_control_set_t control_set;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ControlSet
        _m02 struct dbgkd::any_control_set_t      any_control_set;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AnyControlSet
                                                                  
        SDK_MAGIC_PROPERTIES( "_DBGKD_CONTINUE2.$", 0x20, true, 0xcd1d32017f492eb );                
        SDK_FIXED_SIZE( continue2_t, 0x20 );                      
    };                                                            
};
#include "magic/continue2_t.end.hpp"
SDK_VERIFY( struct dbgkd::continue2_t, 0x20 );
