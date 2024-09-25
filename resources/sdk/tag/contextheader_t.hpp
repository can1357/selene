#pragma once
#include <sdkgen/support_library.hpp>
#include "byrefhdr_t.hpp"
#include "byvalhdr_t.hpp"
#include "ctxversion_t.hpp"
#include "ctxcommonhdr_t.hpp"

#include "magic/contextheader_t.start.hpp"
namespace tag
{
    // [struct tagCONTEXTHEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct contextheader_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                         
        _m00 struct tag::ctxversion_t   version;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct tag::ctxcommonhdr_t cmn_hdr;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CmnHdr
        _m02 struct tag::byvalhdr_t     by_val_hdr;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ByValHdr
        _m03 struct tag::byrefhdr_t     by_ref_hdr;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ByRefHdr
                                                   
        SDK_MAGIC_PROPERTIES( "tagCONTEXTHEADER.$", 0x30, true, 0x97aba35eedf4c28d );           
        SDK_FIXED_SIZE( contextheader_t, 0x30 );           
    };                                             
};
#include "magic/contextheader_t.end.hpp"
SDK_VERIFY( struct tag::contextheader_t, 0x30 );
