#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/windows_block_device_token_limits_descriptor_t.start.hpp"
namespace nt
{
    // [struct _WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct windows_block_device_token_limits_descriptor_t       
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 sdk::array<uint8_t, 2> descriptor_type;              //{ +0x0000    } | .DescriptorType
        _m01 sdk::array<uint8_t, 2> descriptor_length;            //{ +0x0002    } | .DescriptorLength
        _m02 sdk::array<uint8_t, 6> vendor_specific;              //{ +0x0004    } | .VendorSpecific
        _m03 sdk::array<uint8_t, 2> maximum_range_descriptors;    //{ +0x000a    } | .MaximumRangeDescriptors
        _m04 sdk::array<uint8_t, 4> maximum_inactivity_timer;     //{ +0x000c    } | .MaximumInactivityTimer
        _m05 sdk::array<uint8_t, 4> default_inactivity_timer;     //{ +0x0010    } | .DefaultInactivityTimer
        _m06 sdk::array<uint8_t, 8> maximum_token_transfer_size;  //{ +0x0014    } | .MaximumTokenTransferSize
        _m07 sdk::array<uint8_t, 8> optimal_transfer_count;       //{ +0x001c    } | .OptimalTransferCount
                                                                
        SDK_NONVOL_PROPERTIES( "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.$", 0x0, false, 0xc84327987088194c );                            
        SDK_FIXED_SIZE( windows_block_device_token_limits_descriptor_t, 0x24 );                            
    };                                                          
};
#include "magic/windows_block_device_token_limits_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::windows_block_device_token_limits_descriptor_t, 0x24 );
