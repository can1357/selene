#pragma once
#include <sdkgen/support_library.hpp>
#include "attribute_t.hpp"

#include "magic/file_mapping_t.start.hpp"
namespace asl
{
    // [class AslFileMapping]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class file_mapping_t                                                 
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                               
        _m00 uint64_t                                file_mapping_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileMappingHandle
        _m01 sdk::array<struct asl::attribute_t, 33> file_attributes;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileAttributes
                                                                         
        SDK_MAGIC_PROPERTIES( "AslFileMapping.$", 0x428, true, 0xc535890cd2e325df );                    
        SDK_DYNAMIC_SIZE( file_mapping_t );                              
    };                                                                   
};
#include "magic/file_mapping_t.end.hpp"
