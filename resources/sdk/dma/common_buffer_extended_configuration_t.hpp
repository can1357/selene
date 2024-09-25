#pragma once
#include <sdkgen/support_library.hpp>
#include "common_buffer_extended_configuration_type_t.hpp"
#include "common_buffer_extended_configuration_access_type_t.hpp"

#include "magic/common_buffer_extended_configuration_t.start.hpp"
namespace dma
{
    // [struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION]
    // => Windows 11
    //
    struct common_buffer_extended_configuration_t                
    {                                                            
        struct u0_logical_address_limits_t                       
        {                                                        
            // Windows 11                                        
            //                                                   
            _m01 int64_t minimum_address;                          //{ +0x0000    } | .MinimumAddress
            _m02 int64_t maximum_address;                          //{ +0x0008    } | .MaximumAddress
                                                                 
            SDK_MAGIC_PROPERTIES( "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.LogicalAddressLimits.$", 0x0, false, 0x932c4d03308df94 );                                       
            SDK_FIXED_SIZE( u0_logical_address_limits_t, 0x10 );                                       
        };                                                       
                                                                 
        struct u1_sub_section_t                                  
        {                                                        
            // Windows 11                                        
            //                                                   
            _m04 uint64_t offset;                                  //{ +0x0000    } | .Offset
            _m05 uint32_t length;                                  //{ +0x0008    } | .Length
                                                                 
            SDK_MAGIC_PROPERTIES( "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.SubSection.$", 0x0, false, 0x7db6c324936fc523 );                              
            SDK_FIXED_SIZE( u1_sub_section_t, 0x10 );                              
        };                                                       
                                                                 
        using config_type_t =          enum dma::common_buffer_extended_configuration_type_t;                       
        using hardware_access_type_t = enum dma::common_buffer_extended_configuration_access_type_t;                       
                                                                 
        // Windows 11                                            
        //                                                       
        _m00 config_type_t                config_type;             //{ +0x0000    } | .ConfigType
        _m03 u0_logical_address_limits_t  logical_address_limits;  //{ +0x0008    } | .LogicalAddressLimits
        _m06 u1_sub_section_t             sub_section;             //{ +0x0008    } | .SubSection
        _m07 hardware_access_type_t       hardware_access_type;    //{ +0x0008    } | .HardwareAccessType
                                                                 
        SDK_MAGIC_PROPERTIES( "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.$", 0x0, false, 0x3dd7ca404eac562f );                       
        SDK_FIXED_SIZE( common_buffer_extended_configuration_t, 0x28 );                       
    };                                                           
};
#include "magic/common_buffer_extended_configuration_t.end.hpp"
SDK_VERIFY( struct dma::common_buffer_extended_configuration_t::u0_logical_address_limits_t, 0x10 );
SDK_VERIFY( struct dma::common_buffer_extended_configuration_t::u1_sub_section_t, 0x10 );
SDK_VERIFY( struct dma::common_buffer_extended_configuration_t, 0x28 );
