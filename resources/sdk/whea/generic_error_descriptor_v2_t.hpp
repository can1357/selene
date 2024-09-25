#pragma once
#include <sdkgen/support_library.hpp>
#include "notification_descriptor_t.hpp"

#include "magic/generic_error_descriptor_v2_t.start.hpp"
namespace whea
{
    // [struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generic_error_descriptor_v2_t                                           
    {                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                         
        _m00 uint16_t                               type;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                enabled;                         //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Enabled
        _m02 uint32_t                               err_status_block_length;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ErrStatusBlockLength
        _m03 uint32_t                               related_error_source_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RelatedErrorSourceId
        _m04 uint8_t                                err_status_address_space_id;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrStatusAddressSpaceID
        _m05 uint8_t                                err_status_address_bit_width;    //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .ErrStatusAddressBitWidth
        _m06 uint8_t                                err_status_address_bit_offset;   //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .ErrStatusAddressBitOffset
        _m07 uint8_t                                err_status_address_access_size;  //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .ErrStatusAddressAccessSize
        _m08 int64_t                                err_status_address;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrStatusAddress
        _m09 struct whea::notification_descriptor_t notify;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Notify
        _m10 uint8_t                                read_ack_address_space_id;       //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .ReadAckAddressSpaceID
        _m11 uint8_t                                read_ack_address_bit_width;      //{ +0x0035    +0x0035    +0x0035    +0x0035    +0x0035    } | .ReadAckAddressBitWidth
        _m12 uint8_t                                read_ack_address_bit_offset;     //{ +0x0036    +0x0036    +0x0036    +0x0036    +0x0036    } | .ReadAckAddressBitOffset
        _m13 uint8_t                                read_ack_address_access_size;    //{ +0x0037    +0x0037    +0x0037    +0x0037    +0x0037    } | .ReadAckAddressAccessSize
        _m14 int64_t                                read_ack_address;                //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ReadAckAddress
        _m15 uint64_t                               read_ack_preserve_mask;          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ReadAckPreserveMask
        _m16 uint64_t                               read_ack_write_mask;             //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ReadAckWriteMask
                                                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.$", 0x50, true, 0xccf99a396ed8e14f );                               
        SDK_FIXED_SIZE( generic_error_descriptor_v2_t, 0x50 );                               
    };                                                                             
};
#include "magic/generic_error_descriptor_v2_t.end.hpp"
SDK_VERIFY( struct whea::generic_error_descriptor_v2_t, 0x50 );
