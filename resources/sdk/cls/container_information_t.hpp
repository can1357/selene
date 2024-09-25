#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/container_information_t.start.hpp"
namespace cls
{
    // [struct _CLS_CONTAINER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct container_information_t                            
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m00 uint32_t                 file_attributes;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileAttributes
        _m01 uint64_t                 creation_time;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CreationTime
        _m02 uint64_t                 last_access_time;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastAccessTime
        _m03 uint64_t                 last_write_time;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LastWriteTime
        _m04 int64_t                  container_size;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ContainerSize
        _m05 uint32_t                 file_name_actual_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FileNameActualLength
        _m06 uint32_t                 file_name_length;         //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .FileNameLength
        _m07 sdk::array<wchar_t, 256> file_name;                //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FileName
        _m08 uint32_t                 state;                    //{ +0x0230    +0x0230    +0x0230    +0x0230    +0x0230    } | .State
        _m09 uint32_t                 physical_container_id;    //{ +0x0234    +0x0234    +0x0234    +0x0234    +0x0234    } | .PhysicalContainerId
        _m10 uint32_t                 logical_container_id;     //{ +0x0238    +0x0238    +0x0238    +0x0238    +0x0238    } | .LogicalContainerId
                                                              
        SDK_NONVOL_PROPERTIES( "_CLS_CONTAINER_INFORMATION.$", 0x240, true, 0xde5ab58c6f61c0de );                        
        SDK_FIXED_SIZE( container_information_t, 0x240 );                        
    };                                                        
};
#include "magic/container_information_t.end.hpp"
SDK_VERIFY( struct cls::container_information_t, 0x240 );
