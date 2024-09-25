#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/event_descriptor_t.hpp"

namespace nt { struct event_data_descriptor_t; }

#include "magic/event_entry_t.start.hpp"
namespace win
{
    struct event_entry_t;

    // [struct EVENT_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_entry_t                                              
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct nt::event_descriptor_t       event_descriptor;      //{ +0x0000    +0x0000    +0x0000    } | .EventDescriptor
        _m01 struct nt::event_data_descriptor_t* user_data;             //{ +0x0010    +0x0010    +0x0010    } | .UserData
        _m02 struct win::event_entry_t*          left_entry;            //{ +0x0018    +0x0018    +0x0018    } | .LeftEntry
        _m03 struct win::event_entry_t*          right_entry;           //{ +0x0020    +0x0020    +0x0020    } | .RightEntry
        _m04 uint32_t                            hash;                  //{ +0x0028    +0x0028    +0x0028    } | .Hash
        _m05 uint8_t                             user_data_count;       //{ +0x002c    +0x002c    +0x002c    } | .UserDataCount
        _m06 uint8_t                             num_aggregate_fields;  //{ +0x002d    +0x002d    +0x002d    } | .NumAggregateFields
                                                                      
        SDK_MAGIC_PROPERTIES( "EVENT_ENTRY.$", 0x2e, true, 0xd6dc4708e078585 );                     
        SDK_FIXED_SIZE( event_entry_t, 0x2e );                        
    };                                                                
};
#include "magic/event_entry_t.end.hpp"
SDK_VERIFY( struct win::event_entry_t, 0x2e );
