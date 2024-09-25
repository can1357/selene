#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdi_handle_bit_fields_t.start.hpp"
namespace kuser
{
    // [struct GDIHandleBitFields]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gdi_handle_bit_fields_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint16_t index;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Index
        _m01 uint5_t  type;         //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Type
        _m02 uint2_t  alt_type;     //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .AltType
        _m03 uint1_t  stock;        //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .Stock
        _m04 uint8_t  unique;       //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Unique
                                  
        SDK_MAGIC_PROPERTIES( "GDIHandleBitFields.$", 0x8, true, 0x82e31f5f503ea10 );         
        SDK_FIXED_SIZE( gdi_handle_bit_fields_t, 0x8 );         
    };                            
};
#include "magic/gdi_handle_bit_fields_t.end.hpp"
SDK_VERIFY( struct kuser::gdi_handle_bit_fields_t, 0x8 );
