#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_store_prov_info_t.start.hpp"
namespace win
{
    // [struct _CERT_STORE_PROV_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_store_prov_info_t             
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t cb_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t c_store_prov_func;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cStoreProvFunc
        _m02 void**   rgpv_store_prov_func;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpvStoreProvFunc
        _m03 void*    h_store_prov;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hStoreProv
        _m04 uint32_t dw_store_prov_flags;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwStoreProvFlags
        _m05 void*    h_store_prov_func_addr2;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hStoreProvFuncAddr2
                                              
        SDK_MAGIC_PROPERTIES( "_CERT_STORE_PROV_INFO.$", 0x28, true, 0xfe35f3b799f2dcf9 );                        
        SDK_FIXED_SIZE( cert_store_prov_info_t, 0x28 );                        
    };                                        
};
#include "magic/cert_store_prov_info_t.end.hpp"
SDK_VERIFY( struct win::cert_store_prov_info_t, 0x28 );
