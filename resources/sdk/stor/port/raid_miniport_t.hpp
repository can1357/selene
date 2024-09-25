#pragma once
#include <sdkgen/support_library.hpp>
#include "unit_control_list_t.hpp"
#include "adapter_control_list_t.hpp"
#include "port_configuration_information_t.hpp"

#include "magic/raid_miniport_t.start.hpp"
namespace stor::port
{
    struct raid_hw_device_ext_t;
    struct hw_initialization_data_t;
    struct raid_adapter_extension_t;

    // [struct _RAID_MINIPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_miniport_t                                                       
    {                                                                            
        struct u0_flags_t                                                        
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                   
            _m04 uint1_t in_find_adapter;                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .InFindAdapter
            _m05 uint1_t in_reset_bus;                                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .InResetBus
            _m06 uint1_t is_virtual;                                               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IsVirtual
            _m07 uint1_t unit_control_list_populated;                              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UnitControlListPopulated
            _m08 uint1_t adapter_control_list_populated;                           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .AdapterControlListPopulated
                                                                                 
            SDK_MAGIC_PROPERTIES( "_RAID_MINIPORT.Flags.$", 0x1, true, 0x4d3661a5e75b43de );                                                      
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                                                      
        };                                                                       
                                                                                 
        using port_configuration_t = struct stor::port::port_configuration_information_t;                       
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                       
        _m00 struct stor::port::raid_adapter_extension_t* adapter;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Adapter
        _m01 port_configuration_t                         port_configuration;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PortConfiguration
        _m02 struct stor::port::hw_initialization_data_t* hw_initialization_data;  //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .HwInitializationData
        _m03 struct stor::port::raid_hw_device_ext_t*     private_device_ext;      //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .PrivateDeviceExt
        _m09 u0_flags_t                                   flags;                   //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .Flags
        _m10 struct stor::port::unit_control_list_t       unit_control_list;       //{ +0x00fc    +0x00fc    +0x00fc    +0x00fc    } | .UnitControlList
        _m11 struct stor::port::adapter_control_list_t    adapter_control_list;    //{ +0x010c    +0x0110    +0x0110    +0x0110    } | .AdapterControlList
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m12 uint32_t                                     feature_count;           //{ +0x0128    +0x012c    +0x0128    } | .FeatureCount
        _m13 sdk::array<uint8_t, 1>                       feature_list;            //{ +0x012c    +0x0130    +0x012c    } | .FeatureList
                                                                                 
        SDK_MAGIC_PROPERTIES( "_RAID_MINIPORT.$", 0x130, true, 0x46f8709b1d8ee4b6 );                       
        SDK_DYNAMIC_SIZE( raid_miniport_t );                                     
    };                                                                           
};
#include "magic/raid_miniport_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_miniport_t::u0_flags_t, 0x1 );
