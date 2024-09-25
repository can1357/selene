#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_attribute_tag_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ATTRIBUTE_TAG_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_attribute_tag_information_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t file_attributes;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileAttributes
        _m01 uint32_t reparse_tag;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReparseTag
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_ATTRIBUTE_TAG_INFORMATION.$", 0x8, true, 0xe65fa7e4e8f8a2ba );                
        SDK_FIXED_SIZE( file_attribute_tag_information_t, 0x8 );                
    };                                     
};
#include "magic/file_attribute_tag_information_t.end.hpp"
SDK_VERIFY( struct win::file_attribute_tag_information_t, 0x8 );
