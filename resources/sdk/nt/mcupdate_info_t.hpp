#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mcupdate_info_t.start.hpp"
namespace nt
{
    // [struct _MCUPDATE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mcupdate_info_t                          
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 nt::list_entry_t        list;            //{ +0x0000    +0x0000    +0x0000    } | .List
        _m01 uint32_t                status;          //{ +0x0010    +0x0010    +0x0010    } | .Status
        _m02 uint64_t                id;              //{ +0x0018    +0x0018    +0x0018    } | .Id
        _m03 sdk::array<uint64_t, 2> vendor_scratch;  //{ +0x0020    +0x0020    +0x0020    } | .VendorScratch
                                                    
        SDK_MAGIC_PROPERTIES( "_MCUPDATE_INFO.$", 0x30, true, 0xec0b7958e319004f );               
        SDK_FIXED_SIZE( mcupdate_info_t, 0x30 );               
    };                                              
};
#include "magic/mcupdate_info_t.end.hpp"
SDK_VERIFY( struct nt::mcupdate_info_t, 0x30 );
