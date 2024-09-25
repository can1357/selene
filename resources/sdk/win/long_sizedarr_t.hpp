#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/long_sizedarr_t.start.hpp"
namespace win
{
    // [struct _LONG_SIZEDARR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct long_sizedarr_t     
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  cl_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m01 uint32_t* p_data;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
                               
        SDK_MAGIC_PROPERTIES( "_LONG_SIZEDARR.$", 0x10, true, 0x71d30502d4a8ac53 );        
        SDK_FIXED_SIZE( long_sizedarr_t, 0x10 );        
    };                         
};
#include "magic/long_sizedarr_t.end.hpp"
SDK_VERIFY( struct win::long_sizedarr_t, 0x10 );
