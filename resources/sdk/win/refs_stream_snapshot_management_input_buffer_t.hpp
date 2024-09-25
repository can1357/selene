#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/refs_stream_snapshot_operation_t.hpp"

#include "magic/refs_stream_snapshot_management_input_buffer_t.start.hpp"
namespace win
{
    // [struct _REFS_STREAM_SNAPSHOT_MANAGEMENT_INPUT_BUFFER]
    // => Windows 11
    //
    struct refs_stream_snapshot_management_input_buffer_t                            
    {                                                                                
        // Windows 11                                                                
        //                                                                           
        _m00 enum nt::refs_stream_snapshot_operation_t operation;                      //{ +0x0000    } | .Operation
        _m01 uint16_t                                  snapshot_name_length;           //{ +0x0004    } | .SnapshotNameLength
        _m02 uint16_t                                  operation_input_buffer_length;  //{ +0x0006    } | .OperationInputBufferLength
        _m03 sdk::array<uint16_t, 1>                   name_and_input_buffer;          //{ +0x0018    } | .NameAndInputBuffer
                                                                                     
        SDK_MAGIC_PROPERTIES( "_REFS_STREAM_SNAPSHOT_MANAGEMENT_INPUT_BUFFER.$", 0x0, false, 0xeb701332fdb990ad );                              
        SDK_FIXED_SIZE( refs_stream_snapshot_management_input_buffer_t, 0x20 );                              
    };                                                                               
};
#include "magic/refs_stream_snapshot_management_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_stream_snapshot_management_input_buffer_t, 0x20 );
