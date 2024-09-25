#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmwsle_free_entry_t.start.hpp"
namespace nt
{
    // [struct _MMWSLE_FREE_ENTRY]
    // => Windows 10 v1607
    //
    struct mmwsle_free_entry_t      
    {                               
        // Windows 10 v1607              
        //                          
        _m00 uint1_t  must_be_zero;   //{ +0x0000@0  } | .MustBeZero
        _m01 uint27_t previous_free;  //{ +0x0000@1  } | .PreviousFree
        _m02 uint36_t next_free;      //{ +0x0000@28 } | .NextFree
                                    
        SDK_MAGIC_PROPERTIES( "_MMWSLE_FREE_ENTRY.$", 0x0, false, 0x85a41eddb4427fd7 );              
        SDK_FIXED_SIZE( mmwsle_free_entry_t, 0x8 );              
    };                              
};
#include "magic/mmwsle_free_entry_t.end.hpp"
SDK_VERIFY( struct nt::mmwsle_free_entry_t, 0x8 );
