#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksprocesspin_t.start.hpp"
namespace ndis
{
    struct kspin_t;
    struct ksprocesspin_t;
    struct ksstream_pointer_t;

    // [struct _KSPROCESSPIN]
    // => Windows 10 v1607
    //
    struct ksprocesspin_t                                          
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 struct ndis::kspin_t*            pin;                   //{ +0x0000    } | .Pin
        _m01 struct ndis::ksstream_pointer_t* stream_pointer;        //{ +0x0008    } | .StreamPointer
        _m02 struct ndis::ksprocesspin_t*     in_place_counterpart;  //{ +0x0010    } | .InPlaceCounterpart
        _m03 struct ndis::ksprocesspin_t*     delegate_branch;       //{ +0x0018    } | .DelegateBranch
        _m04 struct ndis::ksprocesspin_t*     copy_source;           //{ +0x0020    } | .CopySource
        _m05 void*                            data;                  //{ +0x0028    } | .Data
        _m06 uint32_t                         bytes_available;       //{ +0x0030    } | .BytesAvailable
        _m07 uint32_t                         bytes_used;            //{ +0x0034    } | .BytesUsed
        _m08 uint32_t                         flags;                 //{ +0x0038    } | .Flags
        _m09 uint8_t                          terminate;             //{ +0x003c    } | .Terminate
                                                                   
        SDK_MAGIC_PROPERTIES( "_KSPROCESSPIN.$", 0x0, false, 0x8c4d4c1a171f0044 );                     
        SDK_FIXED_SIZE( ksprocesspin_t, 0x40 );                     
    };                                                             
};
#include "magic/ksprocesspin_t.end.hpp"
SDK_VERIFY( struct ndis::ksprocesspin_t, 0x40 );
