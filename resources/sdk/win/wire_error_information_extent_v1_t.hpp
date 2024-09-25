#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wire_error_information_extent_v1_t.start.hpp"
namespace win
{
    // [struct WireErrorInformationExtentV1]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_error_information_extent_v1_t                
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                   
        _m00 uint32_t                help_context;             //{ +0x0000    +0x0000    +0x0000    } | .helpContext
        _m01 struct nt::guid_t       iid;                      //{ +0x0004    +0x0004    +0x0004    } | .iid
        _m02 uint32_t                unique_source;            //{ +0x0014    +0x0014    +0x0014    } | .unique_source
        _m03 uint32_t                unique_description;       //{ +0x0018    +0x0018    +0x0018    } | .unique_description
        _m04 uint32_t                unique_help_file;         //{ +0x001c    +0x001c    +0x001c    } | .unique_helpFile
        _m05 sdk::array<uint32_t, 8> reserved_for_versioning;  //{ +0x0020    +0x0020    +0x0020    } | .reservedForVersioning
                                                             
        SDK_MAGIC_PROPERTIES( "WireErrorInformationExtentV1.$", 0x40, true, 0xf0b39a99686299a2 );                        
        SDK_FIXED_SIZE( wire_error_information_extent_v1_t, 0x40 );                        
    };                                                       
};
#include "magic/wire_error_information_extent_v1_t.end.hpp"
SDK_VERIFY( struct win::wire_error_information_extent_v1_t, 0x40 );
