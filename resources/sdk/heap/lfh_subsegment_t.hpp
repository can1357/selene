#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"
#include "../nt/slist_entry_t.hpp"
#include "lfh_subsegment_delay_free_t.hpp"
#include "lfh_subsegment_encoded_offsets_t.hpp"

#include "magic/lfh_subsegment_t.start.hpp"
namespace heap
{
    struct lfh_subsegment_owner_t;

    // [struct _HEAP_LFH_SUBSEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_subsegment_t                                                    
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                     
        _m00 nt::list_entry_t                              list_entry;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct heap::lfh_subsegment_owner_t*          owner;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Owner
        _m02 union heap::lfh_subsegment_delay_free_t       delay_free;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DelayFree
        _m03 sdk::variant<struct rtl::srwlock_t, uint64_t> commit_lock;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommitLock
        _m04 uint16_t                                      free_count;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeCount
        _m05 uint16_t                                      block_count;          //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .BlockCount
        _m06 volatile int16_t                              interlocked_short;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InterlockedShort
        _m07 volatile int32_t                              interlocked_long;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InterlockedLong
        _m08 uint16_t                                      free_hint;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FreeHint
        _m09 uint8_t                                       location;             //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .Location
        _m10 struct heap::lfh_subsegment_encoded_offsets_t block_offsets;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BlockOffsets
        _m11 uint8_t                                       commit_unit_shift;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .CommitUnitShift
        _m12 uint8_t                                       commit_unit_count;    //{ +0x002d    +0x002d    +0x002d    +0x002d    } | .CommitUnitCount
        _m13 uint16_t                                      commit_state_offset;  //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .CommitStateOffset
        _m14 sdk::array<uint64_t, 1>                       block_bitmap;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BlockBitmap
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m15 uint8_t                                       witheld_block_count;  //{ +0x0027    +0x0027    +0x0027    } | .WitheldBlockCount
                                                                               
        // Windows 10 v1607                                                    
        //                                                                     
        _m16 struct nt::slist_entry_t                      link;                 //{ +0x0000    } | .Link
                                                                               
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT.$", 0x38, true, 0x88becdba148b47b1 );                    
        SDK_DYNAMIC_SIZE( lfh_subsegment_t );                                  
    };                                                                         
};
#include "magic/lfh_subsegment_t.end.hpp"
