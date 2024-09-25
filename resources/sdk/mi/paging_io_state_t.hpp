#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "pagefile_metadata_layout_t.hpp"

namespace nt { struct mminpage_support_t; }
namespace nt { struct mmpte_t;            }

#include "magic/paging_io_state_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGING_IO_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paging_io_state_t                                                                    
    {                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                      
        _m00 struct rtl::avl_tree_t                        page_file_head;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageFileHead
        _m01 volatile int32_t                              page_file_head_spin_lock;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageFileHeadSpinLock
        _m02 int32_t                                       prefetch_seek_threshold;               //{ +0x000c    +0x000c    +0x0014    +0x000c    } | .PrefetchSeekThreshold
        _m03 uint32_t                                      in_page_single_pages;                  //{ +0x0034    +0x0010    +0x0018    +0x0010    } | .InPageSinglePages
        _m04 sdk::array<union nt::slist_header_t, 2>       in_page_support_s_list_head;           //{ +0x0010    +0x0020    +0x0020    +0x0020    } | .InPageSupportSListHead
        _m05 sdk::array<uint8_t, 2>                        in_page_support_s_list_minimum;        //{ +0x0030    +0x0060    +0x0060    +0x0060    } | .InPageSupportSListMinimum
        _m06 volatile int32_t                              delay_page_faults;                     //{ +0x0038    +0x009c    +0x009c    +0x009c    } | .DelayPageFaults
        _m07 uint32_t                                      file_compression_boundary;             //{ +0x003c    +0x00a0    +0x00a0    +0x00a0    } | .FileCompressionBoundary
        _m08 uint8_t                                       mdls_adjusted;                         //{ +0x0040    +0x00a4    +0x00a4    +0x00a4    } | .MdlsAdjusted
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                      
        _m09 sdk::array<union nt::slist_header_t, 2>       reserved_in_page_support_s_list_head;  //{ +0x0040    +0x0040    +0x0040    } | .ReservedInPageSupportSListHead
        _m10 sdk::array<struct nt::mminpage_support_t*, 2> first_reserved_in_page_block;          //{ +0x0068    +0x0068    +0x0068    } | .FirstReservedInPageBlock
        _m11 sdk::array<struct nt::mminpage_support_t*, 2> last_reserved_in_page_block;           //{ +0x0078    +0x0078    +0x0078    } | .LastReservedInPageBlock
        _m12 struct nt::mmpte_t*                           reserved_ptes;                         //{ +0x0088    +0x0088    +0x0088    } | .ReservedPtes
        _m13 uint64_t                                      reserved_ptes_lock;                    //{ +0x0090    +0x0090    +0x0090    } | .ReservedPtesLock
        _m14 uint32_t                                      reserved_ptes_bit_buffer;              //{ +0x0098    +0x0098    +0x0098    } | .ReservedPtesBitBuffer
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m15 struct mi::pagefile_metadata_layout_t         page_file_metadata;                    //{ +0x000c    } | .PageFileMetadata
        _m16 struct nt::mmpte_t*                           file_only_reserve_ptes;                //{ +0x00a8    } | .FileOnlyReservePtes
                                                                                                
        SDK_MAGIC_PROPERTIES( "_MI_PAGING_IO_STATE.$", 0xb0, true, 0x543af2bcaa52e576 );                                     
        SDK_DYNAMIC_SIZE( paging_io_state_t );                                                  
    };                                                                                          
};
#include "magic/paging_io_state_t.end.hpp"
