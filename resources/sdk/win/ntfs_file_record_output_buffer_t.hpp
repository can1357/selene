#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntfs_file_record_output_buffer_t.start.hpp"
namespace win
{
    // [struct NTFS_FILE_RECORD_OUTPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntfs_file_record_output_buffer_t               
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 int64_t                file_reference_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileReferenceNumber
        _m01 uint32_t               file_record_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileRecordLength
        _m02 sdk::array<uint8_t, 1> file_record_buffer;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FileRecordBuffer
                                                          
        SDK_MAGIC_PROPERTIES( "NTFS_FILE_RECORD_OUTPUT_BUFFER.$", 0x10, true, 0xdaa25c8db9ee17d );                      
        SDK_FIXED_SIZE( ntfs_file_record_output_buffer_t, 0x10 );                      
    };                                                    
};
#include "magic/ntfs_file_record_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::ntfs_file_record_output_buffer_t, 0x10 );
