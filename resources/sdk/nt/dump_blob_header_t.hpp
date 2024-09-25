#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/dump_blob_header_t.start.hpp"
namespace nt
{
    // [struct _DUMP_BLOB_HEADER]
    // => WDK 10 (NV)
    //
    struct dump_blob_header_t              
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint32_t          header_size;  //{ +0x0000    } | .HeaderSize
        _m01 struct nt::guid_t tag;          //{ +0x0004    } | .Tag
        _m02 uint32_t          data_size;    //{ +0x0014    } | .DataSize
        _m03 uint32_t          pre_pad;      //{ +0x0018    } | .PrePad
        _m04 uint32_t          post_pad;     //{ +0x001c    } | .PostPad
                                           
        SDK_NONVOL_PROPERTIES( "_DUMP_BLOB_HEADER.$", 0x0, false, 0xae9d792ef9d04daa );            
        SDK_FIXED_SIZE( dump_blob_header_t, 0x20 );            
    };                                     
};
#include "magic/dump_blob_header_t.end.hpp"
SDK_VERIFY( struct nt::dump_blob_header_t, 0x20 );
