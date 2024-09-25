#pragma once
#include <sdkgen/support_library.hpp>
#include "io_status_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/io_info_t.start.hpp"
namespace pop
{
    // [struct _POP_IO_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_info_t                                      
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                
        _m00 struct nt::mdl_t*     dump_mdl;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DumpMdl
        _m01 enum pop::io_status_t io_status;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoStatus
        _m02 uint64_t              io_start_count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoStartCount
        _m03 uint64_t              io_bytes_completed;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IoBytesCompleted
        _m04 uint64_t              io_bytes_in_progress;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IoBytesInProgress
        _m05 uint64_t              request_size;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RequestSize
        _m06 int64_t               io_location;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IoLocation
        _m07 uint64_t              file_offset;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileOffset
        _m08 void*                 buffer;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Buffer
        _m09 uint8_t               async_capable;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AsyncCapable
        _m10 uint64_t              bytes_to_read;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .BytesToRead
        _m11 uint32_t              pages;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Pages
        _m12 uint64_t              highest_checksum_index;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .HighestChecksumIndex
        _m13 uint16_t              previous_checksum;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PreviousChecksum
                                                          
        SDK_MAGIC_PROPERTIES( "_POP_IO_INFO.$", 0x70, true, 0x35d5330cd2d331a5 );                       
        SDK_FIXED_SIZE( io_info_t, 0x70 );                       
    };                                                    
};
#include "magic/io_info_t.end.hpp"
SDK_VERIFY( struct pop::io_info_t, 0x70 );
