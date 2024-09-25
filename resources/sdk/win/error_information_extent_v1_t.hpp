#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/error_information_extent_v1_t.start.hpp"
namespace win
{
    // [struct ErrorInformationExtentV1]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_information_extent_v1_t                     
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                   
        _m00 uint32_t                help_context;             //{ +0x0000    +0x0000    +0x0000    } | .helpContext
        _m01 struct nt::guid_t       iid;                      //{ +0x0004    +0x0004    +0x0004    } | .iid
        _m02 wchar_t*                source;                   //{ +0x0018    +0x0018    +0x0018    } | .source
        _m03 wchar_t*                description;              //{ +0x0020    +0x0020    +0x0020    } | .description
        _m04 wchar_t*                help_file;                //{ +0x0028    +0x0028    +0x0028    } | .helpFile
        _m05 sdk::array<uint32_t, 8> reserved_for_versioning;  //{ +0x0030    +0x0030    +0x0030    } | .reservedForVersioning
                                                             
        SDK_MAGIC_PROPERTIES( "ErrorInformationExtentV1.$", 0x50, true, 0xbb217521b9798e4e );                        
        SDK_FIXED_SIZE( error_information_extent_v1_t, 0x50 );                        
    };                                                       
};
#include "magic/error_information_extent_v1_t.end.hpp"
SDK_VERIFY( struct win::error_information_extent_v1_t, 0x50 );
