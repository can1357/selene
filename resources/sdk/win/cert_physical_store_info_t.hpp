#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_physical_store_info_t.start.hpp"
namespace win
{
    // [struct _CERT_PHYSICAL_STORE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_physical_store_info_t                             
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                        
        _m00 uint32_t                     cb_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 char*                        psz_open_store_provider;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszOpenStoreProvider
        _m02 uint32_t                     dw_open_encoding_type;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwOpenEncodingType
        _m03 uint32_t                     dw_open_flags;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwOpenFlags
        _m04 struct win::cryptoapi_blob_t open_parameters;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OpenParameters
        _m05 uint32_t                     dw_flags;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwFlags
        _m06 uint32_t                     dw_priority;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwPriority
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_PHYSICAL_STORE_INFO.$", 0x30, true, 0xc4ff4469ffc2bad2 );                        
        SDK_FIXED_SIZE( cert_physical_store_info_t, 0x30 );                        
    };                                                            
};
#include "magic/cert_physical_store_info_t.end.hpp"
SDK_VERIFY( struct win::cert_physical_store_info_t, 0x30 );
