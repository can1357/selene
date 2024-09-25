#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_cpu_set_tag_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CPU_SET_TAG_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_cpu_set_tag_information_t   
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint64_t                tag;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tag
        _m01 sdk::array<uint64_t, 1> cpu_sets;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CpuSets
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CPU_SET_TAG_INFORMATION.$", 0x10, true, 0x266cbcb5f3d1a1fd );         
        SDK_FIXED_SIZE( system_cpu_set_tag_information_t, 0x10 );         
    };                                        
};
#include "magic/system_cpu_set_tag_information_t.end.hpp"
SDK_VERIFY( struct win::system_cpu_set_tag_information_t, 0x10 );
