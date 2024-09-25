#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_end_of_file_info_t.start.hpp"
namespace win
{
    // [struct _FILE_END_OF_FILE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_end_of_file_info_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t end_of_file;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EndOfFile
                                  
        SDK_MAGIC_PROPERTIES( "_FILE_END_OF_FILE_INFO.$", 0x8, true, 0x634148466d4caf1f );            
        SDK_FIXED_SIZE( file_end_of_file_info_t, 0x8 );            
    };                            
};
#include "magic/file_end_of_file_info_t.end.hpp"
SDK_VERIFY( struct win::file_end_of_file_info_t, 0x8 );
