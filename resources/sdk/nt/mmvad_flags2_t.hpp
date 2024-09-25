#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmvad_flags2_t.start.hpp"
namespace nt
{
    // [struct _MMVAD_FLAGS2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmvad_flags2_t                  
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint24_t file_offset;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FileOffset
        _m01 uint1_t  large;                 //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Large
        _m02 uint1_t  trim_behind;           //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .TrimBehind
        _m03 uint1_t  inherit;               //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .Inherit
        _m04 uint1_t  no_validation_needed;  //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .NoValidationNeeded
        _m05 uint1_t  private_demand_zero;   //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .PrivateDemandZero
                                           
        SDK_MAGIC_PROPERTIES( "_MMVAD_FLAGS2.$", 0x4, true, 0xe7b4eec6f055777d );                     
        SDK_FIXED_SIZE( mmvad_flags2_t, 0x4 );                     
    };                                     
};
#include "magic/mmvad_flags2_t.end.hpp"
SDK_VERIFY( struct nt::mmvad_flags2_t, 0x4 );
