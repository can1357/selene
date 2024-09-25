#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ifr_record_t.start.hpp"
namespace wdf
{
    // [struct _WDF_IFR_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ifr_record_t                       
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 uint16_t          signature;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t          length;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Length
        _m02 int32_t           sequence;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Sequence
        _m03 uint16_t          prev_offset;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrevOffset
        _m04 uint16_t          message_number;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .MessageNumber
        _m05 struct nt::guid_t message_guid;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MessageGuid
                                              
        SDK_MAGIC_PROPERTIES( "_WDF_IFR_RECORD.$", 0x1c, true, 0xccbf1adb0dcb911c );               
        SDK_FIXED_SIZE( ifr_record_t, 0x1c );               
    };                                        
};
#include "magic/ifr_record_t.end.hpp"
SDK_VERIFY( struct wdf::ifr_record_t, 0x1c );
