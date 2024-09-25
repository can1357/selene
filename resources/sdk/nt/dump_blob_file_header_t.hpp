#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_blob_file_header_t.start.hpp"
namespace nt
{
    // [struct _DUMP_BLOB_FILE_HEADER]
    // => WDK 10 (NV)
    //
    struct dump_blob_file_header_t 
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t signature1;    //{ +0x0000    } | .Signature1
        _m01 uint32_t signature2;    //{ +0x0004    } | .Signature2
        _m02 uint32_t header_size;   //{ +0x0008    } | .HeaderSize
        _m03 uint32_t build_number;  //{ +0x000c    } | .BuildNumber
                                   
        SDK_NONVOL_PROPERTIES( "_DUMP_BLOB_FILE_HEADER.$", 0x0, false, 0xc887e0a76d4fb014 );             
        SDK_FIXED_SIZE( dump_blob_file_header_t, 0x10 );             
    };                             
};
#include "magic/dump_blob_file_header_t.end.hpp"
SDK_VERIFY( struct nt::dump_blob_file_header_t, 0x10 );
