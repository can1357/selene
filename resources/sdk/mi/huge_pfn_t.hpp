#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/huge_pfn_t.start.hpp"
namespace mi
{
    // [struct _MI_HUGE_PFN]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct huge_pfn_t                                                                                
    {                                                                                                
        struct u0_on_list_t                                                                          
        {                                                                                            
            // Windows 11                                                                            
            //                                                                                       
            _m08 uint3_t  page_state;                                                                  //{ +0x0000@0  } | .PageState
            _m09 uint1_t  has_error;                                                                   //{ +0x0000@3  } | .HasError
            _m10 uint11_t partition;                                                                   //{ +0x0000@4  } | .Partition
            _m11 uint22_t flink;                                                                       //{ +0x0000@15 } | .Flink
            _m12 uint22_t blink;                                                                       //{ +0x0000@37 } | .Blink
            _m13 uint1_t  write_in_progress;                                                           //{ +0x0000@59 } | .WriteInProgress
                                                                                                     
            SDK_MAGIC_PROPERTIES( "_MI_HUGE_PFN.OnList.$", 0x0, false, 0x17bd792926c613a0 );                                              
            SDK_FIXED_SIZE( u0_on_list_t, 0x8 );                                                     
        };                                                                                           
                                                                                                     
        struct u1_active_t                                                                           
        {                                                                                            
            // Windows 11                                                                            
            //                                                                                       
            _m15 uint3_t  page_state;                                                                  //{ +0x0000@0  } | .PageState
            _m16 uint1_t  has_error;                                                                   //{ +0x0000@3  } | .HasError
            _m17 uint11_t partition;                                                                   //{ +0x0000@4  } | .Partition
            _m18 uint1_t  delete_bit;                                                                  //{ +0x0000@15 } | .DeleteBit
            _m19 uint1_t  contents_were_non_zero_when_initially_unlinked;                              //{ +0x0000@16 } | .ContentsWereNonZeroWhenInitiallyUnlinked
            _m20 uint22_t share_count;                                                                 //{ +0x0000@17 } | .ShareCount
                                                                                                     
            SDK_MAGIC_PROPERTIES( "_MI_HUGE_PFN.Active.$", 0x0, false, 0xacc6e67e4c5f706e );                                                                           
            SDK_FIXED_SIZE( u1_active_t, 0x8 );                                                                           
        };                                                                                           
                                                                                                     
        struct u2_transition_t                                                                       
        {                                                                                            
            // Windows 11                                                                            
            //                                                                                       
            _m22 uint3_t  page_state;                                                                  //{ +0x0000@0  } | .PageState
            _m23 uint1_t  has_error;                                                                   //{ +0x0000@3  } | .HasError
            _m24 uint11_t partition;                                                                   //{ +0x0000@4  } | .Partition
            _m25 uint9_t  dangling_io_nodes;                                                           //{ +0x0000@15 } | .DanglingIoNodes
                                                                                                     
            SDK_MAGIC_PROPERTIES( "_MI_HUGE_PFN.Transition.$", 0x0, false, 0x755eac42d7ee261c );                                              
            SDK_FIXED_SIZE( u2_transition_t, 0x8 );                                                  
        };                                                                                           
                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                           
        _m00 uint64_t                                                    entire_field;                 //{ +0x0000    +0x0000    +0x0000    } | .EntireField
        _m01 uint3_t                                                     page_state;                   //{ +0x0000@18 +0x0000@0  +0x0000@18 } | .PageState
        _m02 uint1_t                                                     has_error;                    //{ +0x0000@40 +0x0000@3  +0x0000@40 } | .HasError
        _m03 uint11_t                                                    partition;                    //{ +0x0000@41 +0x0000@4  +0x0000@41 } | .Partition
                                                                                                     
        // Windows 10 v2004, Windows 10 v20H2                                                        
        //                                                                                           
        _m04 uint18_t                                                    flink;                        //{ +0x0000@0  +0x0000@0  } | .Flink
        _m05 uint18_t                                                    blink;                        //{ +0x0000@21 +0x0000@21 } | .Blink
        _m06 uint1_t                                                     write_in_progress;            //{ +0x0000@39 +0x0000@39 } | .WriteInProgress
                                                                                                     
        // Windows 11                                                                                
        //                                                                                           
        _m07 uint49_t                                                    zeroed_during_state_changes;  //{ +0x0000@15 } | .ZeroedDuringStateChanges
        _m14 u0_on_list_t                                                on_list;                      //{ +0x0000    } | .OnList
        _m21 u1_active_t                                                 active;                       //{ +0x0000    } | .Active
        _m26 u2_transition_t                                             transition;                   //{ +0x0000    } | .Transition
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_HUGE_PFN.$", 0x8, true, 0xd8cbf83f85303f5f );                            
        SDK_FIXED_SIZE( huge_pfn_t, 0x8 );                                                           
    };                                                                                               
};
#include "magic/huge_pfn_t.end.hpp"
SDK_VERIFY( struct mi::huge_pfn_t::u0_on_list_t, 0x8 );
SDK_VERIFY( struct mi::huge_pfn_t::u1_active_t, 0x8 );
SDK_VERIFY( struct mi::huge_pfn_t::u2_transition_t, 0x8 );
SDK_VERIFY( struct mi::huge_pfn_t, 0x8 );
