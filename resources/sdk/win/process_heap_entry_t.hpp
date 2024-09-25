#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_heap_entry_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HEAP_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_heap_entry_t                                     
    {                                                               
        struct u0_block_t                                           
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                      
            _m05 void*                   h_mem;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hMem
            _m06 sdk::array<uint32_t, 3> dw_reserved;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwReserved
                                                                    
            SDK_MAGIC_PROPERTIES( "_PROCESS_HEAP_ENTRY.Block.$", 0x18, true, 0x1a8d9ccd338adc5f );                           
            SDK_FIXED_SIZE( u0_block_t, 0x18 );                           
        };                                                          
                                                                    
        struct u4_region_t                                          
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                      
            _m08 uint32_t dw_committed_size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCommittedSize
            _m09 uint32_t dw_un_committed_size;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwUnCommittedSize
            _m10 void*    lp_first_block;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpFirstBlock
            _m11 void*    lp_last_block;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpLastBlock
                                                                    
            SDK_MAGIC_PROPERTIES( "_PROCESS_HEAP_ENTRY.Region.$", 0x18, true, 0x42d34248265b666 );                                    
            SDK_FIXED_SIZE( u4_region_t, 0x18 );                                    
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 void*                                   lp_data;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpData
        _m01 uint32_t                                cb_data;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbData
        _m02 uint8_t                                 cb_overhead;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbOverhead
        _m03 uint8_t                                 i_region_index;  //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .iRegionIndex
        _m04 uint16_t                                w_flags;         //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .wFlags
        _m07 u0_block_t                              block;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Block
        _m12 u4_region_t                             region;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Region
                                                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_HEAP_ENTRY.$", 0x28, true, 0x583553d6785cb5e0 );               
        SDK_FIXED_SIZE( process_heap_entry_t, 0x28 );               
    };                                                              
};
#include "magic/process_heap_entry_t.end.hpp"
SDK_VERIFY( struct win::process_heap_entry_t::u0_block_t, 0x18 );
SDK_VERIFY( struct win::process_heap_entry_t::u4_region_t, 0x18 );
SDK_VERIFY( struct win::process_heap_entry_t, 0x28 );
