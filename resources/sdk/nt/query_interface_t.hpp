#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_interface_t.start.hpp"
namespace nt
{
    struct guid_t;
    struct interface_t;

    // [struct _QUERY_INTERFACE]
    // => WDK 10 (NV)
    //
    struct query_interface_t                                  
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 const struct nt::guid_t* interface_type;           //{ +0x0000    } | .InterfaceType
        _m01 uint16_t                 size;                     //{ +0x0008    } | .Size
        _m02 uint16_t                 version;                  //{ +0x000a    } | .Version
        _m03 struct nt::interface_t*  interface;                //{ +0x0010    } | .Interface
        _m04 void*                    interface_specific_data;  //{ +0x0018    } | .InterfaceSpecificData
        _m05 uint32_t                 device_uid;               //{ +0x0020    } | .DeviceUid
                                                              
        SDK_NONVOL_PROPERTIES( "_QUERY_INTERFACE.$", 0x0, false, 0x6c0563fea1d19833 );                        
        SDK_FIXED_SIZE( query_interface_t, 0x28 );                        
    };                                                        
};
#include "magic/query_interface_t.end.hpp"
SDK_VERIFY( struct nt::query_interface_t, 0x28 );
