#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_volume_properties_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_VOLUME_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_volume_properties_t                    
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                            
        _m00 uint32_t         device_type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceType
        _m01 uint32_t         device_characteristics;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceCharacteristics
        _m02 uint32_t         device_object_flags;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObjectFlags
        _m03 uint32_t         alignment_requirement;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AlignmentRequirement
        _m04 uint16_t         sector_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SectorSize
        _m05 uint16_t         flags;                    //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Flags
        _m06 nt::unicode_view file_system_driver_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileSystemDriverName
        _m07 nt::unicode_view file_system_device_name;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FileSystemDeviceName
        _m08 nt::unicode_view real_device_name;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RealDeviceName
                                                      
        SDK_MAGIC_PROPERTIES( "_FLT_VOLUME_PROPERTIES.$", 0x48, true, 0xa75d40ec89b175ce );                        
        SDK_FIXED_SIZE( flt_volume_properties_t, 0x48 );                        
    };                                                
};
#include "magic/flt_volume_properties_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_volume_properties_t, 0x48 );
