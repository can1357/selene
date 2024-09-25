#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cms_key_info_t.start.hpp"
namespace win
{
    // [struct _CMS_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cms_key_info_t        
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t dw_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t algid;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Algid
        _m02 uint8_t* pb_oid;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbOID
        _m03 uint32_t cb_oid;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbOID
                                 
        SDK_MAGIC_PROPERTIES( "_CMS_KEY_INFO.$", 0x18, true, 0x3dc9268415e2edaa );           
        SDK_FIXED_SIZE( cms_key_info_t, 0x18 );           
    };                           
};
#include "magic/cms_key_info_t.end.hpp"
SDK_VERIFY( struct win::cms_key_info_t, 0x18 );
