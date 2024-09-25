#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_family_info_t.start.hpp"
namespace whea
{
    // [union _WHEA_PROCESSOR_FAMILY_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union processor_family_info_t     
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint4_t  stepping;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Stepping
        _m01 uint4_t  model;            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Model
        _m02 uint4_t  family;           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Family
        _m03 uint2_t  processor_type;   //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .ProcessorType
        _m04 uint4_t  extended_model;   //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ExtendedModel
        _m05 uint8_t  extended_family;  //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .ExtendedFamily
        _m06 uint64_t as_ulonglong;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONGLONG
                                      
        // Windows 11                 
        //                            
        _m07 uint32_t native_model_id;  //{ +0x0004    } | .NativeModelId
                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_PROCESSOR_FAMILY_INFO.$", 0x8, true, 0x8507a24679b4131e );                
        SDK_FIXED_SIZE( processor_family_info_t, 0x8 );                
    };                                
};
#include "magic/processor_family_info_t.end.hpp"
SDK_VERIFY( union whea::processor_family_info_t, 0x8 );
