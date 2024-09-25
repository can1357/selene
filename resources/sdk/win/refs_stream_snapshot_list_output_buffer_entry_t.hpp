#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_stream_snapshot_list_output_buffer_entry_t.start.hpp"
namespace win
{
    // [struct _REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY]
    // => Windows 11
    //
    struct refs_stream_snapshot_list_output_buffer_entry_t 
    {                                                      
        // Windows 11                                      
        //                                                 
        _m00 uint32_t               next_entry_offset;       //{ +0x0000    } | .NextEntryOffset
        _m01 uint16_t               snapshot_name_length;    //{ +0x0004    } | .SnapshotNameLength
        _m02 uint64_t               snapshot_creation_time;  //{ +0x0008    } | .SnapshotCreationTime
        _m03 uint64_t               stream_size;             //{ +0x0010    } | .StreamSize
        _m04 uint64_t               stream_allocation_size;  //{ +0x0018    } | .StreamAllocationSize
        _m05 sdk::array<wchar_t, 1> snapshot_name;           //{ +0x0030    } | .SnapshotName
                                                           
        SDK_MAGIC_PROPERTIES( "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.$", 0x0, false, 0xa90b6e7352a8e643 );                       
        SDK_FIXED_SIZE( refs_stream_snapshot_list_output_buffer_entry_t, 0x38 );                       
    };                                                     
};
#include "magic/refs_stream_snapshot_list_output_buffer_entry_t.end.hpp"
SDK_VERIFY( struct win::refs_stream_snapshot_list_output_buffer_entry_t, 0x38 );
