#pragma once
#include <sdkgen/support_library.hpp>
#include "os_sid_ver_t.hpp"

#include "magic/strsd_sid_lookup_t.start.hpp"
namespace wdf
{
    // [struct _STRSD_SID_LOOKUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct strsd_sid_lookup_t                               
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint64_t               export_sid_field_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExportSidFieldOffset
        _m01 enum wdf::os_sid_ver_t os_ver;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OsVer
        _m02 sdk::array<wchar_t, 4> key;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Key
        _m03 uint32_t               key_len;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .KeyLen
                                                            
        SDK_MAGIC_PROPERTIES( "_STRSD_SID_LOOKUP.$", 0x18, true, 0xa0728da83043ab82 );                        
        SDK_FIXED_SIZE( strsd_sid_lookup_t, 0x18 );                        
    };                                                      
};
#include "magic/strsd_sid_lookup_t.end.hpp"
SDK_VERIFY( struct wdf::strsd_sid_lookup_t, 0x18 );
