#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_port_data_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_PORT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_port_data_t                             
    {                                                   
        struct u0_driver_list_t                         
        {                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                          
            _m01 nt::list_entry_t list;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
            _m02 uint64_t         lock;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
            _m03 uint32_t         count;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Count
                                                        
            SDK_MAGIC_PROPERTIES( "_RAID_PORT_DATA.DriverList.$", 0x20, true, 0x2a7cd18d3c005ff9 );                      
            SDK_FIXED_SIZE( u0_driver_list_t, 0x20 );                      
        };                                              
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 uint32_t                   reference_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReferenceCount
        _m04 u0_driver_list_t           driver_list;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverList
                                                        
        SDK_MAGIC_PROPERTIES( "_RAID_PORT_DATA.$", 0x28, true, 0x41c29acd357145b0 );                
        SDK_FIXED_SIZE( raid_port_data_t, 0x28 );                
    };                                                  
};
#include "magic/raid_port_data_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_port_data_t::u0_driver_list_t, 0x20 );
SDK_VERIFY( struct stor::port::raid_port_data_t, 0x28 );
