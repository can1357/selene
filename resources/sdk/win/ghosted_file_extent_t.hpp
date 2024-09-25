#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ghosted_file_extent_t.start.hpp"
namespace win
{
    // [struct _GHOSTED_FILE_EXTENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ghosted_file_extent_t                                
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 int64_t                file_offset;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t                byte_count;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ByteCount
        _m02 struct nt::guid_t      recall_owner_guid;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RecallOwnerGuid
        _m03 uint32_t               next_entry_offset;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NextEntryOffset
        _m04 uint32_t               recall_metadata_buffer_size;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .RecallMetadataBufferSize
        _m05 sdk::array<uint8_t, 1> recall_metadata_buffer;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .RecallMetadataBuffer
                                                                
        SDK_NONVOL_PROPERTIES( "_GHOSTED_FILE_EXTENT.$", 0x30, true, 0x82f8d2da7d7e04fd );                            
        SDK_FIXED_SIZE( ghosted_file_extent_t, 0x30 );                            
    };                                                          
};
#include "magic/ghosted_file_extent_t.end.hpp"
SDK_VERIFY( struct win::ghosted_file_extent_t, 0x30 );
