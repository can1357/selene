#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/aer_rootport_descriptor_flags_t.start.hpp"
namespace nt
{
    // [union _AER_ROOTPORT_DESCRIPTOR_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union aer_rootport_descriptor_flags_t             
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  uncorrectable_error_mask_rw;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UncorrectableErrorMaskRW
        _m01 uint1_t  uncorrectable_error_severity_rw;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .UncorrectableErrorSeverityRW
        _m02 uint1_t  correctable_error_mask_rw;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .CorrectableErrorMaskRW
        _m03 uint1_t  advanced_caps_and_control_rw;     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AdvancedCapsAndControlRW
        _m04 uint1_t  root_error_command_rw;            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RootErrorCommandRW
        _m05 uint16_t as_ushort;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                      
        SDK_NONVOL_PROPERTIES( "_AER_ROOTPORT_DESCRIPTOR_FLAGS.$", 0x2, true, 0x923dc472d92a0811 );                                
        SDK_FIXED_SIZE( aer_rootport_descriptor_flags_t, 0x2 );                                
    };                                                
};
#include "magic/aer_rootport_descriptor_flags_t.end.hpp"
SDK_VERIFY( union nt::aer_rootport_descriptor_flags_t, 0x2 );