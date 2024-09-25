#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/short_sizedarr_t.start.hpp"
namespace win
{
    // [struct _SHORT_SIZEDARR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct short_sizedarr_t    
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  cl_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m01 uint16_t* p_data;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
                               
        SDK_MAGIC_PROPERTIES( "_SHORT_SIZEDARR.$", 0x10, true, 0x2e54a3bcd6bd63b9 );        
        SDK_FIXED_SIZE( short_sizedarr_t, 0x10 );        
    };                         
};
#include "magic/short_sizedarr_t.end.hpp"
SDK_VERIFY( struct win::short_sizedarr_t, 0x10 );
