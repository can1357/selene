#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_compression_info_t.start.hpp"
namespace win
{
    // [struct _FILE_COMPRESSION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_compression_info_t           
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 int64_t  compressed_file_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompressedFileSize
        _m01 uint16_t compression_format;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompressionFormat
        _m02 uint8_t  compression_unit_shift;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .CompressionUnitShift
        _m03 uint8_t  chunk_shift;             //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .ChunkShift
        _m04 uint8_t  cluster_shift;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClusterShift
                                             
        SDK_MAGIC_PROPERTIES( "_FILE_COMPRESSION_INFO.$", 0x10, true, 0x121c9cc3ff716712 );                       
        SDK_FIXED_SIZE( file_compression_info_t, 0x10 );                       
    };                                       
};
#include "magic/file_compression_info_t.end.hpp"
SDK_VERIFY( struct win::file_compression_info_t, 0x10 );
