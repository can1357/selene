#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_payload_predicate_t.start.hpp"
namespace nt
{
    // [struct _EVENT_PAYLOAD_PREDICATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_payload_predicate_t             
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 uint16_t                field_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FieldIndex
        _m01 uint16_t                compare_op;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CompareOp
        _m02 sdk::array<uint64_t, 2> value;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                 
        SDK_MAGIC_PROPERTIES( "_EVENT_PAYLOAD_PREDICATE.$", 0x18, true, 0xb469937535253c3 );            
        SDK_FIXED_SIZE( event_payload_predicate_t, 0x18 );            
    };                                           
};
#include "magic/event_payload_predicate_t.end.hpp"
SDK_VERIFY( struct nt::event_payload_predicate_t, 0x18 );
