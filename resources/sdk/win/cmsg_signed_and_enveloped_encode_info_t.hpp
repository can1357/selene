#pragma once
#include <sdkgen/support_library.hpp>
#include "cmsg_signed_encode_info_t.hpp"
#include "cmsg_enveloped_encode_info_t.hpp"

#include "magic/cmsg_signed_and_enveloped_encode_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_signed_and_enveloped_encode_info_t                   
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                           
        _m00 uint32_t                                 cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cmsg_signed_encode_info_t    signed_info;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignedInfo
        _m02 struct win::cmsg_enveloped_encode_info_t enveloped_info;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EnvelopedInfo
                                                                     
        SDK_MAGIC_PROPERTIES( "_CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO.$", 0x78, true, 0x3b72236322db0eb6 );               
        SDK_FIXED_SIZE( cmsg_signed_and_enveloped_encode_info_t, 0x78 );               
    };                                                               
};
#include "magic/cmsg_signed_and_enveloped_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_signed_and_enveloped_encode_info_t, 0x78 );
