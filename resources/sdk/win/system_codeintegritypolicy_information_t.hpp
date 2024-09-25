#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/system_codeintegritypolicy_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CODEINTEGRITYPOLICY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_codeintegritypolicy_information_t
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 uint32_t          options;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Options
        _m01 uint32_t          hvci_options;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HVCIOptions
        _m02 uint64_t          version;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
        _m03 struct nt::guid_t policy_guid;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PolicyGuid
                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CODEINTEGRITYPOLICY_INFORMATION.$", 0x20, true, 0x321f662da7543fae );             
        SDK_FIXED_SIZE( system_codeintegritypolicy_information_t, 0x20 );             
    };                                             
};
#include "magic/system_codeintegritypolicy_information_t.end.hpp"
SDK_VERIFY( struct win::system_codeintegritypolicy_information_t, 0x20 );
