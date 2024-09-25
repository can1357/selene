#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_endpoints_table_t.start.hpp"
namespace win
{
    class c_endpoint_entry_t;

    // [class CEndpointsTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_endpoints_table_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                            
        _m00 class win::c_endpoint_entry_t* m_p_head;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_pHead
        _m01 int32_t                        m_n_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_nCount
                                                      
        SDK_MAGIC_PROPERTIES( "CEndpointsTable.$", 0x10, true, 0x1bc36db801874c20 );          
        SDK_FIXED_SIZE( c_endpoints_table_t, 0x10 );          
    };                                                
};
#include "magic/c_endpoints_table_t.end.hpp"
SDK_VERIFY( class win::c_endpoints_table_t, 0x10 );
