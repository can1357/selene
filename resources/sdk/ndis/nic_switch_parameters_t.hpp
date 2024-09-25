#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "nic_switch_type_t.hpp"
#include "if_counted_string_lh_t.hpp"

#include "magic/nic_switch_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NIC_SWITCH_PARAMETERS]
    // => Windows 10 v1607
    //
    struct nic_switch_parameters_t                                                  
    {                                                                               
        // Windows 10 v1607                                                         
        //                                                                          
        _m00 struct ndis::object_header_t        header;                              //{ +0x0000    } | .Header
        _m01 uint32_t                            flags;                               //{ +0x0004    } | .Flags
        _m02 enum ndis::nic_switch_type_t        switch_type;                         //{ +0x0008    } | .SwitchType
        _m03 uint32_t                            switch_id;                           //{ +0x000c    } | .SwitchId
        _m04 struct ndis::if_counted_string_lh_t switch_friendly_name;                //{ +0x0010    } | .SwitchFriendlyName
        _m05 uint32_t                            num_v_fs;                            //{ +0x0214    } | .NumVFs
        _m06 uint32_t                            ndis_reserved1;                      //{ +0x0218    } | .NdisReserved1
        _m07 uint32_t                            ndis_reserved2;                      //{ +0x021c    } | .NdisReserved2
        _m08 uint32_t                            ndis_reserved3;                      //{ +0x0220    } | .NdisReserved3
        _m09 uint32_t                            num_queue_pairs_for_default_v_port;  //{ +0x0224    } | .NumQueuePairsForDefaultVPort
                                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_NIC_SWITCH_PARAMETERS.$", 0x0, false, 0xb3d80bb35294cee7 );                                   
        SDK_FIXED_SIZE( nic_switch_parameters_t, 0x228 );                                   
    };                                                                              
};
#include "magic/nic_switch_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::nic_switch_parameters_t, 0x228 );
