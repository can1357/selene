#pragma once
#include <sdkgen/support_library.hpp>
#include "client_id_t.hpp"

#include "magic/port_message_t.start.hpp"
namespace nt
{
    // [struct _PORT_MESSAGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct port_message_t                                 
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 int16_t                data_length;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataLength
        _m01 int16_t                total_length;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TotalLength
        _m02 uint32_t               length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m03 int16_t                type;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m04 int16_t                data_info_offset;       //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .DataInfoOffset
        _m05 uint32_t               zero_init;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ZeroInit
        _m06 struct nt::client_id_t client_id;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClientId
        _m07 double                 do_not_use_this_field;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DoNotUseThisField
        _m08 uint32_t               message_id;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MessageId
        _m09 uint64_t               client_view_size;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ClientViewSize
        _m10 uint32_t               callback_id;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CallbackId
                                                          
        SDK_NONVOL_PROPERTIES( "_PORT_MESSAGE.$", 0x28, true, 0x39fd804e2773b91d );                      
        SDK_FIXED_SIZE( port_message_t, 0x28 );                      
    };                                                    
};
#include "magic/port_message_t.end.hpp"
SDK_VERIFY( struct nt::port_message_t, 0x28 );
