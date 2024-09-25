#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_devicemap_information_ex_t.start.hpp"
namespace win
{
    // [struct _PROCESS_DEVICEMAP_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_devicemap_information_ex_t             
    {                                                     
        struct u0_set_t                                   
        {                                                 
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                            
            _m00 void* directory_handle;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DirectoryHandle
                                                          
            SDK_NONVOL_PROPERTIES( "_PROCESS_DEVICEMAP_INFORMATION_EX.Set.$", 0x8, true, 0x879cf70fe6d2fd58 );                       
            SDK_FIXED_SIZE( u0_set_t, 0x8 );                       
        };                                                
                                                          
        struct u5_query_t                                 
        {                                                 
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                            
            _m02 uint32_t                drive_map;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DriveMap
            _m03 sdk::array<uint8_t, 32> drive_type;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DriveType
                                                          
            SDK_NONVOL_PROPERTIES( "_PROCESS_DEVICEMAP_INFORMATION_EX.Query.$", 0x24, true, 0x2f8639d63e29fa54 );                 
            SDK_FIXED_SIZE( u5_query_t, 0x24 );                 
        };                                                
                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                
        _m01 u0_set_t                               set;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Set
        _m04 u5_query_t                             query;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Query
        _m05 uint32_t                               flags;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
                                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_DEVICEMAP_INFORMATION_EX.$", 0x30, true, 0x6eb3dbdda70ffa4d );      
        SDK_FIXED_SIZE( process_devicemap_information_ex_t, 0x30 );      
    };                                                    
};
#include "magic/process_devicemap_information_ex_t.end.hpp"
SDK_VERIFY( struct win::process_devicemap_information_ex_t::u0_set_t, 0x8 );
SDK_VERIFY( struct win::process_devicemap_information_ex_t::u5_query_t, 0x24 );
SDK_VERIFY( struct win::process_devicemap_information_ex_t, 0x30 );
