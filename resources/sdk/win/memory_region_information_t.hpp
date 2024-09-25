#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_region_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_REGION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_region_information_t        
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 void*    allocation_base;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationBase
        _m01 uint32_t allocation_protect;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationProtect
        _m02 uint32_t region_type;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RegionType
        _m03 uint1_t  _private;                 //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .Private
        _m04 uint1_t  mapped_data_file;         //{ +0x000c@1  +0x000c@1  +0x000c@1  +0x000c@1  } | .MappedDataFile
        _m05 uint1_t  mapped_image;             //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .MappedImage
        _m06 uint1_t  mapped_page_file;         //{ +0x000c@3  +0x000c@3  +0x000c@3  +0x000c@3  } | .MappedPageFile
        _m07 uint1_t  mapped_physical;          //{ +0x000c@4  +0x000c@4  +0x000c@4  +0x000c@4  } | .MappedPhysical
        _m08 uint1_t  direct_mapped;            //{ +0x000c@5  +0x000c@5  +0x000c@5  +0x000c@5  } | .DirectMapped
        _m09 uint64_t region_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegionSize
        _m10 uint64_t commit_size;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommitSize
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m11 uint1_t  software_enclave;         //{ +0x000c@6  +0x000c@6  +0x000c@6  } | .SoftwareEnclave
        _m12 uint1_t  page_size64k;             //{ +0x000c@7  +0x000c@7  +0x000c@7  } | .PageSize64K
        _m13 uint1_t  placeholder_reservation;  //{ +0x000c@8  +0x000c@8  +0x000c@8  } | .PlaceholderReservation
        _m14 uint64_t partition_id;             //{ +0x0020    +0x0020    +0x0020    } | .PartitionId
        _m15 uint64_t node_preference;          //{ +0x0028    +0x0028    +0x0028    } | .NodePreference
                                              
        // Windows 11                         
        //                                    
        _m16 uint1_t  mapped_awe;               //{ +0x000c@9  } | .MappedAwe
        _m17 uint1_t  mapped_write_watch;       //{ +0x000c@10 } | .MappedWriteWatch
        _m18 uint1_t  page_size_large;          //{ +0x000c@11 } | .PageSizeLarge
        _m19 uint1_t  page_size_huge;           //{ +0x000c@12 } | .PageSizeHuge
                                              
        SDK_MAGIC_PROPERTIES( "_MEMORY_REGION_INFORMATION.$", 0x30, true, 0x35aa9f5b5eb8ba90 );                        
        SDK_DYNAMIC_SIZE( memory_region_information_t );                        
    };                                        
};
#include "magic/memory_region_information_t.end.hpp"
