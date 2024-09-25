#pragma once
#include <sdkgen/support_library.hpp>
#include "wmiregguidw_t.hpp"

#include "magic/wmireginfow_t.start.hpp"
namespace win
{
    // [struct WMIREGINFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmireginfow_t                                             
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint32_t                              buffer_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferSize
        _m01 uint32_t                              next_wmi_reg_info;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NextWmiRegInfo
        _m02 uint32_t                              registry_path;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RegistryPath
        _m03 uint32_t                              mof_resource_name;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MofResourceName
        _m04 uint32_t                              guid_count;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GuidCount
        _m05 sdk::array<struct win::wmiregguidw_t> wmi_reg_guid;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WmiRegGuid
                                                                     
        SDK_MAGIC_PROPERTIES( "WMIREGINFOW.$", 0x18, true, 0xbafe92374b4b3f6a );                  
        SDK_FIXED_SIZE( wmireginfow_t, 0x18 );                       
    };                                                               
};
#include "magic/wmireginfow_t.end.hpp"
SDK_VERIFY( struct win::wmireginfow_t, 0x18 );
