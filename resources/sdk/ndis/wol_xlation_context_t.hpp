#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wol_xlation_context_t.start.hpp"
namespace ndis
{
    struct pm_wol_pattern_t;
    struct pm_packet_pattern_t;

    // [struct _NDIS_WOL_XLATION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wol_xlation_context_t                                         
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                               
        _m00 uint32_t                          original_oid;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OriginalOid
        _m01 void*                             information_buffer;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InformationBuffer
        _m02 uint32_t                          information_buffer_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InformationBufferLength
        _m03 struct ndis::pm_wol_pattern_t*    wol_pattern;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WolPattern
        _m04 struct ndis::pm_packet_pattern_t* packet_pattern;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PacketPattern
        _m05 uint32_t                          pattern_to_remove;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PatternToRemove
                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_WOL_XLATION_CONTEXT.$", 0x20, true, 0xeef06a117dc81c6f );                          
        SDK_FIXED_SIZE( wol_xlation_context_t, 0x20 );                          
    };                                                                   
};
#include "magic/wol_xlation_context_t.end.hpp"
SDK_VERIFY( struct ndis::wol_xlation_context_t, 0x20 );
