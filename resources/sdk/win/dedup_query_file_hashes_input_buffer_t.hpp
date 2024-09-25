#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dedup_query_file_hashes_input_buffer_t.start.hpp"
namespace win
{
    // [struct _DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dedup_query_file_hashes_input_buffer_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t version;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t query_flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .QueryFlags
        _m02 uint32_t hash_algorithm;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashAlgorithm
        _m03 int64_t  range_offset_in_file;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RangeOffsetInFile
        _m04 int64_t  range_length;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RangeLength
                                                 
        SDK_MAGIC_PROPERTIES( "_DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER.$", 0x20, true, 0x9aa93dd6f071b87b );                     
        SDK_FIXED_SIZE( dedup_query_file_hashes_input_buffer_t, 0x20 );                     
    };                                           
};
#include "magic/dedup_query_file_hashes_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::dedup_query_file_hashes_input_buffer_t, 0x20 );
