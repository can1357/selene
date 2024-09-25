#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsection_flags2_t.start.hpp"
namespace nt
{
    // [struct _MMSECTION_FLAGS2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsection_flags2_t                                       
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                          
        _m00 uint10_t partition_id;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PartitionId
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                          
        _m01 uint1_t  no_cross_partition_access;                      //{ +0x0002@0  +0x0002@0  +0x0002@0  } | .NoCrossPartitionAccess
        _m02 uint1_t  subsection_cross_partition_reference_overflow;  //{ +0x0002@1  +0x0002@1  +0x0002@1  } | .SubsectionCrossPartitionReferenceOverflow
                                                                    
        // Windows 10 v1607                                              
        //                                                          
        _m03 uint22_t number_of_child_views;                          //{ +0x0000@10 } | .NumberOfChildViews
                                                                    
        // Windows 11                                               
        //                                                          
        _m04 uint2_t  using_file_extents;                             //{ +0x0002@2  } | .UsingFileExtents
                                                                    
        SDK_MAGIC_PROPERTIES( "_MMSECTION_FLAGS2.$", 0x4, true, 0x8be6b75001187ec0 );                                              
        SDK_FIXED_SIZE( mmsection_flags2_t, 0x4 );                                              
    };                                                              
};
#include "magic/mmsection_flags2_t.end.hpp"
SDK_VERIFY( struct nt::mmsection_flags2_t, 0x4 );
