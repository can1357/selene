#pragma once
#include <sdkgen/support_library.hpp>
#include "device_power_state_t.hpp"
#include "../pop/device_idle_type_t.hpp"

namespace pop { struct cooling_extension_t; }

#include "magic/device_object_power_extension_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _DEVICE_OBJECT_POWER_EXTENSION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_object_power_extension_t                              
    {                                                                   
        union u0_specific_t                                             
        {                                                               
            struct u4_disk_t                                            
            {                                                           
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
                //                                                      
                _m13 uint32_t idle_time;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleTime
                _m14 uint32_t non_idle_time;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NonIdleTime
                                                                        
                SDK_MAGIC_PROPERTIES( "_DEVICE_OBJECT_POWER_EXTENSION.Specific.Disk.$", 0x8, true, 0xbbd8273ceaaa8420 );                                          
                SDK_FIXED_SIZE( u4_disk_t, 0x8 );                                          
            };                                                          
                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                          
            _m15 u4_disk_t                  disk;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Disk
                                                                        
            SDK_MAGIC_PROPERTIES( "_DEVICE_OBJECT_POWER_EXTENSION.Specific.$", 0x8, true, 0xd6469b0af564db3a );                            
            SDK_FIXED_SIZE( u0_specific_t, 0x8 );                            
        };                                                              
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                              
        _m00 volatile uint32_t                   idle_count;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleCount
        _m01 volatile uint32_t                   busy_count;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BusyCount
        _m02 volatile uint32_t                   busy_reference;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BusyReference
        _m03 uint32_t                            total_busy_count;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TotalBusyCount
        _m04 uint32_t                            conservation_idle_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ConservationIdleTime
        _m05 uint32_t                            performance_idle_time;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PerformanceIdleTime
        _m06 struct nt::device_object_t*         device_object;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceObject
        _m07 nt::list_entry_t                    idle_list;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IdleList
        _m08 enum pop::device_idle_type_t        idle_type;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IdleType
        _m09 enum nt::device_power_state_t       idle_state;              //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .IdleState
        _m10 enum nt::device_power_state_t       current_state;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CurrentState
        _m11 struct pop::cooling_extension_t*    cooling_extension;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CoolingExtension
        _m12 nt::list_entry_t                    volume;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Volume
        _m16 u0_specific_t                       specific;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Specific
                                                                        
        SDK_MAGIC_PROPERTIES( "_DEVICE_OBJECT_POWER_EXTENSION.$", 0x60, true, 0x6942cba6439f9b49 );                       
        SDK_DYNAMIC_SIZE( device_object_power_extension_t );                       
    };                                                                  
};
#include "magic/device_object_power_extension_t.end.hpp"
SDK_VERIFY( struct nt::device_object_power_extension_t::u0_specific_t::u4_disk_t, 0x8 );
SDK_VERIFY( union nt::device_object_power_extension_t::u0_specific_t, 0x8 );
