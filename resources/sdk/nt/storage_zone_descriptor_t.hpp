#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_zone_types_t.hpp"
#include "storage_zone_condition_t.hpp"

#include "magic/storage_zone_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ZONE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_zone_descriptor_t                                         
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint32_t                          size;                           //{ +0x0000    } | .Size
        _m01 enum nt::storage_zone_types_t     zone_type;                      //{ +0x0004    } | .ZoneType
        _m02 enum nt::storage_zone_condition_t zone_condition;                 //{ +0x0008    } | .ZoneCondition
        _m03 uint8_t                           reset_write_pointer_recommend;  //{ +0x000c    } | .ResetWritePointerRecommend
        _m04 uint64_t                          zone_size;                      //{ +0x0010    } | .ZoneSize
        _m05 uint64_t                          write_pointer_offset;           //{ +0x0018    } | .WritePointerOffset
                                                                             
        SDK_NONVOL_PROPERTIES( "_STORAGE_ZONE_DESCRIPTOR.$", 0x0, false, 0x222d3e17f2ec042c );                              
        SDK_FIXED_SIZE( storage_zone_descriptor_t, 0x20 );                              
    };                                                                       
};
#include "magic/storage_zone_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_zone_descriptor_t, 0x20 );
