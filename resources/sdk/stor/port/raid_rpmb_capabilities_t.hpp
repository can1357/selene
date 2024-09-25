#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_address_t.hpp"
#include "stor_rpmb_frame_type_t.hpp"

#include "magic/raid_rpmb_capabilities_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_RPMB_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_rpmb_capabilities_t                                               
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                        
        _m00 nt::unicode_view                        interface_name_rpmb;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceNameRpmb
        _m01 uint32_t                                rpmb_size;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RpmbSize
        _m02 uint32_t                                max_reliable_rpmb_write_size;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxReliableRpmbWriteSize
        _m03 uint8_t                                 security_protocol;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SecurityProtocol
        _m04 uint16_t                                security_protocol_specifier;   //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .SecurityProtocolSpecifier
        _m05 struct stor::port::stor_address_t       rpmb_target;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RpmbTarget
        _m06 enum stor::port::stor_rpmb_frame_type_t frame_format;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FrameFormat
                                                                                  
        SDK_MAGIC_PROPERTIES( "_RAID_RPMB_CAPABILITIES.$", 0x38, true, 0x5dcc637950dc1f3c );                             
        SDK_FIXED_SIZE( raid_rpmb_capabilities_t, 0x38 );                             
    };                                                                            
};
#include "magic/raid_rpmb_capabilities_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_rpmb_capabilities_t, 0x38 );
