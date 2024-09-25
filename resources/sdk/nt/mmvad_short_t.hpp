#pragma once
#include <sdkgen/support_library.hpp>
#include "mmvad_flags_t.hpp"
#include "mmvad_flags1_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "../mm/shared_vad_flags_t.hpp"
#include "../mm/private_vad_flags_t.hpp"
#include "../mm/graphics_vad_flags_t.hpp"

namespace mi { struct vad_event_block_t; }

#include "magic/mmvad_short_t.start.hpp"
namespace nt
{
    struct mmvad_short_t;

    // [struct _MMVAD_SHORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmvad_short_t                                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m00 struct nt::mmvad_short_t*       next_vad;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextVad
        _m01 struct rtl::balanced_node_t     vad_node;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VadNode
        _m02 uint32_t                        starting_vpn;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StartingVpn
        _m03 uint32_t                        ending_vpn;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EndingVpn
        _m04 uint8_t                         starting_vpn_high;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StartingVpnHigh
        _m05 uint8_t                         ending_vpn_high;        //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .EndingVpnHigh
        _m06 uint8_t                         commit_charge_high;     //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .CommitChargeHigh
        _m07 uint8_t                         spare_nt64_vad_u_char;  //{ +0x0023    +0x0023    +0x0023    +0x0023    } | .SpareNT64VadUChar
        _m08 int32_t                         reference_count;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ReferenceCount
        _m09 struct ex::push_lock_t          push_lock;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PushLock
        _m10 uint32_t                        long_flags;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LongFlags
        _m11 struct nt::mmvad_flags_t        vad_flags;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VadFlags
        _m12 uint32_t                        long_flags1;            //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .LongFlags1
        _m13 struct nt::mmvad_flags1_t       vad_flags1;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .VadFlags1
                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m14 void*                           extra_create_info;      //{ +0x0008    +0x0008    +0x0008    } | .ExtraCreateInfo
        _m15 struct mm::private_vad_flags_t  private_vad_flags;      //{ +0x0030    +0x0030    +0x0030    } | .PrivateVadFlags
        _m16 struct mm::graphics_vad_flags_t graphics_vad_flags;     //{ +0x0030    +0x0030    +0x0030    } | .GraphicsVadFlags
        _m17 struct mm::shared_vad_flags_t   shared_vad_flags;       //{ +0x0030    +0x0030    +0x0030    } | .SharedVadFlags
        _m18 volatile uint32_t               volatile_vad_long;      //{ +0x0030    +0x0030    +0x0030    } | .VolatileVadLong
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                      
        //                                                         
        _m19 struct mi::vad_event_block_t*   event_list;             //{ +0x0038    +0x0038    +0x0038    } | .EventList
                                                                   
        // Windows 11                                              
        //                                                         
        _m20 uint64_t                        event_list_u_long_ptr;  //{ +0x0038    } | .EventListULongPtr
        _m21 uint4_t                         starting_vpn_higher;    //{ +0x0038@0  } | .StartingVpnHigher
                                                                   
        SDK_MAGIC_PROPERTIES( "_MMVAD_SHORT.$", 0x40, true, 0x83bc6dc861dc9e3c );                      
        SDK_FIXED_SIZE( mmvad_short_t, 0x40 );                      
    };                                                             
};
#include "magic/mmvad_short_t.end.hpp"
SDK_VERIFY( struct nt::mmvad_short_t, 0x40 );
