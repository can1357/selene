#pragma once
#include <sdkgen/support_library.hpp>
#include "package_id_and_install_order_t.hpp"
#include "package_id_and_install_orders_t.hpp"

#include "magic/package_list_buffer_t.start.hpp"
namespace win
{
    // [class PackageListBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class package_list_buffer_t                    
    {                                              
        using fixed_buffer_t = sdk::variant<sdk::array<struct win::package_id_and_install_order_t, 4>, sdk::array<struct win::package_id_and_install_orders_t, 4>>;                      
        using buffer_t =       sdk::variant<struct win::package_id_and_install_order_t*, struct win::package_id_and_install_orders_t*>;                      
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                         
        _m00 fixed_buffer_t  fixed_buffer;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._fixedBuffer
        _m01 buffer_t        buffer;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._buffer
        _m02 uint32_t        end_index;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._endIndex
        _m03 uint32_t        dynamic_buffer_length;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._dynamicBufferLength
                                                   
        SDK_MAGIC_PROPERTIES( "PackageListBuffer.$", 0x60, true, 0xa5b1a3dbdba48d3e );                      
        SDK_FIXED_SIZE( package_list_buffer_t, 0x60 );                      
    };                                             
};
#include "magic/package_list_buffer_t.end.hpp"
SDK_VERIFY( class win::package_list_buffer_t, 0x60 );
