#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ndr64_constant_iid_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_CONSTANT_IID_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_constant_iid_format_t     
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 uint8_t           format_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t           flags;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 struct nt::guid_t guid;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Guid
                                           
        SDK_MAGIC_PROPERTIES( "_NDR64_CONSTANT_IID_FORMAT.$", 0x14, true, 0x720b788cb2696d6d );            
        SDK_FIXED_SIZE( ndr64_constant_iid_format_t, 0x14 );            
    };                                     
};
#include "magic/ndr64_constant_iid_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_constant_iid_format_t, 0x14 );
