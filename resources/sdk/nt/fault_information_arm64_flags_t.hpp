#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fault_information_arm64_flags_t.start.hpp"
namespace nt
{
    // [struct _FAULT_INFORMATION_ARM64_FLAGS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fault_information_arm64_flags_t
    {                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint1_t write_not_read;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WriteNotRead
        _m01 uint1_t instruction_not_data;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .InstructionNotData
        _m02 uint1_t privileged;            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Privileged
        _m03 uint1_t fault_address_valid;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .FaultAddressValid
                                          
        SDK_NONVOL_PROPERTIES( "_FAULT_INFORMATION_ARM64_FLAGS.$", 0x4, true, 0x204b74812fbf5db8 );                     
        SDK_FIXED_SIZE( fault_information_arm64_flags_t, 0x4 );                     
    };                                    
};
#include "magic/fault_information_arm64_flags_t.end.hpp"
SDK_VERIFY( struct nt::fault_information_arm64_flags_t, 0x4 );
