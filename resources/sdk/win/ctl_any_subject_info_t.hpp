#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/ctl_any_subject_info_t.start.hpp"
namespace win
{
    // [struct _CTL_ANY_SUBJECT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_any_subject_info_t                                        
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                               
        _m00 struct win::crypt_algorithm_identifier_t subject_algorithm;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubjectAlgorithm
        _m01 struct win::cryptoapi_blob_t             subject_identifier;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SubjectIdentifier
                                                                         
        SDK_MAGIC_PROPERTIES( "_CTL_ANY_SUBJECT_INFO.$", 0x28, true, 0x236de1b87fe6c58d );                   
        SDK_FIXED_SIZE( ctl_any_subject_info_t, 0x28 );                   
    };                                                                   
};
#include "magic/ctl_any_subject_info_t.end.hpp"
SDK_VERIFY( struct win::ctl_any_subject_info_t, 0x28 );
