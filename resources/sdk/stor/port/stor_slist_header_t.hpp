#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_slist_header_t.start.hpp"
namespace stor::port
{
    // [union _STOR_SLIST_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union stor_slist_header_t                    
    {                                            
        struct u0_header8_t                      
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                   
            _m02 uint16_t depth;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Depth
            _m03 uint9_t  sequence;                //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Sequence
            _m04 uint39_t next_entry;              //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .NextEntry
            _m05 uint1_t  header_type;             //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .HeaderType
            _m06 uint1_t  init;                    //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .Init
            _m07 uint3_t  region;                  //{ +0x0008@61 +0x0008@61 +0x0008@61 +0x0008@61 } | .Region
                                                 
            SDK_MAGIC_PROPERTIES( "_STOR_SLIST_HEADER.Header8.$", 0x10, true, 0xd64d8f4583b8b72 );                       
            SDK_FIXED_SIZE( u0_header8_t, 0x10 );                       
        };                                       
                                                 
        struct u4_header16_t                     
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                   
            _m09 uint16_t depth;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Depth
            _m10 uint48_t sequence;                //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Sequence
            _m11 uint1_t  header_type;             //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .HeaderType
            _m12 uint1_t  init;                    //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .Init
            _m13 uint60_t next_entry;              //{ +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  } | .NextEntry
                                                 
            SDK_MAGIC_PROPERTIES( "_STOR_SLIST_HEADER.Header16.$", 0x10, true, 0xba9dea352ad6a9cb );                       
            SDK_FIXED_SIZE( u4_header16_t, 0x10 );                       
        };                                       
                                                 
        struct u8_header_x64_t                   
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                   
            _m15 uint16_t depth;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Depth
            _m16 uint48_t sequence;                //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Sequence
            _m17 uint1_t  header_type;             //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .HeaderType
            _m18 uint60_t next_entry;              //{ +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  } | .NextEntry
                                                 
            SDK_MAGIC_PROPERTIES( "_STOR_SLIST_HEADER.HeaderX64.$", 0x10, true, 0xbeada7b538ebbabb );                       
            SDK_FIXED_SIZE( u8_header_x64_t, 0x10 );                       
        };                                       
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m00 uint64_t                 alignment;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Alignment
        _m01 uint64_t                 region;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Region
        _m08 u0_header8_t             header8;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header8
        _m14 u4_header16_t            header16;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header16
        _m19 u8_header_x64_t          header_x64;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderX64
                                                 
        SDK_MAGIC_PROPERTIES( "_STOR_SLIST_HEADER.$", 0x10, true, 0x8ee1b18c08430174 );           
        SDK_FIXED_SIZE( stor_slist_header_t, 0x10 );           
    };                                           
};
#include "magic/stor_slist_header_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_slist_header_t::u0_header8_t, 0x10 );
SDK_VERIFY( struct stor::port::stor_slist_header_t::u4_header16_t, 0x10 );
SDK_VERIFY( struct stor::port::stor_slist_header_t::u8_header_x64_t, 0x10 );
SDK_VERIFY( union stor::port::stor_slist_header_t, 0x10 );
