#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copy_information_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _COPY_INFORMATION]
    // => Windows 11
    //
    struct copy_information_t                             
    {                                                     
        // Windows 11                                     
        //                                                
        _m00 struct nt::file_object_t* source_file_object;  //{ +0x0000    } | .SourceFileObject
        _m01 int64_t                   source_file_offset;  //{ +0x0008    } | .SourceFileOffset
                                                          
        SDK_MAGIC_PROPERTIES( "_COPY_INFORMATION.$", 0x0, false, 0xbfe8ad2d44e33e55 );                   
        SDK_FIXED_SIZE( copy_information_t, 0x10 );                   
    };                                                    
};
#include "magic/copy_information_t.end.hpp"
SDK_VERIFY( struct nt::copy_information_t, 0x10 );
