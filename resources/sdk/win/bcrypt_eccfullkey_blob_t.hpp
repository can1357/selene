#pragma once
#include <sdkgen/support_library.hpp>
#include "ecc_curve_type_enum_t.hpp"
#include "ecc_curve_alg_id_enum_t.hpp"

#include "magic/bcrypt_eccfullkey_blob_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_ECCFULLKEY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_eccfullkey_blob_t                                       
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                
        _m00 uint32_t                          dw_magic;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMagic
        _m01 uint32_t                          dw_version;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwVersion
        _m02 enum win::ecc_curve_type_enum_t   dw_curve_type;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwCurveType
        _m03 enum win::ecc_curve_alg_id_enum_t dw_curve_generation_alg_id;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwCurveGenerationAlgId
        _m04 uint32_t                          cb_field_length;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbFieldLength
        _m05 uint32_t                          cb_subgroup_order;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbSubgroupOrder
        _m06 uint32_t                          cb_cofactor;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbCofactor
        _m07 uint32_t                          cb_seed;                     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cbSeed
                                                                          
        SDK_MAGIC_PROPERTIES( "_BCRYPT_ECCFULLKEY_BLOB.$", 0x20, true, 0xdb67c86d146608a0 );                           
        SDK_FIXED_SIZE( bcrypt_eccfullkey_blob_t, 0x20 );                           
    };                                                                    
};
#include "magic/bcrypt_eccfullkey_blob_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_eccfullkey_blob_t, 0x20 );
