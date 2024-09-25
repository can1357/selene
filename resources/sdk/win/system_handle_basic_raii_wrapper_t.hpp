#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_handle_basic_raii_wrapper_t.start.hpp"
namespace win
{
    // [class SystemHandleBasicRaiiWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class system_handle_basic_raii_wrapper_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                          
        _m00 void const*   handle;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._handle
        _m01 const uint8_t idl_type;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._idlType
        _m02 bool          owned;             //{ +0x0009    +0x0009    +0x0009    +0x0009    } | ._owned
                                            
        SDK_MAGIC_PROPERTIES( "SystemHandleBasicRaiiWrapper.$", 0x10, true, 0x2f015c844c223fe9 );         
        SDK_FIXED_SIZE( system_handle_basic_raii_wrapper_t, 0x10 );         
    };                                      
};
#include "magic/system_handle_basic_raii_wrapper_t.end.hpp"
SDK_VERIFY( class win::system_handle_basic_raii_wrapper_t, 0x10 );
