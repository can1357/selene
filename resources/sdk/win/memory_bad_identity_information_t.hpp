#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_bad_identity_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_BAD_IDENTITY_INFORMATION]
    // => Windows 11
    //
    struct memory_bad_identity_information_t
    {                                       
        // Windows 11                  
        //                             
        _m00 void*    virtual_address;        //{ +0x0000    } | .VirtualAddress
        _m01 uint64_t page_frame_index;       //{ +0x0000    } | .PageFrameIndex
        _m02 uint1_t  poisoned;               //{ +0x0008@0  } | .Poisoned
        _m03 uint1_t  physical;               //{ +0x0008@1  } | .Physical
        _m04 uint64_t all_information;        //{ +0x0008    } | .AllInformation
                                            
        SDK_MAGIC_PROPERTIES( "_MEMORY_BAD_IDENTITY_INFORMATION.$", 0x0, false, 0x7fd5006150b6e7a0 );                 
        SDK_FIXED_SIZE( memory_bad_identity_information_t, 0x10 );                 
    };                                      
};
#include "magic/memory_bad_identity_information_t.end.hpp"
SDK_VERIFY( struct win::memory_bad_identity_information_t, 0x10 );
