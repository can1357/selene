#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntfs_file_record_input_buffer_t.start.hpp"
namespace win
{
    // [struct NTFS_FILE_RECORD_INPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntfs_file_record_input_buffer_t 
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 int64_t file_reference_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileReferenceNumber
                                           
        SDK_MAGIC_PROPERTIES( "NTFS_FILE_RECORD_INPUT_BUFFER.$", 0x8, true, 0x517e3207f99b48c6 );                      
        SDK_FIXED_SIZE( ntfs_file_record_input_buffer_t, 0x8 );                      
    };                                     
};
#include "magic/ntfs_file_record_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::ntfs_file_record_input_buffer_t, 0x8 );
