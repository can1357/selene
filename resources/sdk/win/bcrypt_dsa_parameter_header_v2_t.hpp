#pragma once
#include <sdkgen/support_library.hpp>
#include "hashalgorithm_enum_t.hpp"
#include "dsafipsversion_enum_t.hpp"

#include "magic/bcrypt_dsa_parameter_header_v2_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_DSA_PARAMETER_HEADER_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_dsa_parameter_header_v2_t                   
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 uint32_t                        cb_length;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbLength
        _m01 uint32_t                        dw_magic;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMagic
        _m02 uint32_t                        cb_key_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbKeyLength
        _m03 enum win::hashalgorithm_enum_t  hash_algorithm;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .hashAlgorithm
        _m04 enum win::dsafipsversion_enum_t standard_version;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .standardVersion
        _m05 uint32_t                        cb_seed_length;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbSeedLength
        _m06 uint32_t                        cb_group_size;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbGroupSize
        _m07 sdk::array<uint8_t, 4>          count;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Count
                                                              
        SDK_MAGIC_PROPERTIES( "_BCRYPT_DSA_PARAMETER_HEADER_V2.$", 0x20, true, 0x5ca3051f826cdcef );                 
        SDK_FIXED_SIZE( bcrypt_dsa_parameter_header_v2_t, 0x20 );                 
    };                                                        
};
#include "magic/bcrypt_dsa_parameter_header_v2_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_dsa_parameter_header_v2_t, 0x20 );
