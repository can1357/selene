#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_shared_commit_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_SHARED_COMMIT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_shared_commit_information_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t commit_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommitSize
                                             
        SDK_MAGIC_PROPERTIES( "_MEMORY_SHARED_COMMIT_INFORMATION.$", 0x8, true, 0x3a4aa06439bc2cd7 );            
        SDK_FIXED_SIZE( memory_shared_commit_information_t, 0x8 );            
    };                                       
};
#include "magic/memory_shared_commit_information_t.end.hpp"
SDK_VERIFY( struct win::memory_shared_commit_information_t, 0x8 );
