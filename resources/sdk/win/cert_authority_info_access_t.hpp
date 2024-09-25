#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_authority_info_access_t.start.hpp"
namespace win
{
    struct cert_access_description_t;

    // [struct _CERT_AUTHORITY_INFO_ACCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_authority_info_access_t                          
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                       
        _m00 uint32_t                               c_acc_descr;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cAccDescr
        _m01 struct win::cert_access_description_t* rg_acc_descr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgAccDescr
                                                                 
        SDK_MAGIC_PROPERTIES( "_CERT_AUTHORITY_INFO_ACCESS.$", 0x10, true, 0xba8c7dd01cbd8086 );             
        SDK_FIXED_SIZE( cert_authority_info_access_t, 0x10 );             
    };                                                           
};
#include "magic/cert_authority_info_access_t.end.hpp"
SDK_VERIFY( struct win::cert_authority_info_access_t, 0x10 );
