#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_walk_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_WALK_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_walk_entry_t                                        
    {                                                               
        struct u0_block_t                                           
        {                                                           
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                      
            _m05 uint64_t settable;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Settable
            _m06 uint16_t tag_index;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TagIndex
            _m07 uint16_t allocator_back_trace_index;                 //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocatorBackTraceIndex
                                                                    
            SDK_NONVOL_PROPERTIES( "_RTL_HEAP_WALK_ENTRY.Block.$", 0x18, true, 0x63d57ba4fac8a8a1 );                                          
            SDK_FIXED_SIZE( u0_block_t, 0x18 );                                          
        };                                                          
                                                                    
        struct u5_segment_t                                         
        {                                                           
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                      
            _m09 uint32_t committed_size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CommittedSize
            _m10 uint32_t un_committed_size;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .UnCommittedSize
            _m11 void*    first_entry;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstEntry
            _m12 void*    last_entry;                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastEntry
                                                                    
            SDK_NONVOL_PROPERTIES( "_RTL_HEAP_WALK_ENTRY.Segment.$", 0x18, true, 0x6fee4e707ae48bdc );                                 
            SDK_FIXED_SIZE( u5_segment_t, 0x18 );                                 
        };                                                          
                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 void*                                   data_address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataAddress
        _m01 uint64_t                                data_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSize
        _m02 uint8_t                                 overhead_bytes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OverheadBytes
        _m03 uint8_t                                 segment_index;   //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .SegmentIndex
        _m04 uint16_t                                flags;           //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .Flags
        _m08 u0_block_t                              block;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Block
        _m13 u5_segment_t                            segment;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Segment
                                                                    
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_WALK_ENTRY.$", 0x30, true, 0x2d31b37a3c9d515 );               
        SDK_FIXED_SIZE( heap_walk_entry_t, 0x30 );                  
    };                                                              
};
#include "magic/heap_walk_entry_t.end.hpp"
SDK_VERIFY( struct rtl::heap_walk_entry_t::u0_block_t, 0x18 );
SDK_VERIFY( struct rtl::heap_walk_entry_t::u5_segment_t, 0x18 );
SDK_VERIFY( struct rtl::heap_walk_entry_t, 0x30 );
