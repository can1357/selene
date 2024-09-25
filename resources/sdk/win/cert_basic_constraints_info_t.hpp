#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"

#include "magic/cert_basic_constraints_info_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CERT_BASIC_CONSTRAINTS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_basic_constraints_info_t                          
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m00 struct win::crypt_bit_blob_t  subject_type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubjectType
        _m01 int32_t                       f_path_len_constraint;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fPathLenConstraint
        _m02 uint32_t                      dw_path_len_constraint;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwPathLenConstraint
        _m03 uint32_t                      c_subtrees_constraint;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cSubtreesConstraint
        _m04 struct win::cryptoapi_blob_t* rg_subtrees_constraint;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgSubtreesConstraint
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_BASIC_CONSTRAINTS_INFO.$", 0x30, true, 0xbbe2dbd99da9484a );                       
        SDK_FIXED_SIZE( cert_basic_constraints_info_t, 0x30 );                       
    };                                                            
};
#include "magic/cert_basic_constraints_info_t.end.hpp"
SDK_VERIFY( struct win::cert_basic_constraints_info_t, 0x30 );
