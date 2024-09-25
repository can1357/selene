#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_image_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_IMAGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_image_information_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 void*    image_base;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase
        _m01 uint64_t size_of_image;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeOfImage
        _m02 uint32_t image_flags;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageFlags
        _m03 uint1_t  image_partial_map;     //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .ImagePartialMap
        _m04 uint1_t  image_not_executable;  //{ +0x0010@1  +0x0010@1  +0x0010@1  +0x0010@1  } | .ImageNotExecutable
                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m05 uint4_t  image_signing_level;   //{ +0x0010@2  +0x0010@2  +0x0010@2  } | .ImageSigningLevel
                                           
        SDK_MAGIC_PROPERTIES( "_MEMORY_IMAGE_INFORMATION.$", 0x18, true, 0xeac4315b8e9f7b52 );                     
        SDK_FIXED_SIZE( memory_image_information_t, 0x18 );                     
    };                                     
};
#include "magic/memory_image_information_t.end.hpp"
SDK_VERIFY( struct win::memory_image_information_t, 0x18 );
