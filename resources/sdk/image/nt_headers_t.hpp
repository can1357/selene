#pragma once
#include <sdkgen/support_library.hpp>
#include "file_header_t.hpp"
#include "optional_header_t.hpp"

#include "magic/nt_headers_t.start.hpp"
namespace image
{
    // [struct _IMAGE_NT_HEADERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nt_headers_t                                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 uint32_t                        signature;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 struct image::file_header_t     file_header;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FileHeader
        _m02 struct image::optional_header_t optional_header;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OptionalHeader
                                                             
        SDK_MAGIC_PROPERTIES( "_IMAGE_NT_HEADERS.$", 0xf8, true, 0xfa49bfeed0be2e7c );                
        SDK_FIXED_SIZE( nt_headers_t, 0xf8 );                
    };                                                       
};
#include "magic/nt_headers_t.end.hpp"
SDK_VERIFY( struct image::nt_headers_t, 0xf8 );
