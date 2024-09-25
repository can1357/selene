#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_subsection_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_SUBSECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_subsection_t             
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint1_t valid;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint5_t protection;            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Protection
        _m02 uint1_t prototype;             //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m03 uint1_t execute_privilege;     //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .ExecutePrivilege
        _m04 int48_t subsection_address;    //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .SubsectionAddress
                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m05 uint1_t swizzle_bit;           //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SwizzleBit
        _m06 uint1_t cold_page;             //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .ColdPage
                                          
        // Windows 11                     
        //                                
        _m07 uint1_t on_standby_lookaside;  //{ +0x0000@3  } | .OnStandbyLookaside
                                          
        SDK_MAGIC_PROPERTIES( "_MMPTE_SUBSECTION.$", 0x8, true, 0xc8d3bf1c68340a38 );                     
        SDK_FIXED_SIZE( mmpte_subsection_t, 0x8 );                     
    };                                    
};
#include "magic/mmpte_subsection_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_subsection_t, 0x8 );
