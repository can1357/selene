#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "if_counted_string_lh_t.hpp"

#include "magic/nic_switch_vf_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NIC_SWITCH_VF_PARAMETERS]
    // => Windows 10 v1607
    //
    struct nic_switch_vf_parameters_t                                  
    {                                                                  
        // Windows 10 v1607                                            
        //                                                             
        _m00 struct ndis::object_header_t        header;                 //{ +0x0000    } | .Header
        _m01 uint32_t                            flags;                  //{ +0x0004    } | .Flags
        _m02 uint32_t                            switch_id;              //{ +0x0008    } | .SwitchId
        _m03 struct ndis::if_counted_string_lh_t vm_name;                //{ +0x000c    } | .VMName
        _m04 struct ndis::if_counted_string_lh_t vm_friendly_name;       //{ +0x0210    } | .VMFriendlyName
        _m05 struct ndis::if_counted_string_lh_t nic_name;               //{ +0x0414    } | .NicName
        _m06 uint16_t                            mac_address_length;     //{ +0x0618    } | .MacAddressLength
        _m07 sdk::array<uint8_t, 32>             permanent_mac_address;  //{ +0x061a    } | .PermanentMacAddress
        _m08 sdk::array<uint8_t, 32>             current_mac_address;    //{ +0x063a    } | .CurrentMacAddress
        _m09 uint16_t                            vf_id;                  //{ +0x065a    } | .VFId
        _m10 uint32_t                            requestor_id;           //{ +0x065c    } | .RequestorId
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_NIC_SWITCH_VF_PARAMETERS.$", 0x0, false, 0x2ef7fdcb9db33254 );                      
        SDK_FIXED_SIZE( nic_switch_vf_parameters_t, 0x660 );                      
    };                                                                 
};
#include "magic/nic_switch_vf_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::nic_switch_vf_parameters_t, 0x660 );
