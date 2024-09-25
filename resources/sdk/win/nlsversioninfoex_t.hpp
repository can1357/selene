#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/nlsversioninfoex_t.start.hpp"
namespace win
{
    // [struct _nlsversioninfoex]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nlsversioninfoex_t                           
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                              
        _m00 uint32_t          dw_nls_version_info_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwNLSVersionInfoSize
        _m01 uint32_t          dw_nls_version;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwNLSVersion
        _m02 uint32_t          dw_defined_version;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwDefinedVersion
        _m03 uint32_t          dw_effective_id;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwEffectiveId
        _m04 struct nt::guid_t guid_custom_version;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .guidCustomVersion
                                                        
        SDK_MAGIC_PROPERTIES( "_nlsversioninfoex.$", 0x20, true, 0xf04ccdc3f4004308 );                         
        SDK_FIXED_SIZE( nlsversioninfoex_t, 0x20 );                         
    };                                                  
};
#include "magic/nlsversioninfoex_t.end.hpp"
SDK_VERIFY( struct win::nlsversioninfoex_t, 0x20 );
