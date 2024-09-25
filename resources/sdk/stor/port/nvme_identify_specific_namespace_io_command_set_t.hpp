#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_lba_zone_format_t.hpp"

#include "magic/nvme_identify_specific_namespace_io_command_set_t.start.hpp"
namespace stor::port
{
    // [struct NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET]
    // => Windows 11
    //
    struct nvme_identify_specific_namespace_io_command_set_t
    {                                                       
        struct u0_zoc_t                                     
        {                                                   
            // Windows 11                                  
            //                                             
            _m00 uint1_t variable_zone_capacity;              //{ +0x0000@0  } | .VariableZoneCapacity
            _m01 uint1_t zone_excursions;                     //{ +0x0000@1  } | .ZoneExcursions
                                                            
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.ZOC.$", 0x0, false, 0xf5f1521f92b6965d );                             
            SDK_FIXED_SIZE( u0_zoc_t, 0x2 );                             
        };                                                  
                                                            
        struct u1_ozcs_t                                    
        {                                                   
            // Windows 11                                  
            //                                             
            _m03 uint1_t read_across_zone_boundaries;         //{ +0x0000@0  } | .ReadAcrossZoneBoundaries
                                                            
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.OZCS.$", 0x0, false, 0xb99fb3bae993b806 );                                  
            SDK_FIXED_SIZE( u1_ozcs_t, 0x2 );                                  
        };                                                  
                                                            
        using lbaef_t = sdk::array<struct stor::port::nvme_lba_zone_format_t, 16>;      
                                                            
        // Windows 11                                      
        //                                                 
        _m02 u0_zoc_t                                zoc;     //{ +0x0000    } | .ZOC
        _m04 u1_ozcs_t                               ozcs;    //{ +0x0002    } | .OZCS
        _m05 uint32_t                                mar;     //{ +0x0004    } | .MAR
        _m06 uint32_t                                mor;     //{ +0x0008    } | .MOR
        _m07 uint32_t                                rrl;     //{ +0x000c    } | .RRL
        _m08 uint32_t                                frl;     //{ +0x0010    } | .FRL
        _m09 lbaef_t                                 lbaef;   //{ +0x0b00    } | .LBAEF
        _m10 sdk::array<uint8_t, 256>                vs;      //{ +0x0f00    } | .VS
                                                            
        SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.$", 0x0, false, 0x19ce61b604d5316 );      
        SDK_FIXED_SIZE( nvme_identify_specific_namespace_io_command_set_t, 0x1000 );      
    };                                                      
};
#include "magic/nvme_identify_specific_namespace_io_command_set_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_identify_specific_namespace_io_command_set_t::u0_zoc_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_specific_namespace_io_command_set_t::u1_ozcs_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_specific_namespace_io_command_set_t, 0x1000 );
