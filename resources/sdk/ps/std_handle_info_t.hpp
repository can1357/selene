#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/std_handle_info_t.start.hpp"
namespace ps
{
    // [struct _PS_STD_HANDLE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_handle_info_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t flags;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint2_t  std_handle_state;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .StdHandleState
        _m02 uint3_t  pseudo_handle_mask;         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PseudoHandleMask
        _m03 uint32_t std_handle_subsystem_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StdHandleSubsystemType
                                                
        SDK_MAGIC_PROPERTIES( "_PS_STD_HANDLE_INFO.$", 0x8, true, 0xc1e5640abb1e0349 );                          
        SDK_FIXED_SIZE( std_handle_info_t, 0x8 );                          
    };                                          
};
#include "magic/std_handle_info_t.end.hpp"
SDK_VERIFY( struct ps::std_handle_info_t, 0x8 );
