#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/fsctl_ghost_file_extents_input_buffer_t.start.hpp"
namespace win
{
    // [struct _FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_ghost_file_extents_input_buffer_t              
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 int64_t                file_offset;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t                byte_count;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ByteCount
        _m02 struct nt::guid_t      recall_owner_guid;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RecallOwnerGuid
        _m03 uint32_t               recall_metadata_buffer_size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .RecallMetadataBufferSize
        _m04 sdk::array<uint8_t, 1> recall_metadata_buffer;       //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .RecallMetadataBuffer
                                                                
        SDK_NONVOL_PROPERTIES( "_FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER.$", 0x28, true, 0x95818054be071889 );                            
        SDK_FIXED_SIZE( fsctl_ghost_file_extents_input_buffer_t, 0x28 );                            
    };                                                          
};
#include "magic/fsctl_ghost_file_extents_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::fsctl_ghost_file_extents_input_buffer_t, 0x28 );
