#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fault_information_x64_flags_t.start.hpp"
namespace nt
{
    // [struct _FAULT_INFORMATION_X64_FLAGS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fault_information_x64_flags_t 
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint1_t fault_address_valid;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FaultAddressValid
                                         
        SDK_NONVOL_PROPERTIES( "_FAULT_INFORMATION_X64_FLAGS.$", 0x4, true, 0x887123a52966263 );                    
        SDK_FIXED_SIZE( fault_information_x64_flags_t, 0x4 );                    
    };                                   
};
#include "magic/fault_information_x64_flags_t.end.hpp"
SDK_VERIFY( struct nt::fault_information_x64_flags_t, 0x4 );
