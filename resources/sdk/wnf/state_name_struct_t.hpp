#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/state_name_struct_t.start.hpp"
namespace wnf
{
    // [struct _WNF_STATE_NAME_STRUCT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_name_struct_t       
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint4_t  version;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Version
        _m01 uint2_t  name_lifetime;   //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .NameLifetime
        _m02 uint4_t  data_scope;      //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .DataScope
        _m03 uint1_t  permanent_data;  //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .PermanentData
        _m04 uint53_t sequence;        //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .Sequence
                                     
        SDK_MAGIC_PROPERTIES( "_WNF_STATE_NAME_STRUCT.$", 0x8, true, 0x4582c1c872824fde );               
        SDK_FIXED_SIZE( state_name_struct_t, 0x8 );               
    };                               
};
#include "magic/state_name_struct_t.end.hpp"
SDK_VERIFY( struct wnf::state_name_struct_t, 0x8 );
