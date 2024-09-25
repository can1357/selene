#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/reminterfaceref_t.hpp"

#include "magic/postrelrifref_t.start.hpp"
namespace win
{
    class oxid_entry_t;
    struct i_unknown_t;
    struct i_rem_unknown_t;

    // [struct POSTRELRIFREF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct postrelrifref_t                                         
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                         
        _m00 class win::oxid_entry_t*      p_oxid_entry;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pOXIDEntry
        _m01 struct win::i_rem_unknown_t*  p_rem_unk;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pRemUnk
        _m02 int1_t                        f_release_rem_unk_proxy;  //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .fReleaseRemUnkProxy
        _m03 int1_t                        f_release_from_na;        //{ +0x0030@1  +0x0030@1  +0x0030@1  +0x0030@1  } | .fReleaseFromNA
        _m04 struct win::i_unknown_t*      p_async_release;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pAsyncRelease
        _m05 uint16_t                      c_rif_ref;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cRifRef
        _m06 struct tag::reminterfaceref_t ar_rif_ref;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .arRifRef
                                                                   
        SDK_MAGIC_PROPERTIES( "POSTRELRIFREF.$", 0x70, true, 0x27784c8cb65f9d01 );                        
        SDK_FIXED_SIZE( postrelrifref_t, 0x70 );                        
    };                                                             
};
#include "magic/postrelrifref_t.end.hpp"
SDK_VERIFY( struct win::postrelrifref_t, 0x70 );
