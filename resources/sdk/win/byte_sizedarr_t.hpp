#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/byte_sizedarr_t.start.hpp"
namespace win
{
    // [struct _BYTE_SIZEDARR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct byte_sizedarr_t    
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t cl_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m01 uint8_t* p_data;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
                              
        SDK_MAGIC_PROPERTIES( "_BYTE_SIZEDARR.$", 0x10, true, 0xe5e1d399cfc940b0 );        
        SDK_FIXED_SIZE( byte_sizedarr_t, 0x10 );        
    };                        
};
#include "magic/byte_sizedarr_t.end.hpp"
SDK_VERIFY( struct win::byte_sizedarr_t, 0x10 );
