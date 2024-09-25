#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pre_create_handle_information_t.start.hpp"
namespace ob
{
    // [struct _OB_PRE_CREATE_HANDLE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pre_create_handle_information_t    
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t desired_access;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DesiredAccess
        _m01 uint32_t original_desired_access;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .OriginalDesiredAccess
                                              
        SDK_NONVOL_PROPERTIES( "_OB_PRE_CREATE_HANDLE_INFORMATION.$", 0x8, true, 0x5ea080a56f19ebb2 );                        
        SDK_FIXED_SIZE( pre_create_handle_information_t, 0x8 );                        
    };                                        
};
#include "magic/pre_create_handle_information_t.end.hpp"
SDK_VERIFY( struct ob::pre_create_handle_information_t, 0x8 );
