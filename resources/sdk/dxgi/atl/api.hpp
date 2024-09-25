#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::atl
{
    // [_AtlBaseModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcdfc0, 0x17e70 bytes
    // dxgi.dll .data:0xcdfc0, 0x17e70 bytes
    // dxgi.dll .data:0xcd060, 0x18b10 bytes
    // dxgi.dll .data:0xcf010, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) atl_base_module;
    
    // [AtlCallTermFunc@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x582d8, 0x17e70 bytes
    // dxgi.dll .text:0x583c8, 0x17e70 bytes
    // dxgi.dll .text:0x63648, 0x18b10 bytes
    // dxgi.dll .text:0x5986c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) atl_call_term_func;
    
    // [_AtlComModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xce070, 0x17e70 bytes
    // dxgi.dll .data:0xce070, 0x17e70 bytes
    // dxgi.dll .data:0xcd110, 0x18b10 bytes
    // dxgi.dll .data:0xcf0c0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) atl_com_module;
    
    // [AtlComPtrAssign@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb060, 0x17e70 bytes
    // dxgi.dll .text:0xb090, 0x17e70 bytes
    // dxgi.dll .text:0x1abf0, 0x18b10 bytes
    // dxgi.dll .text:0x1f8a0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) atl_com_ptr_assign;
    
    // [AtlComQIPtrAssign@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd034, 0x17e70 bytes
    // dxgi.dll .text:0xd064, 0x17e70 bytes
    // dxgi.dll .text:0x17e44, 0x18b10 bytes
    // dxgi.dll .text:0x8244, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) atl_com_qi_ptr_assign;
    
    // [AtlInternalQueryInterface@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5780, 0x17e70 bytes
    // dxgi.dll .text:0x5780, 0x17e70 bytes
    // dxgi.dll .text:0x20340, 0x18b10 bytes
    // dxgi.dll .text:0x1a330, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) atl_internal_query_interface;
    
    // [_AtlWinModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xce020, 0x17e70 bytes
    // dxgi.dll .data:0xce020, 0x17e70 bytes
    // dxgi.dll .data:0xcd0c0, 0x18b10 bytes
    // dxgi.dll .data:0xcf070, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) atl_win_module;
    
    // [InlineIsEqualUnknown@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23954, 0x17e70 bytes
    // dxgi.dll .text:0x23c54, 0x17e70 bytes
    // dxgi.dll .text:0x250ac, 0x18b10 bytes
    // dxgi.dll .text:0x24a54, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) inline_is_equal_unknown;
    
    // [_pAtlModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbea8, 0x17e70 bytes
    // dxgi.dll .data:0xcbea8, 0x17e70 bytes
    // dxgi.dll .data:0xcaf28, 0x18b10 bytes
    // dxgi.dll .data:0xcce78, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) p_atl_module;
};
#include "magic/api.end.hpp"
