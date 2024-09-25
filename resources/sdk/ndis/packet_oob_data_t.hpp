#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/packet_oob_data_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_OOB_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_oob_data_t                     
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint64_t time_to_send;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeToSend
        _m01 uint64_t time_sent;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeSent
        _m02 uint64_t time_received;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeReceived
        _m03 uint32_t header_size;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeaderSize
        _m04 uint32_t size_media_specific_info;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SizeMediaSpecificInfo
        _m05 void*    media_specific_information;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MediaSpecificInformation
        _m06 int32_t  status;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Status
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_OOB_DATA.$", 0x28, true, 0x61d11610d69f3a2f );                           
        SDK_FIXED_SIZE( packet_oob_data_t, 0x28 );                           
    };                                           
};
#include "magic/packet_oob_data_t.end.hpp"
SDK_VERIFY( struct ndis::packet_oob_data_t, 0x28 );
