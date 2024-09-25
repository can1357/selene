#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_image_information_t.hpp"

#include "magic/memory_enclave_image_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_ENCLAVE_IMAGE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_enclave_image_information_t                  
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                     
        _m00 struct win::memory_image_information_t image_info;  //{ +0x0000    +0x0000    +0x0000    } | .ImageInfo
        _m01 sdk::array<uint8_t, 32>                unique_id;   //{ +0x0018    +0x0018    +0x0018    } | .UniqueID
        _m02 sdk::array<uint8_t, 32>                author_id;   //{ +0x0038    +0x0038    +0x0038    } | .AuthorID
                                                               
        SDK_MAGIC_PROPERTIES( "_MEMORY_ENCLAVE_IMAGE_INFORMATION.$", 0x58, true, 0x213369560b8da414 );           
        SDK_FIXED_SIZE( memory_enclave_image_information_t, 0x58 );           
    };                                                         
};
#include "magic/memory_enclave_image_information_t.end.hpp"
SDK_VERIFY( struct win::memory_enclave_image_information_t, 0x58 );
