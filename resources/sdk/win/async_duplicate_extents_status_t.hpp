#pragma once
#include <sdkgen/support_library.hpp>
#include "duplicate_extents_state_t.hpp"

#include "magic/async_duplicate_extents_status_t.start.hpp"
namespace win
{
    // [struct _ASYNC_DUPLICATE_EXTENTS_STATUS]
    // => Windows 11
    //
    struct async_duplicate_extents_status_t                         
    {                                                               
        // Windows 11                                               
        //                                                          
        _m00 uint32_t                            version;             //{ +0x0000    } | .Version
        _m01 enum win::duplicate_extents_state_t state;               //{ +0x0004    } | .State
        _m02 uint64_t                            source_file_offset;  //{ +0x0008    } | .SourceFileOffset
        _m03 uint64_t                            target_file_offset;  //{ +0x0010    } | .TargetFileOffset
        _m04 uint64_t                            byte_count;          //{ +0x0018    } | .ByteCount
        _m05 uint64_t                            bytes_duplicated;    //{ +0x0020    } | .BytesDuplicated
                                                                    
        SDK_MAGIC_PROPERTIES( "_ASYNC_DUPLICATE_EXTENTS_STATUS.$", 0x0, false, 0x421dceedfc3384d7 );                   
        SDK_FIXED_SIZE( async_duplicate_extents_status_t, 0x28 );                   
    };                                                              
};
#include "magic/async_duplicate_extents_status_t.end.hpp"
SDK_VERIFY( struct win::async_duplicate_extents_status_t, 0x28 );
