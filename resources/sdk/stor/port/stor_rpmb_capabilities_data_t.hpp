#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_address_t.hpp"
#include "stor_rpmb_frame_type_t.hpp"

#include "magic/stor_rpmb_capabilities_data_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_RPMB_CAPABILITIES_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_rpmb_capabilities_data_t                                          
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                        
        _m00 uint32_t                                version;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                size;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                                rpmb_size;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RpmbSize
        _m03 uint32_t                                max_reliable_rpmb_write_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxReliableRpmbWriteSize
        _m04 uint8_t                                 security_protocol;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SecurityProtocol
        _m05 uint16_t                                security_protocol_specifier;   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .SecurityProtocolSpecifier
        _m06 struct stor::port::stor_address_t       rpmb_target;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RpmbTarget
        _m07 enum stor::port::stor_rpmb_frame_type_t frame_format;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FrameFormat
                                                                                  
        SDK_MAGIC_PROPERTIES( "_STOR_RPMB_CAPABILITIES_DATA.$", 0x30, true, 0xd000b9bcbe3b9299 );                             
        SDK_FIXED_SIZE( stor_rpmb_capabilities_data_t, 0x30 );                             
    };                                                                            
};
#include "magic/stor_rpmb_capabilities_data_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_rpmb_capabilities_data_t, 0x30 );
