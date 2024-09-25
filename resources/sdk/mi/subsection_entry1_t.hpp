#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/subsection_entry1_t.start.hpp"
namespace mi
{
    // [struct _MI_SUBSECTION_ENTRY1]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsection_entry1_t                   
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint30_t cross_partition_references;  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CrossPartitionReferences
        _m01 uint2_t  subsection_mapped_large;     //{ +0x0000@30 +0x0000@30 +0x0000@30 } | .SubsectionMappedLarge
                                                 
        SDK_MAGIC_PROPERTIES( "_MI_SUBSECTION_ENTRY1.$", 0x4, true, 0xf5f611543e268171 );                           
        SDK_FIXED_SIZE( subsection_entry1_t, 0x4 );                           
    };                                           
};
#include "magic/subsection_entry1_t.end.hpp"
SDK_VERIFY( struct mi::subsection_entry1_t, 0x4 );
