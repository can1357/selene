#pragma once
#include <sdkgen/support_library.hpp>
#include "triple_list_entry_t.hpp"

#include "magic/triple_list_t.start.hpp"
namespace win
{
    // [struct _TRIPLE_LIST]
    // => Windows 10 v1607
    //
    struct triple_list_t                                                           
    {                                                                              
        struct u0_control_bits_t                                                   
        {                                                                          
            // Windows 10 v1607                                                    
            //                                                                     
            _m00 volatile uint1_t switch_selector_bit0;                              //{ +0x0000@0  } | .SwitchSelectorBit0
            _m01 volatile uint1_t active_list_bit0;                                  //{ +0x0000@1  } | .ActiveListBit0
            _m02 volatile uint1_t overflow_active_list_bit0;                         //{ +0x0000@2  } | .OverflowActiveListBit0
            _m03 volatile uint1_t switch_selector_bit1;                              //{ +0x0000@3  } | .SwitchSelectorBit1
            _m04 volatile uint1_t active_list_bit1;                                  //{ +0x0000@4  } | .ActiveListBit1
            _m05 volatile uint1_t overflow_active_list_bit1;                         //{ +0x0000@5  } | .OverflowActiveListBit1
            _m06 volatile uint1_t reader_did_the_switch;                             //{ +0x0000@6  } | .ReaderDidTheSwitch
            _m07 volatile uint1_t reader_busy;                                       //{ +0x0000@29 } | .ReaderBusy
            _m08 volatile uint1_t update_ready;                                      //{ +0x0000@30 } | .UpdateReady
            _m09 volatile uint1_t overflow_update_ready;                             //{ +0x0000@31 } | .OverflowUpdateReady
                                                                                   
            SDK_MAGIC_PROPERTIES( "_TRIPLE_LIST.ControlBits.$", 0x0, false, 0x91ce0f2a6e83c5bb );                                                
            SDK_FIXED_SIZE( u0_control_bits_t, 0x4 );                                                
        };                                                                         
                                                                                   
        using ptriple_list_remove_callback_routine_t = sdk::function<void(void*, struct win::triple_list_entry_t*)>*;                      
                                                                                   
        // Windows 10 v1607                                                        
        //                                                                         
        _m10 u0_control_bits_t                               control_bits;           //{ +0x0000    } | .ControlBits
        _m11 volatile int32_t                                combined_control_bits;  //{ +0x0000    } | .CombinedControlBits
        _m12 struct win::triple_list_entry_t                 head;                   //{ +0x0008    } | .Head
        _m13 sdk::array<struct win::triple_list_entry_t*, 3> tail;                   //{ +0x0028    } | .Tail
        _m14 ptriple_list_remove_callback_routine_t          remove_callback;        //{ +0x0040    } | .RemoveCallback
        _m15 void*                                           remove_context;         //{ +0x0048    } | .RemoveContext
        _m16 struct win::triple_list_entry_t*                pending_head;           //{ +0x0050    } | .PendingHead
        _m17 struct win::triple_list_entry_t**               pending_tail_ptr;       //{ +0x0058    } | .PendingTailPtr
        _m18 uint32_t                                        pending_list_index;     //{ +0x0060    } | .PendingListIndex
                                                                                   
        SDK_MAGIC_PROPERTIES( "_TRIPLE_LIST.$", 0x0, false, 0xd048b01a5a9c294d );                      
        SDK_FIXED_SIZE( triple_list_t, 0x68 );                                     
    };                                                                             
};
#include "magic/triple_list_t.end.hpp"
SDK_VERIFY( struct win::triple_list_t::u0_control_bits_t, 0x4 );
SDK_VERIFY( struct win::triple_list_t, 0x68 );
