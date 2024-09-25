#pragma once
#include <sdkgen/support_library.hpp>
#include "ksreset_t.hpp"
#include "ksstate_t.hpp"
#include "kspriority_t.hpp"
#include "ksidentifier_t.hpp"
#include "kspin_dataflow_t.hpp"
#include "kspin_communication_t.hpp"

#include "magic/kspin_t.start.hpp"
namespace ndis
{
    union ksdataformat_t;
    struct ksmultiple_item_t;
    struct kspin_descriptor_ex_t;

    // [struct _KSPIN]
    // => Windows 10 v1607
    //
    struct kspin_t                                                            
    {                                                                         
        // Windows 10 v1607                                                   
        //                                                                    
        _m00 const struct ndis::kspin_descriptor_ex_t* descriptor;              //{ +0x0000    } | .Descriptor
        _m01 void*                                     bag;                     //{ +0x0008    } | .Bag
        _m02 void*                                     context;                 //{ +0x0010    } | .Context
        _m03 uint32_t                                  id;                      //{ +0x0018    } | .Id
        _m04 enum ndis::kspin_communication_t          communication;           //{ +0x001c    } | .Communication
        _m05 uint8_t                                   connection_is_external;  //{ +0x0020    } | .ConnectionIsExternal
        _m06 struct ndis::ksidentifier_t               connection_interface;    //{ +0x0028    } | .ConnectionInterface
        _m07 struct ndis::ksidentifier_t               connection_medium;       //{ +0x0040    } | .ConnectionMedium
        _m08 struct ndis::kspriority_t                 connection_priority;     //{ +0x0058    } | .ConnectionPriority
        _m09 union ndis::ksdataformat_t*               connection_format;       //{ +0x0060    } | .ConnectionFormat
        _m10 struct ndis::ksmultiple_item_t*           attribute_list;          //{ +0x0068    } | .AttributeList
        _m11 uint32_t                                  stream_header_size;      //{ +0x0070    } | .StreamHeaderSize
        _m12 enum ndis::kspin_dataflow_t               data_flow;               //{ +0x0074    } | .DataFlow
        _m13 enum ndis::ksstate_t                      device_state;            //{ +0x0078    } | .DeviceState
        _m14 enum ndis::ksreset_t                      reset_state;             //{ +0x007c    } | .ResetState
        _m15 enum ndis::ksstate_t                      client_state;            //{ +0x0080    } | .ClientState
                                                                              
        SDK_MAGIC_PROPERTIES( "_KSPIN.$", 0x0, false, 0x2f9e47777bfde09a );                       
        SDK_FIXED_SIZE( kspin_t, 0x88 );                                      
    };                                                                        
};
#include "magic/kspin_t.end.hpp"
SDK_VERIFY( struct ndis::kspin_t, 0x88 );
