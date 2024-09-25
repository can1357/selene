#pragma once
#include <sdkgen/support_library.hpp>
#include "input_message_origin_id_t.hpp"
#include "input_message_device_type_t.hpp"

#include "magic/input_message_source_t.start.hpp"
namespace tag
{
    // [struct tagINPUT_MESSAGE_SOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct input_message_source_t                              
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                     
        _m00 enum tag::input_message_device_type_t device_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .deviceType
        _m01 enum tag::input_message_origin_id_t   origin_id;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .originId
                                                               
        SDK_MAGIC_PROPERTIES( "tagINPUT_MESSAGE_SOURCE.$", 0x8, true, 0xe4687416ffaa01e5 );            
        SDK_FIXED_SIZE( input_message_source_t, 0x8 );            
    };                                                         
};
#include "magic/input_message_source_t.end.hpp"
SDK_VERIFY( struct tag::input_message_source_t, 0x8 );
