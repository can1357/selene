#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "ks_framing_range_t.hpp"
#include "ks_framing_range_weighted_t.hpp"

#include "magic/ks_framing_item_t.start.hpp"
namespace ndis
{
    // [struct KS_FRAMING_ITEM]
    // => Windows 10 v1607
    //
    struct ks_framing_item_t                                             
    {                                                                    
        // Windows 10 v1607                                              
        //                                                               
        _m00 struct nt::guid_t                        memory_type;         //{ +0x0000    } | .MemoryType
        _m01 struct nt::guid_t                        bus_type;            //{ +0x0010    } | .BusType
        _m02 uint32_t                                 memory_flags;        //{ +0x0020    } | .MemoryFlags
        _m03 uint32_t                                 bus_flags;           //{ +0x0024    } | .BusFlags
        _m04 uint32_t                                 flags;               //{ +0x0028    } | .Flags
        _m05 uint32_t                                 frames;              //{ +0x002c    } | .Frames
        _m06 uint32_t                                 file_alignment;      //{ +0x0030    } | .FileAlignment
        _m07 int32_t                                  frame_pitch;         //{ +0x0030    } | .FramePitch
        _m08 uint32_t                                 memory_type_weight;  //{ +0x0034    } | .MemoryTypeWeight
        _m09 struct ndis::ks_framing_range_t          physical_range;      //{ +0x0038    } | .PhysicalRange
        _m10 struct ndis::ks_framing_range_weighted_t framing_range;       //{ +0x0044    } | .FramingRange
                                                                         
        SDK_MAGIC_PROPERTIES( "KS_FRAMING_ITEM.$", 0x0, false, 0x3c0ce1ab7be8f3c1 );                   
        SDK_FIXED_SIZE( ks_framing_item_t, 0x58 );                       
    };                                                                   
};
#include "magic/ks_framing_item_t.end.hpp"
SDK_VERIFY( struct ndis::ks_framing_item_t, 0x58 );
