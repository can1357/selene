#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sdbdeviceinfo_t.start.hpp"
namespace tag
{
    // [struct tagSDBDEVICEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbdeviceinfo_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 wchar_t* sz_vendor_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .szVendorId
        _m01 wchar_t* sz_device_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szDeviceId
        _m02 wchar_t* sz_sub_vendor_id;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .szSubVendorId
        _m03 wchar_t* sz_sub_system_id;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .szSubSystemId
        _m04 uint32_t dw_model;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwModel
        _m05 uint32_t dw_family;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwFamily
        _m06 uint32_t dw_date;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwDate
        _m07 uint32_t dw_revision;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwRevision
        _m08 uint32_t dw_creator_revision;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwCreatorRevision
                                          
        SDK_MAGIC_PROPERTIES( "tagSDBDEVICEINFO.$", 0x38, true, 0xcce88b1edccb7777 );                    
        SDK_FIXED_SIZE( sdbdeviceinfo_t, 0x38 );                    
    };                                    
};
#include "magic/sdbdeviceinfo_t.end.hpp"
SDK_VERIFY( struct tag::sdbdeviceinfo_t, 0x38 );
