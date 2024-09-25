#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_attribute_tag_info_t.start.hpp"
namespace win
{
    // [struct _FILE_ATTRIBUTE_TAG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_attribute_tag_info_t  
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t file_attributes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileAttributes
        _m01 uint32_t reparse_tag;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReparseTag
                                      
        SDK_MAGIC_PROPERTIES( "_FILE_ATTRIBUTE_TAG_INFO.$", 0x8, true, 0x8da53a08704d11c6 );                
        SDK_FIXED_SIZE( file_attribute_tag_info_t, 0x8 );                
    };                                
};
#include "magic/file_attribute_tag_info_t.end.hpp"
SDK_VERIFY( struct win::file_attribute_tag_info_t, 0x8 );
