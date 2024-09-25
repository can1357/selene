#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mipfnblink_t.start.hpp"
namespace nt
{
    // [struct _MIPFNBLINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mipfnblink_t                                    
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m00 varuint_t         blink;                        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Blink
        _m01 varuint_t         tb_flush_stamp;               //{ +0x0000@56 +0x0000@56 +0x0000@59 +0x0000@56 } | .TbFlushStamp
        _m02 volatile uint1_t  page_blink_delete_bit;        //{ +0x0000@62 +0x0000@62 +0x0000@62 +0x0000@62 } | .PageBlinkDeleteBit
        _m03 volatile uint1_t  page_blink_lock_bit;          //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .PageBlinkLockBit
        _m04 volatile uint62_t share_count;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ShareCount
        _m05 volatile uint1_t  page_share_count_delete_bit;  //{ +0x0000@62 +0x0000@62 +0x0000@62 +0x0000@62 } | .PageShareCountDeleteBit
        _m06 volatile uint1_t  page_share_count_lock_bit;    //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .PageShareCountLockBit
        _m07 uint64_t          entire_field;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntireField
        _m08 volatile int64_t  lock;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m09 volatile uint62_t lock_not_used;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LockNotUsed
        _m10 volatile uint1_t  delete_bit;                   //{ +0x0000@62 +0x0000@62 +0x0000@62 +0x0000@62 } | .DeleteBit
        _m11 volatile uint1_t  lock_bit;                     //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .LockBit
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                            
        //                                                 
        _m12 volatile uint20_t node_blink_high;              //{ +0x0000@36 +0x0000@36 +0x0000@36 } | .NodeBlinkHigh
                                                           
        // Windows 11                                      
        //                                                 
        _m13 volatile uint19_t node_blink_low;               //{ +0x0000@40 } | .NodeBlinkLow
                                                           
        SDK_MAGIC_PROPERTIES( "_MIPFNBLINK.$", 0x8, true, 0x21e170e0e29cd484 );                            
        SDK_FIXED_SIZE( mipfnblink_t, 0x8 );                            
    };                                                     
};
#include "magic/mipfnblink_t.end.hpp"
SDK_VERIFY( struct nt::mipfnblink_t, 0x8 );
