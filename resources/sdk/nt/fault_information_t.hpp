#pragma once
#include <sdkgen/support_library.hpp>
#include "fault_information_x64_t.hpp"
#include "fault_information_arch_t.hpp"
#include "fault_information_arm64_t.hpp"

#include "magic/fault_information_t.start.hpp"
namespace nt
{
    // [struct _FAULT_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fault_information_t                              
    {                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                  
        _m00 enum nt::fault_information_arch_t    type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                              is_stage1;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IsStage1
        _m02 struct nt::fault_information_arm64_t arm64;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Arm64
        _m03 struct nt::fault_information_x64_t   x64;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .X64
                                                            
        SDK_NONVOL_PROPERTIES( "_FAULT_INFORMATION.$", 0x38, true, 0x774b96370330c5de );          
        SDK_FIXED_SIZE( fault_information_t, 0x38 );          
    };                                                      
};
#include "magic/fault_information_t.end.hpp"
SDK_VERIFY( struct nt::fault_information_t, 0x38 );
