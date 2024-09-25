#pragma once
#include <sdkgen/support_library.hpp>
#include "ipsec_offload_v2_operation_t.hpp"
#include "ipsec_offload_v2_algorithm_info_t.hpp"

#include "magic/ipsec_offload_v2_security_association_t.start.hpp"
namespace ndis
{
    // [struct _IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_security_association_t                                     
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                             
        _m00 uint32_t                                       flags;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 enum ndis::ipsec_offload_v2_operation_t        operation;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Operation
        _m02 uint32_t                                       spi;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Spi
        _m03 struct ndis::ipsec_offload_v2_algorithm_info_t authentication_algorithm;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AuthenticationAlgorithm
        _m04 struct ndis::ipsec_offload_v2_algorithm_info_t encryption_algorithm;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EncryptionAlgorithm
        _m05 uint32_t                                       sequence_number_high_order;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SequenceNumberHighOrder
                                                                                       
        SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION.$", 0x30, true, 0x1b93adb8112d1df5 );                           
        SDK_FIXED_SIZE( ipsec_offload_v2_security_association_t, 0x30 );                           
    };                                                                                 
};
#include "magic/ipsec_offload_v2_security_association_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_security_association_t, 0x30 );
