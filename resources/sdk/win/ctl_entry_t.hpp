#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/ctl_entry_t.start.hpp"
namespace win
{
    struct crypt_attribute_t;

    // [struct _CTL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_entry_t                                         
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 struct win::cryptoapi_blob_t   subject_identifier;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubjectIdentifier
        _m01 uint32_t                       c_attribute;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cAttribute
        _m02 struct win::crypt_attribute_t* rg_attribute;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgAttribute
                                                               
        SDK_MAGIC_PROPERTIES( "_CTL_ENTRY.$", 0x20, true, 0xe9093bd4b15b3065 );                   
        SDK_FIXED_SIZE( ctl_entry_t, 0x20 );                   
    };                                                         
};
#include "magic/ctl_entry_t.end.hpp"
SDK_VERIFY( struct win::ctl_entry_t, 0x20 );
