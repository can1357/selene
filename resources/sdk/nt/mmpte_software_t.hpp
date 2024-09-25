#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_software_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_SOFTWARE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_software_t                   
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint1_t  valid;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint1_t  page_file_reserved;       //{ +0x0000@12 +0x0000@1  +0x0000@1  +0x0000@1  } | .PageFileReserved
        _m02 uint1_t  page_file_allocated;      //{ +0x0000@13 +0x0000@2  +0x0000@2  +0x0000@2  } | .PageFileAllocated
        _m03 uint5_t  protection;               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Protection
        _m04 uint1_t  prototype;                //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m05 uint1_t  transition;               //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Transition
        _m06 uint4_t  page_file_low;            //{ +0x0000@1  +0x0000@12 +0x0000@12 +0x0000@12 } | .PageFileLow
        _m07 uint10_t used_page_table_entries;  //{ +0x0000@14 +0x0000@16 +0x0000@16 +0x0000@16 } | .UsedPageTableEntries
        _m08 uint32_t page_file_high;           //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .PageFileHigh
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m09 uint1_t  cold_page;                //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .ColdPage
        _m10 uint1_t  swizzle_bit;              //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SwizzleBit
        _m11 uint1_t  shadow_stack;             //{ +0x0000@26 +0x0000@26 +0x0000@26 } | .ShadowStack
                                              
        // Windows 10 v1607                        
        //                                    
        _m12 uint1_t  local_partition;          //{ +0x0000@24 } | .LocalPartition
                                              
        // Windows 11                         
        //                                    
        _m13 uint1_t  on_standby_lookaside;     //{ +0x0000@27 } | .OnStandbyLookaside
                                              
        SDK_MAGIC_PROPERTIES( "_MMPTE_SOFTWARE.$", 0x8, true, 0xaaa80271b073c209 );                        
        SDK_FIXED_SIZE( mmpte_software_t, 0x8 );                        
    };                                        
};
#include "magic/mmpte_software_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_software_t, 0x8 );
