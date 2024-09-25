#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bsp_catalog_scm_t.start.hpp"
namespace win
{
    // [class BspCatalogSCM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class bsp_catalog_scm_t
    {                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int32_t m_ref;  //{ +0x0010    +0x0010    +0x0010    } | .m_ref
                           
        SDK_MAGIC_PROPERTIES( "BspCatalogSCM.$", 0x30, true, 0x17949b28af071e00 );      
        SDK_FIXED_SIZE( bsp_catalog_scm_t, 0x30 );      
    };                     
};
#include "magic/bsp_catalog_scm_t.end.hpp"
SDK_VERIFY( class win::bsp_catalog_scm_t, 0x30 );
