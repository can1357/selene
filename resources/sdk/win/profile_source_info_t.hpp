#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/profile_source_info_t.start.hpp"
namespace win
{
    // [struct _PROFILE_SOURCE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_source_info_t                      
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               source;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Source
        _m02 uint32_t               min_interval;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinInterval
        _m03 uint32_t               max_interval;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxInterval
        _m04 sdk::array<wchar_t, 1> description;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Description
                                                      
        SDK_MAGIC_PROPERTIES( "_PROFILE_SOURCE_INFO.$", 0x20, true, 0xa0c14e63eca75fa3 );                  
        SDK_FIXED_SIZE( profile_source_info_t, 0x20 );                  
    };                                                
};
#include "magic/profile_source_info_t.end.hpp"
SDK_VERIFY( struct win::profile_source_info_t, 0x20 );
