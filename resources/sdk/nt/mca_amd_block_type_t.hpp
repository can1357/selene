#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MCA_AMD_BLOCK_TYPE]
    //  Windows 11
    //
    enum class mca_amd_block_type_t : int32_t
    {                                        
        ls =      0x0,                         // Windows 11
        _if =     0x1,                         // Windows 11
        l2 =      0x2,                         // Windows 11
        de =      0x3,                         // Windows 11
        raz =     0x4,                         // Windows 11
        ex =      0x5,                         // Windows 11
        fp =      0x6,                         // Windows 11
        l3 =      0x7,                         // Windows 11
        umc =     0x8,                         // Windows 11
        smu =     0x9,                         // Windows 11
        psp =     0xa,                         // Windows 11
        pb =      0xb,                         // Windows 11
        cs =      0xc,                         // Windows 11
        pie =     0xd,                         // Windows 11
        mp5 =     0xe,                         // Windows 11
        nbio =    0xf,                         // Windows 11
        pc_ie =   0x10,                        // Windows 11
        unknown = 0x11,                        // Windows 11
    };                                       
};
