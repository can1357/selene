#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pre_duplicate_handle_information_t.start.hpp"
namespace ob
{
    // [struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pre_duplicate_handle_information_t 
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t desired_access;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DesiredAccess
        _m01 uint32_t original_desired_access;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .OriginalDesiredAccess
        _m02 void*    source_process;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceProcess
        _m03 void*    target_process;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcess
                                              
        SDK_NONVOL_PROPERTIES( "_OB_PRE_DUPLICATE_HANDLE_INFORMATION.$", 0x18, true, 0xaa781589326fdd4c );                        
        SDK_FIXED_SIZE( pre_duplicate_handle_information_t, 0x18 );                        
    };                                        
};
#include "magic/pre_duplicate_handle_information_t.end.hpp"
SDK_VERIFY( struct ob::pre_duplicate_handle_information_t, 0x18 );
