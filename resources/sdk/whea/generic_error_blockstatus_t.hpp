#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generic_error_blockstatus_t.start.hpp"
namespace whea
{
    // [union _WHEA_GENERIC_ERROR_BLOCKSTATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union generic_error_blockstatus_t               
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint1_t  uncorrectable_error;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UncorrectableError
        _m01 uint1_t  correctable_error;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CorrectableError
        _m02 uint1_t  multiple_uncorrectable_errors;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MultipleUncorrectableErrors
        _m03 uint1_t  multiple_correctable_errors;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .MultipleCorrectableErrors
        _m04 uint10_t error_data_entry_count;         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ErrorDataEntryCount
        _m05 uint32_t as_ulong;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                    
        SDK_NONVOL_PROPERTIES( "_WHEA_GENERIC_ERROR_BLOCKSTATUS.$", 0x4, true, 0x8aaee69c8875aafa );                              
        SDK_FIXED_SIZE( generic_error_blockstatus_t, 0x4 );                              
    };                                              
};
#include "magic/generic_error_blockstatus_t.end.hpp"
SDK_VERIFY( union whea::generic_error_blockstatus_t, 0x4 );
