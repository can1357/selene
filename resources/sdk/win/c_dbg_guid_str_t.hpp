#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CDbgGuidStr]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_dbg_guid_str_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "CDbgGuidStr.$", 0x1, true, 0x4924f9df636dd109 );
        SDK_FIXED_SIZE( c_dbg_guid_str_t, 0x1 );
    };                    
};
SDK_VERIFY( class win::c_dbg_guid_str_t, 0x1 );
