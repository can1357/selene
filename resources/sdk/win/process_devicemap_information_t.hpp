#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_devicemap_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_DEVICEMAP_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_devicemap_information_t                
    {                                                     
        struct u0_set_t                                   
        {                                                 
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                            
            _m00 void* directory_handle;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DirectoryHandle
                                                          
            SDK_NONVOL_PROPERTIES( "_PROCESS_DEVICEMAP_INFORMATION.Set.$", 0x8, true, 0xbdd8dc6e75ad5313 );                       
            SDK_FIXED_SIZE( u0_set_t, 0x8 );                       
        };                                                
                                                          
        struct u5_query_t                                 
        {                                                 
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                            
            _m02 uint32_t                drive_map;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DriveMap
            _m03 sdk::array<uint8_t, 32> drive_type;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DriveType
                                                          
            SDK_NONVOL_PROPERTIES( "_PROCESS_DEVICEMAP_INFORMATION.Query.$", 0x24, true, 0xd5fb1461b0f479e9 );                 
            SDK_FIXED_SIZE( u5_query_t, 0x24 );                 
        };                                                
                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                
        _m01 u0_set_t                               set;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Set
        _m04 u5_query_t                             query;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Query
                                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_DEVICEMAP_INFORMATION.$", 0x28, true, 0x9607aefe4c75f9d9 );      
        SDK_FIXED_SIZE( process_devicemap_information_t, 0x28 );      
    };                                                    
};
#include "magic/process_devicemap_information_t.end.hpp"
SDK_VERIFY( struct win::process_devicemap_information_t::u0_set_t, 0x8 );
SDK_VERIFY( struct win::process_devicemap_information_t::u5_query_t, 0x24 );
SDK_VERIFY( struct win::process_devicemap_information_t, 0x28 );
