#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_com_sx_s_catalog_t.start.hpp"
namespace win
{
    // [class CComSxSCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_sx_s_catalog_t
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 int32_t m_c_ref;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_cRef
                              
        SDK_MAGIC_PROPERTIES( "CComSxSCatalog.$", 0x10, true, 0x2ebd2a8a38d446c5 );        
        SDK_FIXED_SIZE( c_com_sx_s_catalog_t, 0x10 );        
    };                        
};
#include "magic/c_com_sx_s_catalog_t.end.hpp"
SDK_VERIFY( class win::c_com_sx_s_catalog_t, 0x10 );
