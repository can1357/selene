#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_codeintegrity_certificate_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CODEINTEGRITY_CERTIFICATE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_codeintegrity_certificate_information_t
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 void*    image_file;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageFile
                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m01 uint32_t type;                                //{ +0x0008    +0x0008    +0x0008    } | .Type
                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CODEINTEGRITY_CERTIFICATE_INFORMATION.$", 0x10, true, 0x545c5a2dd4f37349 );           
        SDK_DYNAMIC_SIZE( system_codeintegrity_certificate_information_t );           
    };                                                   
};
#include "magic/system_codeintegrity_certificate_information_t.end.hpp"
