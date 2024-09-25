#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/stor_hmb_range_t.start.hpp"
namespace stor::port
{
    struct stor_hmb_range_t;

    // [struct _STOR_HMB_RANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_hmb_range_t                                       
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                        
        _m00 struct stor::port::stor_hmb_range_t* next_range;       //{ +0x0000    +0x0000    +0x0000    } | .NextRange
        _m01 struct nt::mdl_t*                    mdl;              //{ +0x0008    +0x0008    +0x0008    } | .Mdl
        _m02 int64_t                              logical_address;  //{ +0x0010    +0x0010    +0x0010    } | .LogicalAddress
        _m03 void*                                virtual_address;  //{ +0x0018    +0x0018    +0x0018    } | .VirtualAddress
        _m04 uint64_t                             size;             //{ +0x0020    +0x0020    +0x0020    } | .Size
                                                                  
        SDK_MAGIC_PROPERTIES( "_STOR_HMB_RANGE.$", 0x28, true, 0xdd65f5cd5aedd446 );                
        SDK_FIXED_SIZE( stor_hmb_range_t, 0x28 );                 
    };                                                            
};
#include "magic/stor_hmb_range_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_hmb_range_t, 0x28 );
