#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_prototype_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_PROTOTYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_prototype_t                
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 uint1_t valid;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint1_t demand_fill_proto;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DemandFillProto
        _m02 uint1_t hiber_verify_converted;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HiberVerifyConverted
        _m03 uint1_t read_only;               //{ +0x0000@8  +0x0000@3  +0x0000@3  +0x0000@3  } | .ReadOnly
        _m04 uint5_t protection;              //{ +0x0000@11 +0x0000@5  +0x0000@5  +0x0000@5  } | .Protection
        _m05 uint1_t prototype;               //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m06 uint1_t combined;                //{ +0x0000@9  +0x0000@11 +0x0000@11 +0x0000@11 } | .Combined
        _m07 int48_t proto_address;           //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ProtoAddress
                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m08 uint1_t swizzle_bit;             //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SwizzleBit
                                            
        SDK_MAGIC_PROPERTIES( "_MMPTE_PROTOTYPE.$", 0x8, true, 0x5d66b62c64a03c4a );                       
        SDK_FIXED_SIZE( mmpte_prototype_t, 0x8 );                       
    };                                      
};
#include "magic/mmpte_prototype_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_prototype_t, 0x8 );
