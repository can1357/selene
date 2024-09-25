#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mcgen_trace_context_t.start.hpp"
namespace nt
{
    // [struct _MCGEN_TRACE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mcgen_trace_context_t                 
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                       
        _m00 uint64_t        registration_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegistrationHandle
        _m01 uint64_t        logger;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Logger
        _m02 uint64_t        match_any_keyword;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MatchAnyKeyword
        _m03 uint64_t        match_all_keyword;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MatchAllKeyword
        _m04 uint32_t        flags;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m05 uint32_t        is_enabled;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .IsEnabled
        _m06 uint8_t         level;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Level
        _m07 uint8_t         reserve;              //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .Reserve
        _m08 uint16_t        enable_bits_count;    //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .EnableBitsCount
        _m09 uint32_t*       enable_bit_mask;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EnableBitMask
        _m10 const uint64_t* enable_key_words;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EnableKeyWords
        _m11 const uint8_t*  enable_level;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EnableLevel
                                                 
        SDK_MAGIC_PROPERTIES( "_MCGEN_TRACE_CONTEXT.$", 0x48, true, 0x1ee0844117c12eaf );                    
        SDK_FIXED_SIZE( mcgen_trace_context_t, 0x48 );                    
    };                                           
};
#include "magic/mcgen_trace_context_t.end.hpp"
SDK_VERIFY( struct nt::mcgen_trace_context_t, 0x48 );
