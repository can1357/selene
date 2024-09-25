#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_physical_contiguity_information_t.start.hpp"
namespace win
{
    struct memory_physical_contiguity_unit_information_t;

    // [struct _MEMORY_PHYSICAL_CONTIGUITY_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_physical_contiguity_information_t                                      
    {                                                                                    
        using pmemory_physical_contiguity_unit_information_t = struct win::memory_physical_contiguity_unit_information_t*;                            
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m00 void*                                           virtual_address;              //{ +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint64_t                                        size;                         //{ +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint64_t                                        contiguity_unit_size;         //{ +0x0010    +0x0010    +0x0010    } | .ContiguityUnitSize
        _m03 uint32_t                                        flags;                        //{ +0x0018    +0x0018    +0x0018    } | .Flags
        _m04 pmemory_physical_contiguity_unit_information_t  contiguity_unit_information;  //{ +0x0020    +0x0020    +0x0020    } | .ContiguityUnitInformation
                                                                                         
        SDK_MAGIC_PROPERTIES( "_MEMORY_PHYSICAL_CONTIGUITY_INFORMATION.$", 0x28, true, 0xf70eeabcbc1b7932 );                            
        SDK_FIXED_SIZE( memory_physical_contiguity_information_t, 0x28 );                            
    };                                                                                   
};
#include "magic/memory_physical_contiguity_information_t.end.hpp"
SDK_VERIFY( struct win::memory_physical_contiguity_information_t, 0x28 );
