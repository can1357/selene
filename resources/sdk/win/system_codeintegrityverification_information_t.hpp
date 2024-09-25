#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_codeintegrityverification_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CODEINTEGRITYVERIFICATION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_codeintegrityverification_information_t
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    file_handle;                         //{ +0x0000    +0x0000    +0x0000    } | .FileHandle
        _m01 uint32_t image_size;                          //{ +0x0008    +0x0008    +0x0008    } | .ImageSize
        _m02 void*    image;                               //{ +0x0010    +0x0010    +0x0010    } | .Image
                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CODEINTEGRITYVERIFICATION_INFORMATION.$", 0x18, true, 0xcc5ef664db423748 );            
        SDK_FIXED_SIZE( system_codeintegrityverification_information_t, 0x18 );            
    };                                                   
};
#include "magic/system_codeintegrityverification_information_t.end.hpp"
SDK_VERIFY( struct win::system_codeintegrityverification_information_t, 0x18 );
