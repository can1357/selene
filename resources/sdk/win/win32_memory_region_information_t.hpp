#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32_memory_region_information_t.start.hpp"
namespace win
{
    // [struct WIN32_MEMORY_REGION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_memory_region_information_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 void*    allocation_base;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationBase
        _m01 uint32_t allocation_protect;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationProtect
        _m02 uint32_t flags;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m03 uint1_t  _private;               //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .Private
        _m04 uint1_t  mapped_data_file;       //{ +0x000c@1  +0x000c@1  +0x000c@1  +0x000c@1  } | .MappedDataFile
        _m05 uint1_t  mapped_image;           //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .MappedImage
        _m06 uint1_t  mapped_page_file;       //{ +0x000c@3  +0x000c@3  +0x000c@3  +0x000c@3  } | .MappedPageFile
        _m07 uint1_t  mapped_physical;        //{ +0x000c@4  +0x000c@4  +0x000c@4  +0x000c@4  } | .MappedPhysical
        _m08 uint1_t  direct_mapped;          //{ +0x000c@5  +0x000c@5  +0x000c@5  +0x000c@5  } | .DirectMapped
        _m09 uint64_t region_size;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegionSize
        _m10 uint64_t commit_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommitSize
                                            
        SDK_MAGIC_PROPERTIES( "WIN32_MEMORY_REGION_INFORMATION.$", 0x20, true, 0x49c24e23c4e6ab85 );                   
        SDK_FIXED_SIZE( win32_memory_region_information_t, 0x20 );                   
    };                                      
};
#include "magic/win32_memory_region_information_t.end.hpp"
SDK_VERIFY( struct win::win32_memory_region_information_t, 0x20 );
