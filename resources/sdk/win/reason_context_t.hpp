#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reason_context_t.start.hpp"
namespace win
{
    struct hinstance_t;

    // [struct _REASON_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reason_context_t                                                                        
    {                                                                                              
        union u0_reason_t                                                                          
        {                                                                                          
            struct u4_detailed_t                                                                   
            {                                                                                      
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
                //                                                                                 
                _m02 struct win::hinstance_t* localized_reason_module;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LocalizedReasonModule
                _m03 uint32_t                 localized_reason_id;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LocalizedReasonId
                _m04 uint32_t                 reason_string_count;                                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReasonStringCount
                _m05 wchar_t**                reason_strings;                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReasonStrings
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_REASON_CONTEXT.Reason.Detailed.$", 0x18, true, 0xe028d9599b9a3d17 );                                                     
                SDK_FIXED_SIZE( u4_detailed_t, 0x18 );                                                     
            };                                                                                     
                                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                                                                     
            _m06 u4_detailed_t                                        detailed;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Detailed
            _m07 wchar_t*                                             simple_reason_string;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SimpleReasonString
                                                                                                   
            SDK_MAGIC_PROPERTIES( "_REASON_CONTEXT.Reason.$", 0x18, true, 0x538c28ee79f695c9 );                             
            SDK_FIXED_SIZE( u0_reason_t, 0x18 );                                                   
        };                                                                                         
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                                         
        _m00 uint32_t                                                                      version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                                                      flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m08 u0_reason_t                                                                   reason;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Reason
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_REASON_CONTEXT.$", 0x20, true, 0x6fc20109fbe90bc1 );               
        SDK_FIXED_SIZE( reason_context_t, 0x20 );                                                  
    };                                                                                             
};
#include "magic/reason_context_t.end.hpp"
SDK_VERIFY( struct win::reason_context_t::u0_reason_t::u4_detailed_t, 0x18 );
SDK_VERIFY( union win::reason_context_t::u0_reason_t, 0x18 );
SDK_VERIFY( struct win::reason_context_t, 0x20 );
