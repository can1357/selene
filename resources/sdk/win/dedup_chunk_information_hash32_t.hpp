#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dedup_chunk_information_hash32_t.start.hpp"
namespace win
{
    // [struct _DEDUP_CHUNK_INFORMATION_HASH32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dedup_chunk_information_hash32_t               
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                chunk_flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ChunkFlags
        _m01 int64_t                 chunk_offset_in_file;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ChunkOffsetInFile
        _m02 int64_t                 chunk_size;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ChunkSize
        _m03 sdk::array<uint8_t, 32> hash_val;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HashVal
                                                          
        SDK_MAGIC_PROPERTIES( "_DEDUP_CHUNK_INFORMATION_HASH32.$", 0x38, true, 0xdc333c6e0638a5e2 );                     
        SDK_FIXED_SIZE( dedup_chunk_information_hash32_t, 0x38 );                     
    };                                                    
};
#include "magic/dedup_chunk_information_hash32_t.end.hpp"
SDK_VERIFY( struct win::dedup_chunk_information_hash32_t, 0x38 );
