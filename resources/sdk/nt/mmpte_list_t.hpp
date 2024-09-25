#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_list_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_list_t            
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                         
        _m00 uint1_t   valid;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint1_t   one_entry;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .OneEntry
        _m02 varuint_t filler0;      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .filler0
        _m03 uint5_t   protection;   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Protection
        _m04 uint1_t   prototype;    //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m05 uint1_t   transition;   //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Transition
        _m06 uint16_t  filler1;      //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .filler1
        _m07 uint36_t  next_entry;   //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .NextEntry
                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                         
        _m08 uint1_t   swizzle_bit;  //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SwizzleBit
                                   
        SDK_MAGIC_PROPERTIES( "_MMPTE_LIST.$", 0x8, true, 0xfe99a6596e0efeae );            
        SDK_FIXED_SIZE( mmpte_list_t, 0x8 );            
    };                             
};
#include "magic/mmpte_list_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_list_t, 0x8 );
