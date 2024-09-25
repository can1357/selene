#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "ctl_usage_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/ctl_info_t.start.hpp"
namespace win
{
    struct ctl_entry_t;
    struct cert_extension_t;

    // [struct _CTL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_info_t                                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                              
        _m00 uint32_t                                 dw_version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::ctl_usage_t                  subject_usage;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubjectUsage
        _m02 struct win::cryptoapi_blob_t             list_identifier;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ListIdentifier
        _m03 struct win::cryptoapi_blob_t             sequence_number;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SequenceNumber
        _m04 struct win::filetime_t                   this_update;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ThisUpdate
        _m05 struct win::filetime_t                   next_update;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NextUpdate
        _m06 struct win::crypt_algorithm_identifier_t subject_algorithm;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SubjectAlgorithm
        _m07 uint32_t                                 c_ctl_entry;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .cCTLEntry
        _m08 struct win::ctl_entry_t*                 rg_ctl_entry;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .rgCTLEntry
        _m09 uint32_t                                 c_extension;        //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .cExtension
        _m10 struct win::cert_extension_t*            rg_extension;       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .rgExtension
                                                                        
        SDK_MAGIC_PROPERTIES( "_CTL_INFO.$", 0x80, true, 0xb04054b55a8b6cb8 );                  
        SDK_FIXED_SIZE( ctl_info_t, 0x80 );                             
    };                                                                  
};
#include "magic/ctl_info_t.end.hpp"
SDK_VERIFY( struct win::ctl_info_t, 0x80 );
