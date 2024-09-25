#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/mipid_t.start.hpp"
namespace win
{
    // [struct MIPID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mipid_t                    
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                            
        _m00 uint64_t          mid;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mid
        _m01 struct nt::guid_t ipid;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ipid
        _m02 uint32_t          dw_apt;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwApt
                                      
        SDK_MAGIC_PROPERTIES( "MIPID.$", 0x20, true, 0x292217a9e1b4be8 );       
        SDK_FIXED_SIZE( mipid_t, 0x20 );       
    };                                
};
#include "magic/mipid_t.end.hpp"
SDK_VERIFY( struct win::mipid_t, 0x20 );
