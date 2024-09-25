#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mmpte_t.hpp"

namespace nt { struct mmpfn_t; }

#include "magic/common_page_state_t.start.hpp"
namespace mi
{
    // [struct _MI_COMMON_PAGE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct common_page_state_t                            
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 struct nt::mmpfn_t*     page_of_ones_pfn;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageOfOnesPfn
        _m01 uint64_t                page_of_ones;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageOfOnes
        _m02 struct nt::mmpfn_t*     dummy_page_pfn;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DummyPagePfn
        _m03 uint64_t                dummy_page;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DummyPage
        _m04 uint64_t                page_of_zeroes;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PageOfZeroes
        _m05 void*                   zero_mapping;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ZeroMapping
        _m06 void*                   ones_mapping;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OnesMapping
        _m07 uint64_t                zero_crc;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ZeroCrc
        _m08 uint64_t                ones_crc;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .OnesCrc
        _m09 uint64_t                page_table_of_zeroes;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PageTableOfZeroes
        _m10 struct nt::mmpte_t      pde_of_zeroes;         //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .PdeOfZeroes
        _m11 uint64_t                page_table_of_ones;    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .PageTableOfOnes
        _m12 struct nt::mmpte_t      pde_of_ones;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .PdeOfOnes
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                     
        //                                                
        _m13 sdk::array<uint64_t, 4> bitmap_gap_frames;     //{ +0x0048    +0x0048    +0x0048    } | .BitmapGapFrames
        _m14 sdk::array<uint64_t, 4> pfn_gap_frames;        //{ +0x0068    +0x0068    +0x0068    } | .PfnGapFrames
                                                          
        // Windows 11                                     
        //                                                
        _m15 sdk::array<uint64_t, 4> ones_gap_frames;       //{ +0x0048    } | .OnesGapFrames
        _m16 sdk::array<uint64_t, 4> zeroes_gap_frames;     //{ +0x0068    } | .ZeroesGapFrames
                                                          
        SDK_MAGIC_PROPERTIES( "_MI_COMMON_PAGE_STATE.$", 0xa8, true, 0xaadabc6043f97b11 );                     
        SDK_FIXED_SIZE( common_page_state_t, 0xa8 );                     
    };                                                    
};
#include "magic/common_page_state_t.end.hpp"
SDK_VERIFY( struct mi::common_page_state_t, 0xa8 );
