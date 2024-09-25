#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segment_flags_t.start.hpp"
namespace nt
{
    // [struct _SEGMENT_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_flags_t                          
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint10_t total_number_of_ptes4132;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TotalNumberOfPtes4132
        _m01 uint1_t  large_pages;                    //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .LargePages
        _m02 uint1_t  debug_symbols_loaded;           //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .DebugSymbolsLoaded
        _m03 uint1_t  write_combined;                 //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .WriteCombined
        _m04 uint1_t  no_cache;                       //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .NoCache
        _m05 uint16_t short0;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Short0
        _m06 uint5_t  default_protection_mask;        //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .DefaultProtectionMask
        _m07 uint1_t  binary32;                       //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .Binary32
        _m08 uint1_t  contains_debug;                 //{ +0x0002@7  +0x0002@7  +0x0002@7  +0x0002@7  } | .ContainsDebug
        _m09 uint8_t  u_char1;                        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .UChar1
        _m10 uint1_t  force_collision;                //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .ForceCollision
        _m11 uint3_t  image_signing_type;             //{ +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  } | .ImageSigningType
        _m12 uint4_t  image_signing_level;            //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .ImageSigningLevel
        _m13 uint8_t  u_char2;                        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .UChar2
                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m14 uint1_t  session_driver_protos;          //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .SessionDriverProtos
                                                    
        // Windows 10 v2004                              
        //                                          
        _m15 uint1_t  image_cet_shadow_stacks_ready;  //{ +0x0002@0  } | .ImageCetShadowStacksReady
                                                    
        SDK_MAGIC_PROPERTIES( "_SEGMENT_FLAGS.$", 0x4, true, 0xcf4640211ef2d9a0 );                              
        SDK_FIXED_SIZE( segment_flags_t, 0x4 );                              
    };                                              
};
#include "magic/segment_flags_t.end.hpp"
SDK_VERIFY( struct nt::segment_flags_t, 0x4 );
