#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_umdf_svc_config_t.start.hpp"
namespace wdf
{
    // [class CUmdfSvcConfig]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_umdf_svc_config_t     
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 void*   m_key;         //{ +0x0000    +0x0000    +0x0000    } | .m_Key
        _m01 uint8_t m_auto_close;  //{ +0x0008    +0x0008    +0x0008    } | .m_AutoClose
                                  
        SDK_MAGIC_PROPERTIES( "CUmdfSvcConfig.$", 0x10, true, 0x9791656513f9ee5c );             
        SDK_FIXED_SIZE( c_umdf_svc_config_t, 0x10 );             
    };                            
};
#include "magic/c_umdf_svc_config_t.end.hpp"
SDK_VERIFY( class wdf::c_umdf_svc_config_t, 0x10 );
