#pragma once
#include <sdkgen/support_library.hpp>
#include "file_header_t.hpp"
#include "optional_header64_t.hpp"

#include "magic/nt_headers64_t.start.hpp"
namespace image
{
    // [struct _IMAGE_NT_HEADERS64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct nt_headers64_t                                      
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 uint32_t                          signature;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 struct image::file_header_t       file_header;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FileHeader
        _m02 struct image::optional_header64_t optional_header;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .OptionalHeader
                                                               
        SDK_NONVOL_PROPERTIES( "_IMAGE_NT_HEADERS64.$", 0x108, true, 0x2018a070b90398b3 );                
        SDK_FIXED_SIZE( nt_headers64_t, 0x108 );                
    };                                                         
};
#include "magic/nt_headers64_t.end.hpp"
SDK_VERIFY( struct image::nt_headers64_t, 0x108 );
