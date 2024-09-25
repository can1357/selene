#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scope_table_amd64_t.start.hpp"
namespace win
{
    // [struct _SCOPE_TABLE_AMD64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scope_table_amd64_t                             
    {                                                      
        struct u0_scope_record_t                           
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                             
            _m01 uint32_t begin_address;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BeginAddress
            _m02 uint32_t end_address;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EndAddress
            _m03 uint32_t handler_address;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandlerAddress
            _m04 uint32_t jump_target;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .JumpTarget
                                                           
            SDK_MAGIC_PROPERTIES( "_SCOPE_TABLE_AMD64.ScopeRecord.$", 0x10, true, 0xbee9764a1b07efd0 );                             
            SDK_FIXED_SIZE( u0_scope_record_t, 0x10 );                             
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                 
        _m00 uint32_t                         count;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m05 sdk::array<u0_scope_record_t, 1> scope_record;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ScopeRecord
                                                           
        SDK_MAGIC_PROPERTIES( "_SCOPE_TABLE_AMD64.$", 0x14, true, 0xf6683935a8148cd1 );             
        SDK_FIXED_SIZE( scope_table_amd64_t, 0x14 );             
    };                                                     
};
#include "magic/scope_table_amd64_t.end.hpp"
SDK_VERIFY( struct win::scope_table_amd64_t::u0_scope_record_t, 0x10 );
SDK_VERIFY( struct win::scope_table_amd64_t, 0x14 );
